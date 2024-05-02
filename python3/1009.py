sqr = [
    [10],
    [1],
    [6, 2, 4, 8],
    [1, 3, 9, 7],
    [6, 4],
    [5],
    [6],
    [1, 7, 9, 3],
    [6, 8, 4, 2],
    [1, 9]
    ]
for i in range(int(input())):
    a, b = map(int, input().split())
    x = a % 10
    y = b % 4
    if x == 0 or x == 1 or x == 5 or x == 6:
        print(sqr[x][0])
    elif x == 4 or x == 9:
        print(sqr[x][y % 2])
    else:
        print(sqr[x][y])