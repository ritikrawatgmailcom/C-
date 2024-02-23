test_case=int(input())
for _ in range(test_case):
    n=list(map(int,input().split()))
    array=list(map(int,input().split()))
    array.sort()
    diff=abs(sum(array[0:n[1]])  - sum(array[n[1]:]))
    print(diff)