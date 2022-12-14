"""
Practice 6
Name: 李倬安
Student Number: 110403516
Course 2022-CE1003-A
"""


def print_dec(dec_num):
    total = 0
    k = 0
    for i in dec_num:
        total += int(i)*2**(len(dec_num)-1-k)
        k += 1
    dec_num = total
    print("NUM(DEC) : {}".format(dec_num))


def print_err_msg():
    err_msg = "Not Binary Number!"
    print(err_msg)

print("NUM(BIN) : ",end='')
input_int = input()
key = 0
if input_int.isdigit():
    for i in input_int:
        if int(i) <= 1:
            key += 1
    if key == len(input_int):
        print_dec(input_int)
    else:
        print_err_msg()
    
else:
    print_err_msg()
