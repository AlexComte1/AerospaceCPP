#pragma once
#include "Vector.h"
class SixDoFBody
{
public:
	// Update the bodies state (pos, vel and accel)
	void updateState(float timeStep);
	// Constructor
	SixDoFBody(Vector initalPosition, Vector initialVelocity, Vector initalAcceleraton, Vector initalNetForce, Vector initalNetTorque, float mass, float inertiaTensor[3][3]);

private:
	// The mass of the body
	float m_mass;
	// The inertia tensor of the body 
	float m_interiaTensor[3][3];
	// The position of the body in the NED frame
	Vector m_position[3];
	// The velocity of the body in the NED frame
	Vector m_velocity[3];
	// The acceleration of the body
	Vector m_accleration[3];
	// The net force acting on the body
	Vector m_netForce[3];
	// The net Torque acting on the body
	Vector m_netTorque[3];
	// Update the bodies veloicty
	void updateVelocity(float timeStep);
	// Update the bodies position
	void updatePosition(float timeStep);
};

