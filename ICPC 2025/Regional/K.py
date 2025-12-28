n,k=map(int,input().split())
reyes=[tuple(map(int,input().split())) for i in range(n)]
if n==1:
    print(1)
    exit()
maxX=max(x for x,y in reyes)
maxY=max(y for x,y in reyes)
minX=min(x for x,y in reyes)
minY=min(y for x,y in reyes)
w=maxX-minX+1
h=maxY-minY+1
def bestTwoKing(w,h,k):
    return max((w+a)*(h+k-a) for a in range(k+1))
bestOneKing=w*h
for x,y in reyes:
    for dx,dy in [(-k,-k),(-k,k),(k,-k),(k,k)]:
        nx=x+dx
        ny=y+dy
        wc=max(maxX,nx)-min(minX,nx)+1
        hc=max(maxY,ny)-min(minY,ny)+1
        option=wc*hc
        bestOneKing=max(bestOneKing,option)
print(max(bestOneKing,bestTwoKing(w,h,k)))