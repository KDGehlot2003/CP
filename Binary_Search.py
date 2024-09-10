arr = [1,2,3,4,5,6,7,9,10]

target = 8

def fun(arr,target,start,end,mid):
    start = 0
    end = len(arr)
    mid = (start+end)//2
    if 