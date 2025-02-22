/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.

 https://axmolengine.github.io/

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef __TABLEVIEWTESTSCENE_H__
#define __TABLEVIEWTESTSCENE_H__

#include "axmol.h"
#include "extensions/cocos-ext.h"
#include "BaseTest.h"

DEFINE_TEST_SUITE(TableViewTests);

class TableViewTest : public TestCase,
                      public ax::extension::TableViewDataSource,
                      public ax::extension::TableViewDelegate
{
public:
    CREATE_FUNC(TableViewTest);

    virtual bool init() override;

    virtual void scrollViewDidScroll(ax::extension::ScrollView* view) override{};
    virtual void scrollViewDidZoom(ax::extension::ScrollView* view) override {}
    virtual void tableCellTouched(ax::extension::TableView* table,
                                  ax::extension::TableViewCell* cell) override;
    virtual ax::Size tableCellSizeForIndex(ax::extension::TableView* table, ssize_t idx) override;
    virtual ax::extension::TableViewCell* tableCellAtIndex(ax::extension::TableView* table,
                                                                ssize_t idx) override;
    virtual ssize_t numberOfCellsInTableView(ax::extension::TableView* table) override;
};

#endif  // __TABLEVIEWTESTSCENE_H__
