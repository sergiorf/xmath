//
// Created by Sergio Rodriguez on 30/03/2019.
//
#include <xmatrix.h>
#include "gtest/gtest.h"

using namespace std;


class XMatrixTest : public ::testing::Test {

protected:

  virtual void SetUp() {
  };

  virtual void TearDown() {
  };
};

TEST_F(XMatrixTest, sumTest) {
	XMatrix m(1, 1);
  	m.setValueAt(0, 0, 10);
  	EXPECT_EQ(10, m.getValueAt(0, 0));
}

