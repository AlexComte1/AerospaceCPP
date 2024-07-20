#include "SixDoFBody.h"

SixDoFBody::SixDoFBody(Vector initalPosition, Vector initialVelocity, Vector initalAcceleration, Vector initalNetForce, Vector initalNetTorque, float mass, float inertiaTensor[3][3]) {
	m_position = initalPosition;
	m_velocity = initialVelocity;
	m_accleration = initalAcceleration;
	m_netForce = initalNetForce;
	m_mass = mass;
	m_interiaTensor = inertiaTensor;
}