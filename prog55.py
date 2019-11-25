a,b,c,d=int(input("enter the maths mark of the student:")),int(input("enter the physics mark of the student:")),int(input("enter the chemistry mark of the student:")),int(input("enter the python mark of the student:"))
total=a+b+c+d
print("************** STUDENT MARK SHEET **************")
print("the total mark of the student is",total)
avg=total/4
avg=float(avg)
print("the average of the student is:",avg)
if(avg>=95) and (avg<=100):
    print("the grade of the student is A+")
elif((avg<95) and (avg>=90)):
    print("the grade of the student is A")
elif((avg<90) and (avg>=80)):
    print("the grade of the student is B")
elif((avg<80) and (avg>=70)):
    print("the grade of the student is C")
elif((avg<70) and (avg>=60)):
    print("the grade of the student is D")
elif((avg<60) and (avg>=50)):
    print("the grade of the student is E")
else:
    print("the grade of the student is F")

