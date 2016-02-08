//
//  GameScene.h
//  OrbiVoid
//

//  Copyright (c) 2015 Nikolay. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface GameScene : SKScene

@end

@interface SKEmitterNode (fromFile)
+ (instancetype)orb_emitterNamed:(NSString*)name;
@end