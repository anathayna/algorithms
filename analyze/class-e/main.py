def maxLeftRightSum(v, l, m, h):
    sum = 0
    left = -10000
    for i in range(m, l-1, -1):
        sum = sum + v[i]
        if (sum > left):
            left = sum
 
    sum = 0
    right = -1000
    for i in range(m + 1, h + 1):
        sum = sum + v[i]
        if (sum > right):
            right = sum

    return max(left + right, left, right)
 

def maxSumSegment(v, l, h):
    if (l == h):
        return v[l]
 
    mid = (l + h) // 2

    return max(maxSumSegment(v, l, mid),
               maxSumSegment(v, mid+1, h),
               maxLeftRightSum(v, l, mid, h))


v = [-16, 20, -10, 12, 27, -6, -4, 8]
n = len(v)
print "max contiguous sum:", maxSumSegment(v, 0, n-1)

# input -16, 20, -10, 12, 27, -6, -4, 8
# output 1 4 49
# build & run: python ./main.py 