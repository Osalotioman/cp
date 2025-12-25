for _ in range(int(input())):
    n = int(input())
    a = [*map(int, input().split())]
    b = []
    for v in a:
        if v not in b:
            b.append(v)
    #print(b)
    print(a[len(b)-1])