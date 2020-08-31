if __name__ == "__main__":
    t = int(input())
    l = list()
    
    for i in range(t):
        a,b,c,n =map(int,input().split(" "))
        if a > b and a > c:
            n = n - (a-b) - (a-c) 
        elif b > a  and b > c:
            n = n - (b-a) - (b-c)
        else:
            n = n - (c-a) - (c-b)

        if n < 2:
            l.append("NO")
        elif n % 3 == 0:
            l.append("YES")
        else:
            l.append("NO")

    for i in l:
        print(i)
        

            

