#include <pch.h>
#include "L_PlayDialUp.h"

void L_PlayDialUp::on_enter()
{
	audioManager->PlaySoundEffect(L"Assets\\Audio\\dialup.wav");
	BehaviorNode::on_leaf_enter();
	on_success();
}