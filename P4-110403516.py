"""
Practice 4
Name: 李倬安
Student Number: 110403516
Course 2022-CE1003-A
"""


input_file = open('Input.txt', 'r')
output_file = open('Output.txt', 'w')
number_int = 0
answer_string = ''


def find_factor(input_string):
    factor_string = ''
    for i in range(1, int(input_string) + 1):
        if int(input_string) % i == 0:
            factor_string += str(i) + ' '
    return factor_string


def find_prime(factor_string):
    answer_string1 = ''
    if factor_string == '1':
        answer_string1 += factor_string+' F'+'\n'
        return answer_string1
    for i in range(2, int(factor_string)):
        if int(factor_string) % i == 0:
            answer_string1 += factor_string+' F'+'\n'
            return answer_string1
    answer_string1 += factor_string+' T'+'\n'
    return answer_string1


input_string = input_file.readline()
input_string_list = input_string.split()
for input_string in input_string_list:
    number_int += 1
    answer_string += 'Number_'+str(number_int)+': '+input_string+'\n'
    find_factor(input_string)
    for factor_string in find_factor(input_string).split():
        answer_string += find_prime(factor_string)

output_file.write(answer_string)
input_file.close()
output_file.close()
