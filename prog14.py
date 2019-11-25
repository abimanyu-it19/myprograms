x,y,z=int(input("enter 1st number:")),int(input("enter 2nd number:")),int(input("enter 3rd number:"))
if((x>y) and (x>z)):
    print(x,"is the greatest number")
elif((y>x) and (y>z)):
    print(y,"is the greatest number")
else:
    print(z,"is the greatest number")


