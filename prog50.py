for i in range(100,999,1):
    c=0
    n=i
    while (n!=0):
         b=n%10
         c=c+b*b*b
         n//=10
    if(i==c):
         print(i,"is a armstrong number")

