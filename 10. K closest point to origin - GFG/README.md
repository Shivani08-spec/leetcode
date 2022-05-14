# 10. K closest point to origin
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a list of points on the 2-D plane and an integer K. The task is to find K closest points to the origin and print them.</span></p>

<p><span style="font-size:18px"><strong>Note</strong>: The distance between two points on a plane is the&nbsp;<a href="https://en.wikipedia.org/wiki/Euclidean_distance" rel="nofollow" target="_blank">Euclidean distance</a>.You are require to prints the points in increasing order of their distance from the origin. If two points are at same distance from origin&nbsp;then print points in sorted order.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3, K = 2
Points[] = {(3,3),(5,-1),(-2,4)}
<strong>Output: </strong>3 3 -2 4<strong>
Explanation: </strong>Distance between (-2, 4) and
origin is sqrt(20).
Distance between (3, 3) and origin is
sqrt(18).
Distance between (5, -1) and origin is
sqrt(26).
Since two(<strong>K</strong>) shortest distance from origin
are from points <strong>(-2, 4)&nbsp;</strong>and <strong>(3, 3).</strong></span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3, K = 2
Points[] = {(1,3),(-1,3),(5,8)}
<strong>Output: </strong>-1 3 1 3<strong>
Explanation: </strong>Distance between (-1, 3) and
origin is sqrt(10).
Distance between (1, 3) and origin is
sqrt(10).
Distance between (5, 8) and origin is
sqrt(89).
Since two(<strong>K</strong>) shortest distance from origin
are from points <strong>(-1, 3)&nbsp;</strong>and <strong>(1, 3)&nbsp;</strong></span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything.&nbsp;Your task is to complete&nbsp;<strong>kClosest()</strong>&nbsp;function and return the 2D array&nbsp;points[][] of size N x 2 denoting the (X,Y) cooridinates of each point and an integer K. Your task is to return a 2D array(vector/arraylist depending upon the language you choose)&nbsp;of size K x 2 denoting the (X,Y) coordinates of the K-closest points to the origin.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(nLogn)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(n)&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Constraints:&nbsp;</strong><br>
1 &lt;= N&nbsp;&lt;= 10<sup>5</sup><br>
1 &lt;= K&nbsp;&lt;= N<br>
-10<sup>3</sup></span><span style="font-size:18px">&nbsp;&lt;= (X,Y) &lt;= 10<sup>3</sup></span></p>
 <p></p>
            </div>