# 2 DOF Inverse Kinematics

## 2 link planar manipulator example (2-DoF)

<img width="666" height="400" alt="image" src="https://github.com/user-attachments/assets/4d727d28-2cc0-4901-99aa-b7a712daf959" /> <br>
source: https://www.youtube.com/watch?v=NjAAKruKiQM&t=1757s

In this image, we can assign the upper arm and the forearm of the robotic arm as "a1" and "a2" respectively. Coordinates x and y designated by the point E would be the position of the wrist.

We can define the coordinates as the following:
* x = a1 * cos(theta1) + a2 * cos(theta1+2)
* y = a1 * sin(theta1) + a2 * sin(theta1+2)

Our goal is to isolate the corresponding angles of each joint, so the end-effector (wrist in this case) reaches a desired point in space.

First, we must identify what are the accessible coordinates given the lengths of the upper and fore arm (a1, a2). Since both joints only operate in a rotational manner, we can optimize the area in which the wrist can exist.

If a1 > a2, we must consider the following:
...

## Solving for each angle

### Algebraic Derivation:

We start with the geometric expression for the wrist position:
![img.png](../image%20folder/img.png) <br>
Expanding both terms gives us:
![img_1.png](../image%20folder/img_1.png) <br>

Using the trigonometric identity: <br>
![img_2.png](../image%20folder/img_2.png) <br>

We finally obtain: <br>
![img_3.png](../image%20folder/img_3.png) <br>
Notice that : <br>
![img_4.png](../image%20folder/img_4.png) <br>

Since we know that the cosine of an angle (cosA) is equal to its negative cosine of its supplementary angle (cos(-A)). <br>
We can substitute this into the previous equation: <br>
![img_6.png](../image%20folder/img_6.png) <br>

Now, solve for theta2: <br>
![img_7.png](../image%20folder/img_7.png) <br>
![img_8.png](../image%20folder/img_8.png) <br>

