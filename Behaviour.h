#pragma once
class Behaviour {
private:
	Agent* m_Agent;
	World* m_World;
public:
	glm::vec2 Execute();
	void Enter();
	void Exit();
};

class SeekBehaviour : Behaviour {
public:
	glm::vec2 GetSteeringForce();
};

class FollowPathBehaviour : Behaviour {
public:
	glm::vec2 GetSteeringForce();
};