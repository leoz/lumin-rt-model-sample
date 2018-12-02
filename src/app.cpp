//
#include "app.h"
#include <lumin/Prism.h>
#include <lumin/ui/Cursor.h>
#include <lumin/node/RootNode.h>
#include <lumin/node/ModelNode.h>

#define MODEL_FILE "res/WaterBottle.glb"

using namespace lumin;

int App::init()
{
  auto prism = requestNewPrism({0.2f, 0.4f, 0.2f});
  lumin::ui::Cursor::SetCursorSnapMode(prism, true);
  ResourceIDType resource = prism->createModelResourceId(MODEL_FILE, 1.0f);
  ModelNode *node = prism->createModelNode(resource);
  prism->getRootNode()->addChild(node);
  return 0;
}
