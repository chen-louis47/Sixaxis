
//Assign initial angle position of each servo motor
struct Links {
    float L1; // mm
    float L2; // mm
    float L3; // mm
};

struct JointAnglesRad {
    float t1; // shoulder
    float t2; // elbow
    float t3; // wrist
};

struct JointAnglesDeg {
    float t1; // shoulder
    float t2; // elbow
    float t3; // wrist
};

struct Pose2DVertical {
    float x;   // mm
    float y;   // mm
    float phi; // rad (end-effector orientation)
};

struct Pos2DHorizontal
{
    float x; // mm
    float y; // m
};

int main()
{
    //Assign end-effector position
    double x;
    cout << "Enter the x coordinate of the end-effector: ";
    cin >> x;
    double y;
    cout << "Enter the y coordinate of the end-effector: ";
    cin >> y;
    double z;
    cout << "Enter the z coordinate of the end-effector: ";
    cin >> z;

    return 0;
}

void loop()
{

}

//Define the length of each segment of the robotic arm
double a1 = 100.0;
double a2 = 100.0;

//define angles of 2 link planar arm (2Dof)