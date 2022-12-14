"""
Practice 7
Name: 李倬安
Student Number: 110403516
Course 2022-CE1003-A
"""


def get_maze():
    input_file = open('input.txt', 'r')
    maze = []
    for lines in input_file.readlines():
        maze.append(lines.split())
    input_file.close()
    return maze


def dfs(start_x, start_y, end_x, end_y, maze):
    next_step = [[0, 1], [1, 0]]
    if start_x == end_x and start_y == end_y:
        return 1
    for i in next_step:
        if maze[start_x+i[0]][start_y+i[1]] == '1':
            maze[start_x+i[0]][start_y+i[1]] = '0'
            if dfs(start_x+i[0], start_y+i[1], end_x, end_y, maze) == 1:
                return 1
    return 0


maze = get_maze()
start_x = 1
start_y = 1
end_x = 5
end_y = 5
print(dfs(start_x, start_y, end_x, end_y, maze))
