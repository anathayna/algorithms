from sys import maxint

def maxSumSegment(v,size):
      
    max_segment = -maxint - 1
    max_end = 0
      
    for i in range(0, size):
        max_end = max_end + v[i]
        if (max_segment < max_end):
            max_segment = max_end
 
        if max_end < 0:
            max_end = 0  
    return max_segment

v = [-16, 20, -10, 12, 27, -6, -4, 8]
print "max sum segment:", maxSumSegment(v, len(v))

# input -16, 20, -10, 12, 27, -6, -4, 8
# output 1 4 49
# build & run: python ./main.py 