/**
 *Copyright (c) 2019 LZ.All Right Reserved
 *Author : LZ
 *Date: 2020.4.17
 *Email: 2117610943@qq.com
 */

#pragma once
#include "World_1.h"

class MirrorWorld_1 :public World_1
{
public:
    CREATE_FUNC(MirrorWorld_1);
    static Scene* createScene();

CC_CONSTRUCTOR_ACCESS:
    MirrorWorld_1();

protected:
    virtual void addScrollView() override;
    virtual void readWorldLevel() override;
    virtual ui::Button* createButton(Node* node, const std::string& name, const Vec2& position) override;
    virtual void createButtonListener(ui::Button* button, const int& ID) override;
    virtual void setLevelVisible(Node* node) override;
    virtual void createGoBack() override;
};