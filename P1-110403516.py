"""
Practice 1
Name: 李倬安
Student Number: 110403516
Course 2022-CE1003-A
"""

pass_int=0
chinese_int=int(input("Please enter your Chinese score: "))
english_int=int(input("Please enter your English score: "))
math_int=int(input("Please enter your Math score: "))
science_int=int(input("Please enter your Science score: "))
if(chinese_int>=12):
    pass_int+=1
if(english_int>=12):
    pass_int+=1
if(math_int>=8):
    pass_int+=1
if(science_int>=12):
    pass_int+=1
if(pass_int==4):
    print("Welcome to NCU CSIE!")
else:
    print("Sorry, you can't enter NCU CSIE.")