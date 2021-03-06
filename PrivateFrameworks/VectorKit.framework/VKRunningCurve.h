/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRunningCurve : NSObject {
    struct { 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } position; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } tangent; 
        booltangentValid; 
    struct { 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } position; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } tangent; 
        booltangentValid; 
    struct { 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } position; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } tangent; 
        booltangentValid; 
    struct { 
        double mb[4][3]; 
    } _mb;
    } _p0;
    } _p1;
    } _pu;
    double _t0;
    double _t1;
    double _tu;
    bool_mbValid;
}

- (id).cxx_construct;
- (void)appendPosition:(struct VKPoint { double x1; double x2; double x3; })arg1 atTime:(double)arg2;
- (void)dealloc;
- (bool)hasStateAtTime:(double)arg1;
- (id)init;
- (void)reset;
- (struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Matrix<double, 3, 1> { double x_2_1_1[3]; } x2; boolx3; })stateAtTime:(double)arg1;

@end
