#pragma once
#include "Layer.h"

class HiddenLayer :
	public Layer
{
public:
	HiddenLayer(int, Layer&);
	~HiddenLayer();
};

