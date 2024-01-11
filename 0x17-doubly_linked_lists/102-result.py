#!/usr/bin/python3
x = 0;

for i in range(100, 1000):
    for k in range(100, 1000):
        res = i * k
        if str(res) == str(res)[::-1] and res > x:
            x = res

with open("102-result", "w") as file:
    file.write(str(x))
