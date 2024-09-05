T = int(input())
for i in range(T):
    x,y,z = map(int,input().split())
    
    curr_x = 0
    curr_y = 0
    
    counter = 0
    direction = 1


    while (curr_x!=x or curr_y!=y):
        if direction==1:
            if (curr_x!=x):
                if (x-curr_x>=z):
                    curr_x+=z
                else:
                    num = x-curr_x
                    curr_x+=num
            counter+=1
            direction=0
        else:
            if (curr_y!=y):
                if (y-curr_y>=z):
                    curr_y+=z
                else:
                    num = y-curr_y
                    curr_y+=num
                
            counter+=1
            direction=1
    print(counter)