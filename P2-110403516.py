"""
Practice 2
Name: 李倬安
Student Number: 110403516
Course 2022-CE1003-A
"""

detect_upper_case_int = 0
detect_number_int = 0

while 1:
    password_string = input("Please enter your password: ")
    if password_string == "exit":
        break
    if 6 > len(password_string) or len(password_string) > 10:
        print("Password should contain 6 to 10 characters, try again or type \"exit\" to leave.")
        continue
    for upper_case_string in password_string:
        if 65 <= ord(upper_case_string) <= 90:
            detect_upper_case_int = 1
            break
        else:
            continue
    if detect_upper_case_int == 0:
        print("Password should contain at least one upper-case alphabetical character, try again or type \"exit\" to leave.")
        continue
    for number_string in password_string:
        if 48 <= ord(number_string) <= 57:
            detect_number_int = 1
            break
        else:
            continue
    if detect_number_int == 0:
        print("Password should contain at least one number, try again or type \"exit\" to leave.")
        continue
    print("Password is valid.")
    break
