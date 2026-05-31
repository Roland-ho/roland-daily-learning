import curses
import random
import time

def main(stdscr):
    # 初始化
    curses.curs_set(0)
    stdscr.nodelay(1)
    stdscr.timeout(100)
    
    # 获取屏幕尺寸
    sh, sw = stdscr.getmaxyx()
    
    # 蛇的初始位置
    snake_x = sw // 4
    snake_y = sh // 2
    snake = [
        [snake_y, snake_x],
        [snake_y, snake_x - 1],
        [snake_y, snake_x - 2]
    ]
    
    # 初始方向
    direction = curses.KEY_RIGHT
    
    # 食物位置
    food = [sh // 2, sw // 2]
    stdscr.addch(food[0], food[1], curses.ACS_DIAMOND)
    
    score = 0
    
    while True:
        # 获取按键
        key = stdscr.getch()
        
        # 改变方向
        if key == curses.KEY_UP and direction != curses.KEY_DOWN:
            direction = curses.KEY_UP
        elif key == curses.KEY_DOWN and direction != curses.KEY_UP:
            direction = curses.KEY_DOWN
        elif key == curses.KEY_LEFT and direction != curses.KEY_RIGHT:
            direction = curses.KEY_LEFT
        elif key == curses.KEY_RIGHT and direction != curses.KEY_LEFT:
            direction = curses.KEY_RIGHT
        elif key == ord('q'):
            break
        
        # 计算新蛇头位置
        head = snake[0].copy()
        if direction == curses.KEY_UP:
            head[0] -= 1
        elif direction == curses.KEY_DOWN:
            head[0] += 1
        elif direction == curses.KEY_LEFT:
            head[1] -= 1
        elif direction == curses.KEY_RIGHT:
            head[1] += 1
        
        # 插入新蛇头
        snake.insert(0, head)
        
        # 检查是否吃到食物
        if head[0] == food[0] and head[1] == food[1]:
            score += 1
            # 生成新食物
            while True:
                new_food = [
                    random.randint(1, sh - 2),
                    random.randint(1, sw - 2)
                ]
                if new_food not in snake:
                    food = new_food
                    break
            stdscr.addch(food[0], food[1], curses.ACS_DIAMOND)
        else:
            # 没吃到就移除尾巴
            tail = snake.pop()
            stdscr.addch(tail[0], tail[1], ' ')
        
        # 检查碰撞
        if (head[0] <= 0 or head[0] >= sh - 1 or
            head[1] <= 0 or head[1] >= sw - 1 or
            head in snake[1:]):
            stdscr.addstr(sh // 2, sw // 2 - 5, f"Game Over! Score: {score}")
            stdscr.addstr(sh // 2 + 1, sw // 2 - 5, "Press 'q' to quit")
            stdscr.refresh()
            while stdscr.getch() != ord('q'):
                pass
            break
        
        # 绘制蛇
        stdscr.addch(snake[0][0], snake[0][1], curses.ACS_CKBOARD)
        
        # 显示分数
        stdscr.addstr(0, 0, f"Score: {score}")
        
        # 刷新屏幕
        stdscr.refresh()
        time.sleep(0.05)

if __name__ == "__main__":
    curses.wrapper(main)
