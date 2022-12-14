"""
Practice 8
Name: 李倬安
Student Number: 110403516
Course 2022-CE1003-A
"""


def preprocess():
    with open('input.txt', 'r') as file:
        data = list(map(int, file.read().split()))
        file.close()
    return data


def bubble(data):
    for i in range(len(data)-1):
        for j in range(len(data)-1-i):
            if data[j] > data[j+1]:
                data[j], data[j+1] = data[j+1], data[j]
    return data


print(bubble(preprocess()))
