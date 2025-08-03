import math
t = int(input())
i = 0
while i < t:
    degree = int(input())
    if 360 % (180 - degree) == 0:
        print("YES")
    else:
        print("NO")
    i += 1
