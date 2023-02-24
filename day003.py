N, K = map(int, input().split())
div = [x for x in range(1,N+1) if N%x==0]
if K > len(div):
    print(0)
else:
    print(div[K-1])
