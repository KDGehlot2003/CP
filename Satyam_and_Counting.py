import itertools
T = int(input())

for _ in range(T):
    n = int(input())
    points = []
    for i in range(n):
        x,y = map(int,input().split())
        points.append([x,y])

    triangles = []
    triangles.append(list(itertools.combinations(points, 3)))
    counter = 0
    for triangle in triangles:
        for i in triangle:
            x1 = i[0][0]
            y1 = i[0][1]
            x2 = i[1][0]
            y2 = i[1][1]
            x3 = i[2][0]
            y3 = i[2][1]
            A = (int(pow((x2 - x1), 2)) +
                int(pow((y2 - y1), 2)))
            B = (int(pow((x3 - x2), 2)) +
                int(pow((y3 - y2), 2)))
            C = (int(pow((x3 - x1), 2)) +
                int(pow((y3 - y1), 2)))
            if ((A > 0 and B > 0 and C > 0) and (A == (B + C) or B == (A + C) or C == (A + B))):
                counter +=1
        print(counter)


    # print(triangles)