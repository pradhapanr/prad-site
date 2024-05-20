---
layout: default
folder: problems
toc: true
---

# Minimum Distance Between Random Points

*Let $X_1, \dots, X_n$ be $n$ uniform-randomly distributed points on a line segment $[0, 1]$. What is the probability that each pair of points is seperated by a distance of at least $d$?*

<details>
<summary markdown="span">Solution</summary>
Consider a line marked with any random configuration of the $n$ points. We create a bijection between this line and a simpler one, from which the solution becomes clear.

Starting from the point closest to 0, carve out a line segment of length $d$. Close the newly-formed gap by gluing the line back together. Do this for all subsequent points that aren't on a line segment already carved out. Then, combine all the carved out line segments and place it at the end of the glued line.




If all $n$ points were seperated by at least $d$, then the line segment $[1 - nd, 1]$ in the newly-transformed line should have no marked points.

</details>
