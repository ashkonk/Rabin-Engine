#include <pch.h>
#include "L_PlayComcast.h"

void L_PlayComcast::on_enter()
{
	audioManager->PlaySoundEffect(L"Assets\\Audio\\comcast.mp3");
	BehaviorNode::on_leaf_enter();
	on_success();
}