QuadSolver 
Define double a, b, c, root1, root2, discriminant 
  Get a,b,c from user 
  discriminant =  b*b-4*a*c 
  If discriminant>0   
    Root1 = (-b+sqrt(discriminant))/(2*a) 
    Root2 = (-b-sqrt(discriminant))/(2*a) 
    Print root1 and root2 
  Else if discriminant ==0 
    root1 = root2 = -b/(2*a) 
    Print root1 and root2 which are equal 
  End If 
//code has not taken into factor of roots that are not real 
End QuadSolver
