# 2 DOF Inverse Kinematics

## 2 link planar manipulator example (2-DoF)

<img width="666" height="400" alt="image" src="https://github.com/user-attachments/assets/4d727d28-2cc0-4901-99aa-b7a712daf959" />

In this image, we can assign the upper arm and the forearm of the robotic arm as "a1" and "a2" respectively. Coordinates x and y designated by the point E would be the position of the wrist.

We can define the coordinates as the following:
* x = a1 * cos(theta1) + a2 * cos(theta1+2)
* y = a1 * sin(theta1) + a2 * sin(theta1+2)

Our goal is to isolate the corresponding angles of each joint, so the end-effector (wrist in this case) reaches a desired point in space.

First, we must identify what are the accessible coordinates given the lengths of the upper and fore arm (a1, a2). Since both joints only operate in a rotational manner, we can optimize the area in which the wrist can exist.

If a1 > a2, we must consider the following:
...

### Solving for each angle

Since we are working with circles, it would be logical to use the circle equation (x^2 + y^2 = r^2) in order the derive the joint angles.
<p style="text-align:center;">x^2 + y^2 = [a1 * cos(theta1) + a2 * cos(theta2)]^2 + [a1 * sin(theta1) + a2 * sin(theta2)]^2</p>
= a1^2 + a2^2 + 2a1a2[cos(T1)cos(T1+2) + sin(T1)sin(T1+2)] //here T is short for theta
= a1^2 + a2^2 + 2a1a2*cos(T2) //because of trigonometric  identity: cosA * cosB + sinA * sinB = cos(A-B) &rarr; in this case, A = theta 1 and B = theta1+2. the difference = theta 2

cos(T2) = x^2 + y^2 - a1^2 + a2^2 / 2a1a2
T2 = arccos( x^2 + y^2 - a1^2 + a2^2 / 2a1a2 )
