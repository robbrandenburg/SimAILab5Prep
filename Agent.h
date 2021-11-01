#pragma once
class Agent {
private:
	glm::vec2 m_Position;
	glm::vec2 m_Velocity;

	Behaviour* m_CurrentBehaviour;
	Behaviour* m_PreviousState;
public:
	Agent();
	void Update(float pTimestep);
	void ChangeState(State* pNewState);
	void ChangeBehaviour(Behaviour* pNewBehaviour);
	bool CanSeeTarget(Target* target);
};