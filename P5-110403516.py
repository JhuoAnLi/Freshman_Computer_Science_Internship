"""
Practice 5
Name: 李倬安
Student Number: 110403516
Course 2022-CE1003-A
"""
file_score = open('score.txt', 'r')
file_output = open('output.txt', 'w')

def split_info(score_string_list):
    return_list = []
    for i in range(int(len(score_string_list)/5)):
        return_list.append([score_string_list[i*5], score_string_list[i*5+1],
                           score_string_list[i*5+2], score_string_list[i*5+3], score_string_list[i*5+4]])
    return return_list

def grading_system(student_list):
    return_str = ''
    key = 0
    if int(student_list[1]) >= 12:
        key += 1
    if int(student_list[2]) >= 12:
        key += 1
    if int(student_list[3]) >= 8:
        key += 1
    if int(student_list[4]) >= 12:
        key += 1
    if key == 4:
        return_str = "Hello " + student_list[0] + ", welcome to NCU CSIE!"
    else:
        return_str = "Sorry, " + student_list[0] + " can't enter NCU CSIE."
    return return_str

total_string = ''
ans_string = '' 
# readline() 讀完之後會有'\n'，但因為split()會自動去掉，所以不用擔心
score_string = file_score.readline()
while score_string:
    total_string += score_string
    score_string = file_score.readline()
# split() 默认为所有的空字符，包括空格、换行(\n)、制表符(\t)
score_string_list = total_string.split()

two_dim_list = split_info(score_string_list)
for i in range(len(two_dim_list)):
    ans_string += grading_system(two_dim_list[i])+'\n'
    
file_output.write(ans_string)
file_output.close()

file_score.close()