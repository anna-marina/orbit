const int sizeOfArray = 10000;
struct vec
{
    double x, y, z;
};
struct rotation
{
    double rotationAroundX, rotationAroundY, rotationAroundZ;
};
typedef vec Orient;
typedef vec Position;
typedef rotation RotationSpeed;
struct shipPosition
{
    Position position;
    Orient orientation;
}

struct ShipParams
{
    double shipEdgeLength;
    double shipMass;
    rotation maxRotation;
    double maxFuelUsagePerSec;
    double impulePerFuel;//
    double impulseFlightPlan[sizeOfArray];
    rotation rotateFlightPlan[sizeOfArray];
    shipPosition * position;
}

double ABC(shipPosition initialPosition,
           double shipEdgeLength,
           double shipMass,
           rotation maxRotation,
           double maxFuelUsagePerSec,
           double impulePerFuel,
           double impulseFlightPlan[sizeOfArray],
           rotation rotateFlightPlan[sizeOfArray],
           shipPosition * position,
           int numberOfQuants,
           double quantSizeOfSec)
