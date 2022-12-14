"""
Practice 3
Name: 李倬安
Student Number: 110403516
Course 2022-CE1003-A
"""


file_input = open('input.txt', 'r')

file_output = open('output.txt', 'w')

column = int(file_input.readline())

# Because writing to file needs string, so I define a string in the function and return it.
def CreatePyramid(column):
    ans_string = ''
    for i in range(1, column + 1):
        for k in range(1, column + 1 - i):
            ans_string += ' '
        for j in range(1, i*2):
            ans_string += '*'
        if (i != column):       # avoid the last line has '\n'
            ans_string += '\n'  
    return ans_string


file_output.write(CreatePyramid(column))
file_input.close()
file_output.close()
