////
//  Defs.h
//  C++ Certificate
//  Definitions of maximum functions.
//
//  Created by NELSON YEUNG on 21/4/2019.
//  Copyright ? 2019 Nelson Yeung. All rights reserved.
//

#ifndef max2
#define max2(x, y) ((x > y) ? x : y)
#endif

#ifndef max3
#define max3(x, y, z) (max2(max2(x, y), z))
#endif
