Variables in 3 Link Planar Manipulator (3-DoF)
===============================

In a 3 link planar manipulator (for the vertical 2D (x-z) plane), we have three joints and three links. The variables used to describe the system are as follows:
- `a1`, `a2`, `a3`: Lengths of the first, second, and third links respectively.
- `theta1`, `theta2`, `theta3`: Angles of the first, second, and third joints respectively.
- `psi`: Angle of the end-effector (the tip of the third link) relative to the horizontal axis.
- `x`, `z`: Coordinates of the end-effector (the tip of the third link) in the 2D plane.
- `P2x`, `P2z`: Coordinates of the second joint (the end of the second link) in the 2D plane.

P2x = `x` - `a3` * cos(`psi`) <br>
P2z = `z` - `a3` * sin(`psi`) <br>

Once (P2x, P2z) is known, the problem reduces to a 2 link planar manipulator problem to find theta1 and theta2. <br>
And we can substitute `theta1` and `theta2` into the equation below to find `theta3`: <br>

<div style="text-align: center;"> theta3 = psi - (theta1 + theta2) </div>



