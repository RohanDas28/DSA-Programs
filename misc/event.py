def highest_even(li):
  max = 0
  for i in li:
    if i % 2 == 0 and i > max:
      max = i
  i = i+1
  return max

print (highest_even([10,1,2,3,4,12]))
