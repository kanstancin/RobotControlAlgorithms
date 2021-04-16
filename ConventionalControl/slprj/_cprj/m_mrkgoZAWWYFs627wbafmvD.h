#ifndef __mrkgoZAWWYFs627wbafmvD_h__
#define __mrkgoZAWWYFs627wbafmvD_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef struct_tag_sNwZyi0mdNnKOcSoslkxMwD
#define struct_tag_sNwZyi0mdNnKOcSoslkxMwD

struct tag_sNwZyi0mdNnKOcSoslkxMwD
{
  boolean_T EnforceJointLimits;
  boolean_T AllowRandomRestart;
  real_T MaxIterations;
  real_T MaxTime;
  real_T GradientTolerance;
  real_T SolutionTolerance;
  real_T StepTolerance;
};

#endif                                 /*struct_tag_sNwZyi0mdNnKOcSoslkxMwD*/

#ifndef typedef_sNwZyi0mdNnKOcSoslkxMwD
#define typedef_sNwZyi0mdNnKOcSoslkxMwD

typedef struct tag_sNwZyi0mdNnKOcSoslkxMwD sNwZyi0mdNnKOcSoslkxMwD;

#endif                                 /*typedef_sNwZyi0mdNnKOcSoslkxMwD*/

#ifndef struct_tag_sdAmwXbnJnEmimT0NaJRtAD
#define struct_tag_sdAmwXbnJnEmimT0NaJRtAD

struct tag_sdAmwXbnJnEmimT0NaJRtAD
{
  real_T tv_sec;
  real_T tv_nsec;
};

#endif                                 /*struct_tag_sdAmwXbnJnEmimT0NaJRtAD*/

#ifndef typedef_sdAmwXbnJnEmimT0NaJRtAD
#define typedef_sdAmwXbnJnEmimT0NaJRtAD

typedef struct tag_sdAmwXbnJnEmimT0NaJRtAD sdAmwXbnJnEmimT0NaJRtAD;

#endif                                 /*typedef_sdAmwXbnJnEmimT0NaJRtAD*/

#ifndef struct_tag_skA4KFEZ4HPkJJBOYCrevdH
#define struct_tag_skA4KFEZ4HPkJJBOYCrevdH

struct tag_skA4KFEZ4HPkJJBOYCrevdH
{
  uint32_T SafeEq;
  uint32_T Absolute;
  uint32_T NaNBias;
  uint32_T NaNWithFinite;
  uint32_T FiniteWithNaN;
  uint32_T NaNWithNaN;
};

#endif                                 /*struct_tag_skA4KFEZ4HPkJJBOYCrevdH*/

#ifndef typedef_skA4KFEZ4HPkJJBOYCrevdH
#define typedef_skA4KFEZ4HPkJJBOYCrevdH

typedef struct tag_skA4KFEZ4HPkJJBOYCrevdH skA4KFEZ4HPkJJBOYCrevdH;

#endif                                 /*typedef_skA4KFEZ4HPkJJBOYCrevdH*/

#include "emlrt.h"
#ifndef enum_robotics_core_internal_NLPSolverExitFlags
#define enum_robotics_core_internal_NLPSolverExitFlags

enum robotics_core_internal_NLPSolverExitFlags
{
  robotics_core_internal_NLPSolverExitFlags_LocalMinimumFound = 1,/* Default value */
  robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded,
  robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded,
  robotics_core_internal_NLPSolverExitFlags_StepSizeBelowMinimum,
  robotics_core_internal_NLPSolverExitFlags_ChangeInErrorBelowMinimum,
  robotics_core_internal_NLPSolverExitFlags_SearchDirectionInvalid,
  robotics_core_internal_NLPSolverExitFlags_HessianNotPositiveSemidefinite,
  robotics_core_internal_NLPSolverExitFlags_TrustRegionRadiusBelowMinimum
};

#endif                                 /*enum_robotics_core_internal_NLPSolverExitFlags*/

#ifndef typedef_robotics_core_internal_NLPSolverExitFlags
#define typedef_robotics_core_internal_NLPSolverExitFlags

typedef enum robotics_core_internal_NLPSolverExitFlags
  robotics_core_internal_NLPSolverExitFlags;

#endif                                 /*typedef_robotics_core_internal_NLPSolverExitFlags*/

#ifndef struct_tag_CQBAnDRWYbmBhzQvnuVAtH
#define struct_tag_CQBAnDRWYbmBhzQvnuVAtH

struct tag_CQBAnDRWYbmBhzQvnuVAtH
{
  int32_T f1;
  int32_T f2;
  int32_T f3;
};

#endif                                 /*struct_tag_CQBAnDRWYbmBhzQvnuVAtH*/

#ifndef typedef_s_CQBAnDRWYbmBhzQvnuVAtH
#define typedef_s_CQBAnDRWYbmBhzQvnuVAtH

typedef struct tag_CQBAnDRWYbmBhzQvnuVAtH s_CQBAnDRWYbmBhzQvnuVAtH;

#endif                                 /*typedef_s_CQBAnDRWYbmBhzQvnuVAtH*/

#ifndef struct_tag_59AHcW6hH2dOmmDfwkvrnG
#define struct_tag_59AHcW6hH2dOmmDfwkvrnG

struct tag_59AHcW6hH2dOmmDfwkvrnG
{
  int32_T f1;
  int32_T f2;
};

#endif                                 /*struct_tag_59AHcW6hH2dOmmDfwkvrnG*/

#ifndef typedef_s_59AHcW6hH2dOmmDfwkvrnG
#define typedef_s_59AHcW6hH2dOmmDfwkvrnG

typedef struct tag_59AHcW6hH2dOmmDfwkvrnG s_59AHcW6hH2dOmmDfwkvrnG;

#endif                                 /*typedef_s_59AHcW6hH2dOmmDfwkvrnG*/

#ifndef struct_tag_Z84498e1UNnttBI4F83THD
#define struct_tag_Z84498e1UNnttBI4F83THD

struct tag_Z84498e1UNnttBI4F83THD
{
  int32_T __dummy;
};

#endif                                 /*struct_tag_Z84498e1UNnttBI4F83THD*/

#ifndef typedef_robotics_manip_internal_CollisionGeometry
#define typedef_robotics_manip_internal_CollisionGeometry

typedef struct tag_Z84498e1UNnttBI4F83THD
  robotics_manip_internal_CollisionGeometry;

#endif                                 /*typedef_robotics_manip_internal_CollisionGeometry*/

#ifndef struct_tag_qN5Oiz2OtHsE7f06wrZAJC
#define struct_tag_qN5Oiz2OtHsE7f06wrZAJC

struct tag_qN5Oiz2OtHsE7f06wrZAJC
{
  int32_T __dummy;
};

#endif                                 /*struct_tag_qN5Oiz2OtHsE7f06wrZAJC*/

#ifndef typedef_b_robotics_manip_internal_CollisionGeometry
#define typedef_b_robotics_manip_internal_CollisionGeometry

typedef struct tag_qN5Oiz2OtHsE7f06wrZAJC
  b_robotics_manip_internal_CollisionGeometry;

#endif                                 /*typedef_b_robotics_manip_internal_CollisionGeometry*/

#ifndef struct_tag_KIm0luGquH6Gx0epdGQpnH
#define struct_tag_KIm0luGquH6Gx0epdGQpnH

struct tag_KIm0luGquH6Gx0epdGQpnH
{
  sdAmwXbnJnEmimT0NaJRtAD StartTime;
};

#endif                                 /*struct_tag_KIm0luGquH6Gx0epdGQpnH*/

#ifndef typedef_robotics_core_internal_SystemTimeProvider
#define typedef_robotics_core_internal_SystemTimeProvider

typedef struct tag_KIm0luGquH6Gx0epdGQpnH
  robotics_core_internal_SystemTimeProvider;

#endif                                 /*typedef_robotics_core_internal_SystemTimeProvider*/

#ifndef struct_ikblock_info_bus_tag
#define struct_ikblock_info_bus_tag

struct ikblock_info_bus_tag
{
  real_T Iterations;
  real_T PoseErrorNorm;
  uint16_T ExitFlag;
  uint8_T Status;
};

#endif                                 /*struct_ikblock_info_bus_tag*/

#ifndef typedef_ikblock_info_bus
#define typedef_ikblock_info_bus

typedef struct ikblock_info_bus_tag ikblock_info_bus;

#endif                                 /*typedef_ikblock_info_bus*/

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T

struct emxArray_char_T
{
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_char_T*/

#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T

typedef struct emxArray_char_T emxArray_char_T;

#endif                                 /*typedef_emxArray_char_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef typedef_emxArray_unnamed_struct
#define typedef_emxArray_unnamed_struct

typedef struct {
  b_robotics_manip_internal_CollisionGeometry **data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_unnamed_struct;

#endif                                 /*typedef_emxArray_unnamed_struct*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T

typedef struct emxArray_boolean_T emxArray_boolean_T;

#endif                                 /*typedef_emxArray_boolean_T*/

#ifndef struct_emxArray_ptrdiff_t
#define struct_emxArray_ptrdiff_t

struct emxArray_ptrdiff_t
{
  ptrdiff_t *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_ptrdiff_t*/

#ifndef typedef_emxArray_ptrdiff_t
#define typedef_emxArray_ptrdiff_t

typedef struct emxArray_ptrdiff_t emxArray_ptrdiff_t;

#endif                                 /*typedef_emxArray_ptrdiff_t*/

#ifndef struct_tag_rAoU6BZpwiLAkT4vFxI5fF
#define struct_tag_rAoU6BZpwiLAkT4vFxI5fF

struct tag_rAoU6BZpwiLAkT4vFxI5fF
{
  emxArray_unnamed_struct *CollisionGeometries;
  real_T MaxElements;
  real_T Size;
  b_robotics_manip_internal_CollisionGeometry _pobj0;
};

#endif                                 /*struct_tag_rAoU6BZpwiLAkT4vFxI5fF*/

#ifndef typedef_robotics_manip_internal_CollisionSet
#define typedef_robotics_manip_internal_CollisionSet

typedef struct tag_rAoU6BZpwiLAkT4vFxI5fF robotics_manip_internal_CollisionSet;

#endif                                 /*typedef_robotics_manip_internal_CollisionSet*/

#ifndef struct_tag_jIGoyqtriaymhzsilSlyLD
#define struct_tag_jIGoyqtriaymhzsilSlyLD

struct tag_jIGoyqtriaymhzsilSlyLD
{
  s_CQBAnDRWYbmBhzQvnuVAtH _data;
};

#endif                                 /*struct_tag_jIGoyqtriaymhzsilSlyLD*/

#ifndef typedef_s_jIGoyqtriaymhzsilSlyLD
#define typedef_s_jIGoyqtriaymhzsilSlyLD

typedef struct tag_jIGoyqtriaymhzsilSlyLD s_jIGoyqtriaymhzsilSlyLD;

#endif                                 /*typedef_s_jIGoyqtriaymhzsilSlyLD*/

#ifndef struct_tag_Bu9fZkGVCRtOmZkWAqpHfH
#define struct_tag_Bu9fZkGVCRtOmZkWAqpHfH

struct tag_Bu9fZkGVCRtOmZkWAqpHfH
{
  s_59AHcW6hH2dOmmDfwkvrnG _data;
};

#endif                                 /*struct_tag_Bu9fZkGVCRtOmZkWAqpHfH*/

#ifndef typedef_s_Bu9fZkGVCRtOmZkWAqpHfH
#define typedef_s_Bu9fZkGVCRtOmZkWAqpHfH

typedef struct tag_Bu9fZkGVCRtOmZkWAqpHfH s_Bu9fZkGVCRtOmZkWAqpHfH;

#endif                                 /*typedef_s_Bu9fZkGVCRtOmZkWAqpHfH*/

#ifndef struct_tag_5h8uI2HsgOdDFFzIMaqEFH
#define struct_tag_5h8uI2HsgOdDFFzIMaqEFH

struct tag_5h8uI2HsgOdDFFzIMaqEFH
{
  s_59AHcW6hH2dOmmDfwkvrnG _data;
};

#endif                                 /*struct_tag_5h8uI2HsgOdDFFzIMaqEFH*/

#ifndef typedef_s_5h8uI2HsgOdDFFzIMaqEFH
#define typedef_s_5h8uI2HsgOdDFFzIMaqEFH

typedef struct tag_5h8uI2HsgOdDFFzIMaqEFH s_5h8uI2HsgOdDFFzIMaqEFH;

#endif                                 /*typedef_s_5h8uI2HsgOdDFFzIMaqEFH*/

#ifndef struct_tag_a9w8IowFHzogdOiVBZxs7
#define struct_tag_a9w8IowFHzogdOiVBZxs7

struct tag_a9w8IowFHzogdOiVBZxs7
{
  emxArray_char_T *Type;
  real_T VelocityNumber;
  real_T PositionNumber;
  emxArray_real_T *MotionSubspace;
  boolean_T InTree;
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
  emxArray_char_T *NameInternal;
  emxArray_real_T *PositionLimitsInternal;
  emxArray_real_T *HomePositionInternal;
  real_T JointAxisInternal[3];
};

#endif                                 /*struct_tag_a9w8IowFHzogdOiVBZxs7*/

#ifndef typedef_rigidBodyJoint
#define typedef_rigidBodyJoint

typedef struct tag_a9w8IowFHzogdOiVBZxs7 rigidBodyJoint;

#endif                                 /*typedef_rigidBodyJoint*/

#ifndef struct_tag_g9J8khxeEsksT7SWBjkmU
#define struct_tag_g9J8khxeEsksT7SWBjkmU

struct tag_g9J8khxeEsksT7SWBjkmU
{
  real_T Index;
  emxArray_char_T *NameInternal;
  rigidBodyJoint *JointInternal;
  real_T ParentIndex;
  robotics_manip_internal_CollisionSet *CollisionsInternal;
  robotics_manip_internal_CollisionSet _pobj0;
  rigidBodyJoint _pobj1;
};

#endif                                 /*struct_tag_g9J8khxeEsksT7SWBjkmU*/

#ifndef typedef_robotics_manip_internal_RigidBody_1
#define typedef_robotics_manip_internal_RigidBody_1

typedef struct tag_g9J8khxeEsksT7SWBjkmU robotics_manip_internal_RigidBody_1;

#endif                                 /*typedef_robotics_manip_internal_RigidBody_1*/

#ifndef struct_tag_dkJiYmiKZBdwJkq14TuesE
#define struct_tag_dkJiYmiKZBdwJkq14TuesE

struct tag_dkJiYmiKZBdwJkq14TuesE
{
  real_T NumBodies;
  robotics_manip_internal_RigidBody_1 Base;
  robotics_manip_internal_RigidBody_1 *Bodies[4];
  real_T NumNonFixedBodies;
  real_T PositionNumber;
  real_T VelocityNumber;
  real_T PositionDoFMap[8];
  real_T VelocityDoFMap[8];
  robotics_manip_internal_RigidBody_1 _pobj0[4];
};

#endif                                 /*struct_tag_dkJiYmiKZBdwJkq14TuesE*/

#ifndef typedef_robotics_manip_internal_RigidBodyTree_1
#define typedef_robotics_manip_internal_RigidBodyTree_1

typedef struct tag_dkJiYmiKZBdwJkq14TuesE
  robotics_manip_internal_RigidBodyTree_1;

#endif                                 /*typedef_robotics_manip_internal_RigidBodyTree_1*/

#ifndef struct_tag_FZTogHSrzW0WOilUsG01gF
#define struct_tag_FZTogHSrzW0WOilUsG01gF

struct tag_FZTogHSrzW0WOilUsG01gF
{
  robotics_manip_internal_RigidBodyTree_1 *Robot;
  real_T WeightMatrix[36];
  emxArray_char_T *BodyName;
  real_T Tform[16];
  emxArray_real_T *ErrTemp;
  real_T CostTemp;
  emxArray_real_T *GradTemp;
};

#endif                                 /*struct_tag_FZTogHSrzW0WOilUsG01gF*/

#ifndef typedef_robotics_manip_internal_IKExtraArgs
#define typedef_robotics_manip_internal_IKExtraArgs

typedef struct tag_FZTogHSrzW0WOilUsG01gF robotics_manip_internal_IKExtraArgs;

#endif                                 /*typedef_robotics_manip_internal_IKExtraArgs*/

#ifndef struct_tag_v9vG5oaeSsQG3FhfVAfzYB
#define struct_tag_v9vG5oaeSsQG3FhfVAfzYB

struct tag_v9vG5oaeSsQG3FhfVAfzYB
{
  char_T Name[22];
  emxArray_real_T *ConstraintMatrix;
  emxArray_real_T *ConstraintBound;
  boolean_T ConstraintsOn;
  real_T SolutionTolerance;
  boolean_T RandomRestart;
  robotics_manip_internal_IKExtraArgs *ExtraArgs;
  real_T MaxNumIteration;
  real_T MaxTime;
  real_T SeedInternal[3];
  real_T MaxTimeInternal;
  real_T MaxNumIterationInternal;
  real_T StepTolerance;
  robotics_core_internal_SystemTimeProvider TimeObj;
  real_T GradientTolerance;
  real_T ArmijoRuleBeta;
  real_T ArmijoRuleSigma;
  robotics_core_internal_SystemTimeProvider TimeObjInternal;
};

#endif                                 /*struct_tag_v9vG5oaeSsQG3FhfVAfzYB*/

#ifndef typedef_robotics_core_internal_DampedBFGSwGradientProjection
#define typedef_robotics_core_internal_DampedBFGSwGradientProjection

typedef struct tag_v9vG5oaeSsQG3FhfVAfzYB
  robotics_core_internal_DampedBFGSwGradientProjection;

#endif                                 /*typedef_robotics_core_internal_DampedBFGSwGradientProjection*/

#ifndef struct_tag_vxZ7oqdNnvtNFuTEfqxZvD
#define struct_tag_vxZ7oqdNnvtNFuTEfqxZvD

struct tag_vxZ7oqdNnvtNFuTEfqxZvD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  robotics_core_internal_DampedBFGSwGradientProjection *Solver;
  emxArray_real_T *Limits;
  robotics_manip_internal_RigidBodyTree_1 *RigidBodyTreeInternal;
  robotics_manip_internal_IKExtraArgs _pobj0;
  robotics_manip_internal_RigidBodyTree_1 _pobj1;
  robotics_manip_internal_CollisionSet _pobj2[5];
  rigidBodyJoint _pobj3[4];
  robotics_manip_internal_RigidBody_1 _pobj4[4];
  robotics_core_internal_DampedBFGSwGradientProjection _pobj5;
};

#endif                                 /*struct_tag_vxZ7oqdNnvtNFuTEfqxZvD*/

#ifndef typedef_inverseKinematics
#define typedef_inverseKinematics

typedef struct tag_vxZ7oqdNnvtNFuTEfqxZvD inverseKinematics;

#endif                                 /*typedef_inverseKinematics*/

#ifndef struct_tag_VQgqBkzYvS7jqEE6bcy6pF
#define struct_tag_VQgqBkzYvS7jqEE6bcy6pF

struct tag_VQgqBkzYvS7jqEE6bcy6pF
{
  real_T Index;
  emxArray_char_T *NameInternal;
  rigidBodyJoint JointInternal;
  real_T ParentIndex;
  real_T MassInternal;
  real_T CenterOfMassInternal[3];
  real_T InertiaInternal[9];
  real_T SpatialInertia[36];
  robotics_manip_internal_CollisionSet CollisionsInternal;
};

#endif                                 /*struct_tag_VQgqBkzYvS7jqEE6bcy6pF*/

#ifndef typedef_robotics_manip_internal_RigidBody
#define typedef_robotics_manip_internal_RigidBody

typedef struct tag_VQgqBkzYvS7jqEE6bcy6pF robotics_manip_internal_RigidBody;

#endif                                 /*typedef_robotics_manip_internal_RigidBody*/

#ifndef struct_tag_RuxYkHamQ6AGJDPko0YN9
#define struct_tag_RuxYkHamQ6AGJDPko0YN9

struct tag_RuxYkHamQ6AGJDPko0YN9
{
  real_T NumBodies;
  robotics_manip_internal_RigidBody Base;
  real_T Gravity[3];
  robotics_manip_internal_RigidBody *Bodies[4];
  robotics_manip_internal_RigidBody _pobj0[4];
};

#endif                                 /*struct_tag_RuxYkHamQ6AGJDPko0YN9*/

#ifndef typedef_robotics_manip_internal_RigidBodyTree
#define typedef_robotics_manip_internal_RigidBodyTree

typedef struct tag_RuxYkHamQ6AGJDPko0YN9 robotics_manip_internal_RigidBodyTree;

#endif                                 /*typedef_robotics_manip_internal_RigidBodyTree*/

#ifndef struct_tag_fIIXfyumZRkYfq6wMqjVVH
#define struct_tag_fIIXfyumZRkYfq6wMqjVVH

struct tag_fIIXfyumZRkYfq6wMqjVVH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  robotics_manip_internal_RigidBodyTree TreeInternal;
  inverseKinematics IKInternal;
};

#endif                                 /*struct_tag_fIIXfyumZRkYfq6wMqjVVH*/

#ifndef typedef_robotics_slmanip_internal_block_IKBlock
#define typedef_robotics_slmanip_internal_block_IKBlock

typedef struct tag_fIIXfyumZRkYfq6wMqjVVH
  robotics_slmanip_internal_block_IKBlock;

#endif                                 /*typedef_robotics_slmanip_internal_block_IKBlock*/

#ifndef struct_tag_sJgBHg6TAxMMEbyHjSnbcjH
#define struct_tag_sJgBHg6TAxMMEbyHjSnbcjH

struct tag_sJgBHg6TAxMMEbyHjSnbcjH
{
  real_T NameLength;
  uint8_T Name[7];
  real_T ParentIndex;
  real_T NumChildren;
  real_T ChildrenIndices[4];
  real_T Mass;
  real_T CenterOfMass[3];
  real_T Inertia[9];
  real_T SpatialInertia[36];
};

#endif                                 /*struct_tag_sJgBHg6TAxMMEbyHjSnbcjH*/

#ifndef typedef_sJgBHg6TAxMMEbyHjSnbcjH
#define typedef_sJgBHg6TAxMMEbyHjSnbcjH

typedef struct tag_sJgBHg6TAxMMEbyHjSnbcjH sJgBHg6TAxMMEbyHjSnbcjH;

#endif                                 /*typedef_sJgBHg6TAxMMEbyHjSnbcjH*/

#ifndef struct_tag_snNPBQjGRZDk13cYPIP5bAE
#define struct_tag_snNPBQjGRZDk13cYPIP5bAE

struct tag_snNPBQjGRZDk13cYPIP5bAE
{
  uint8_T Type;
  real_T NameLength;
  uint8_T Name[8];
  real_T VelocityNumber;
  real_T PositionNumber;
  real_T MotionSubspace[36];
  real_T JointAxis[3];
  real_T PositionLimits[14];
  real_T HomePosition[7];
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
};

#endif                                 /*struct_tag_snNPBQjGRZDk13cYPIP5bAE*/

#ifndef typedef_snNPBQjGRZDk13cYPIP5bAE
#define typedef_snNPBQjGRZDk13cYPIP5bAE

typedef struct tag_snNPBQjGRZDk13cYPIP5bAE snNPBQjGRZDk13cYPIP5bAE;

#endif                                 /*typedef_snNPBQjGRZDk13cYPIP5bAE*/

#ifndef struct_tag_sam8i1cdrM3c3JxRYWkYtWB
#define struct_tag_sam8i1cdrM3c3JxRYWkYtWB

struct tag_sam8i1cdrM3c3JxRYWkYtWB
{
  real_T NumBodies;
  real_T Gravity[3];
  real_T NumNonFixedBodies;
  real_T PositionNumber;
  real_T VelocityNumber;
  real_T PositionDoFMap[8];
  real_T VelocityDoFMap[8];
  real_T MaxNameLength;
  real_T MaxJointPositionNumber;
  uint8_T DataFormat;
  real_T JointPositionLimits[6];
  sJgBHg6TAxMMEbyHjSnbcjH Bodies[5];
  snNPBQjGRZDk13cYPIP5bAE Joints[5];
};

#endif                                 /*struct_tag_sam8i1cdrM3c3JxRYWkYtWB*/

#ifndef typedef_sam8i1cdrM3c3JxRYWkYtWB
#define typedef_sam8i1cdrM3c3JxRYWkYtWB

typedef struct tag_sam8i1cdrM3c3JxRYWkYtWB sam8i1cdrM3c3JxRYWkYtWB;

#endif                                 /*typedef_sam8i1cdrM3c3JxRYWkYtWB*/

#ifndef struct_tag_sJCxfmxS8gBOONUZjbjUd9E
#define struct_tag_sJCxfmxS8gBOONUZjbjUd9E

struct tag_sJCxfmxS8gBOONUZjbjUd9E
{
  boolean_T CaseSensitivity;
  boolean_T StructExpand;
  char_T PartialMatching[6];
  boolean_T IgnoreNulls;
};

#endif                                 /*struct_tag_sJCxfmxS8gBOONUZjbjUd9E*/

#ifndef typedef_sJCxfmxS8gBOONUZjbjUd9E
#define typedef_sJCxfmxS8gBOONUZjbjUd9E

typedef struct tag_sJCxfmxS8gBOONUZjbjUd9E sJCxfmxS8gBOONUZjbjUd9E;

#endif                                 /*typedef_sJCxfmxS8gBOONUZjbjUd9E*/

#ifndef struct_tag_u9UvBA3PKnmgBDLStxCWtC
#define struct_tag_u9UvBA3PKnmgBDLStxCWtC

struct tag_u9UvBA3PKnmgBDLStxCWtC
{
  real_T f1[2];
  real_T f2[2];
  real_T f3[2];
};

#endif                                 /*struct_tag_u9UvBA3PKnmgBDLStxCWtC*/

#ifndef typedef_s_u9UvBA3PKnmgBDLStxCWtC
#define typedef_s_u9UvBA3PKnmgBDLStxCWtC

typedef struct tag_u9UvBA3PKnmgBDLStxCWtC s_u9UvBA3PKnmgBDLStxCWtC;

#endif                                 /*typedef_s_u9UvBA3PKnmgBDLStxCWtC*/

#ifndef struct_tag_EttDMoN1hdet51S4eY3dR
#define struct_tag_EttDMoN1hdet51S4eY3dR

struct tag_EttDMoN1hdet51S4eY3dR
{
  char_T f1[6];
  char_T f2[6];
  char_T f3[6];
};

#endif                                 /*struct_tag_EttDMoN1hdet51S4eY3dR*/

#ifndef typedef_s_EttDMoN1hdet51S4eY3dR
#define typedef_s_EttDMoN1hdet51S4eY3dR

typedef struct tag_EttDMoN1hdet51S4eY3dR s_EttDMoN1hdet51S4eY3dR;

#endif                                 /*typedef_s_EttDMoN1hdet51S4eY3dR*/

#ifndef struct_tag_UX05GARjqsuR9QofOrwOSD
#define struct_tag_UX05GARjqsuR9QofOrwOSD

struct tag_UX05GARjqsuR9QofOrwOSD
{
  char_T f1[27];
  char_T f2[21];
  char_T f3[26];
};

#endif                                 /*struct_tag_UX05GARjqsuR9QofOrwOSD*/

#ifndef typedef_cell
#define typedef_cell

typedef struct tag_UX05GARjqsuR9QofOrwOSD cell;

#endif                                 /*typedef_cell*/

#ifndef struct_tag_uo7PCp2pQzQ8uFrW43NfEH
#define struct_tag_uo7PCp2pQzQ8uFrW43NfEH

struct tag_uo7PCp2pQzQ8uFrW43NfEH
{
  char_T f1[28];
  char_T f2[22];
  char_T f3[35];
  char_T f4[26];
  char_T f5[36];
  char_T f6[39];
};

#endif                                 /*struct_tag_uo7PCp2pQzQ8uFrW43NfEH*/

#ifndef typedef_b_cell
#define typedef_b_cell

typedef struct tag_uo7PCp2pQzQ8uFrW43NfEH b_cell;

#endif                                 /*typedef_b_cell*/

#ifndef struct_tag_dK05fgDE5TQ2s3o7OZp84G
#define struct_tag_dK05fgDE5TQ2s3o7OZp84G

struct tag_dK05fgDE5TQ2s3o7OZp84G
{
  char_T f1[6];
  char_T f2[6];
};

#endif                                 /*struct_tag_dK05fgDE5TQ2s3o7OZp84G*/

#ifndef typedef_s_dK05fgDE5TQ2s3o7OZp84G
#define typedef_s_dK05fgDE5TQ2s3o7OZp84G

typedef struct tag_dK05fgDE5TQ2s3o7OZp84G s_dK05fgDE5TQ2s3o7OZp84G;

#endif                                 /*typedef_s_dK05fgDE5TQ2s3o7OZp84G*/

#ifndef struct_tag_wYCVRgeT36U5QhbgTjzod
#define struct_tag_wYCVRgeT36U5QhbgTjzod

struct tag_wYCVRgeT36U5QhbgTjzod
{
  char_T f1[4];
  real_T f2[2];
};

#endif                                 /*struct_tag_wYCVRgeT36U5QhbgTjzod*/

#ifndef typedef_c_cell
#define typedef_c_cell

typedef struct tag_wYCVRgeT36U5QhbgTjzod c_cell;

#endif                                 /*typedef_c_cell*/

#ifndef struct_tag_2k3ousUJOlz0kW0D4oFkhG
#define struct_tag_2k3ousUJOlz0kW0D4oFkhG

struct tag_2k3ousUJOlz0kW0D4oFkhG
{
  char_T f1[6];
  char_T f2[5];
  real_T f3;
};

#endif                                 /*struct_tag_2k3ousUJOlz0kW0D4oFkhG*/

#ifndef typedef_d_cell
#define typedef_d_cell

typedef struct tag_2k3ousUJOlz0kW0D4oFkhG d_cell;

#endif                                 /*typedef_d_cell*/

#ifndef struct_tag_BtOuuAxQdlMdLR8oN4rWaD
#define struct_tag_BtOuuAxQdlMdLR8oN4rWaD

struct tag_BtOuuAxQdlMdLR8oN4rWaD
{
  char_T f1[6];
  char_T f2[6];
  char_T f3[3];
};

#endif                                 /*struct_tag_BtOuuAxQdlMdLR8oN4rWaD*/

#ifndef typedef_e_cell
#define typedef_e_cell

typedef struct tag_BtOuuAxQdlMdLR8oN4rWaD e_cell;

#endif                                 /*typedef_e_cell*/

#ifndef struct_tag_bVpmb8DLX7RElZONckYfQE
#define struct_tag_bVpmb8DLX7RElZONckYfQE

struct tag_bVpmb8DLX7RElZONckYfQE
{
  char_T f1[4];
  char_T f2[6];
};

#endif                                 /*struct_tag_bVpmb8DLX7RElZONckYfQE*/

#ifndef typedef_f_cell
#define typedef_f_cell

typedef struct tag_bVpmb8DLX7RElZONckYfQE f_cell;

#endif                                 /*typedef_f_cell*/

#ifndef struct_tag_MEfs58t5wwv9RfcKxMHxyE
#define struct_tag_MEfs58t5wwv9RfcKxMHxyE

struct tag_MEfs58t5wwv9RfcKxMHxyE
{
  char_T f1[8];
  char_T f2[3];
};

#endif                                 /*struct_tag_MEfs58t5wwv9RfcKxMHxyE*/

#ifndef typedef_g_cell
#define typedef_g_cell

typedef struct tag_MEfs58t5wwv9RfcKxMHxyE g_cell;

#endif                                 /*typedef_g_cell*/

#ifndef struct_tag_1cYHcz4c2P8lVycIPipM4G
#define struct_tag_1cYHcz4c2P8lVycIPipM4G

struct tag_1cYHcz4c2P8lVycIPipM4G
{
  char_T f1[8];
  char_T f2[9];
  char_T f3[5];
};

#endif                                 /*struct_tag_1cYHcz4c2P8lVycIPipM4G*/

#ifndef typedef_h_cell
#define typedef_h_cell

typedef struct tag_1cYHcz4c2P8lVycIPipM4G h_cell;

#endif                                 /*typedef_h_cell*/

#ifndef struct_tag_XgE6TReIGqLJZn0CdqiI1G
#define struct_tag_XgE6TReIGqLJZn0CdqiI1G

struct tag_XgE6TReIGqLJZn0CdqiI1G
{
  char_T Value[6];
};

#endif                                 /*struct_tag_XgE6TReIGqLJZn0CdqiI1G*/

#ifndef typedef_s_XgE6TReIGqLJZn0CdqiI1G
#define typedef_s_XgE6TReIGqLJZn0CdqiI1G

typedef struct tag_XgE6TReIGqLJZn0CdqiI1G s_XgE6TReIGqLJZn0CdqiI1G;

#endif                                 /*typedef_s_XgE6TReIGqLJZn0CdqiI1G*/

#ifndef struct_tag_JCMHh5upQJQLkLyj4IvLp
#define struct_tag_JCMHh5upQJQLkLyj4IvLp

struct tag_JCMHh5upQJQLkLyj4IvLp
{
  char_T f1[6];
};

#endif                                 /*struct_tag_JCMHh5upQJQLkLyj4IvLp*/

#ifndef typedef_cell_wrap
#define typedef_cell_wrap

typedef struct tag_JCMHh5upQJQLkLyj4IvLp cell_wrap;

#endif                                 /*typedef_cell_wrap*/

#ifndef struct_tag_dJ5OohqsvmaBtsn73czh7G
#define struct_tag_dJ5OohqsvmaBtsn73czh7G

struct tag_dJ5OohqsvmaBtsn73czh7G
{
  char_T f1[8];
  char_T f2[6];
  char_T f3[6];
  char_T f4[4];
  char_T f5[2];
  char_T f6[4];
  real_T f7[2];
};

#endif                                 /*struct_tag_dJ5OohqsvmaBtsn73czh7G*/

#ifndef typedef_i_cell
#define typedef_i_cell

typedef struct tag_dJ5OohqsvmaBtsn73czh7G i_cell;

#endif                                 /*typedef_i_cell*/

#ifndef struct_tag_odqOZ4yZvm6YZ58BrLh67E
#define struct_tag_odqOZ4yZvm6YZ58BrLh67E

struct tag_odqOZ4yZvm6YZ58BrLh67E
{
  char_T f1[8];
  char_T f2[4];
  char_T f3[2];
  char_T f4[4];
  real_T f5[3];
};

#endif                                 /*struct_tag_odqOZ4yZvm6YZ58BrLh67E*/

#ifndef typedef_j_cell
#define typedef_j_cell

typedef struct tag_odqOZ4yZvm6YZ58BrLh67E j_cell;

#endif                                 /*typedef_j_cell*/

#ifndef struct_tag_AxxjifeXZC3YZqPCwJZnqC
#define struct_tag_AxxjifeXZC3YZqPCwJZnqC

struct tag_AxxjifeXZC3YZqPCwJZnqC
{
  char_T f1[6];
  char_T f2[4];
  char_T f3[8];
  char_T f4[6];
  char_T f5[11];
};

#endif                                 /*struct_tag_AxxjifeXZC3YZqPCwJZnqC*/

#ifndef typedef_k_cell
#define typedef_k_cell

typedef struct tag_AxxjifeXZC3YZqPCwJZnqC k_cell;

#endif                                 /*typedef_k_cell*/

#ifndef struct_tag_mZ9I1mqDifJDnWN1LeDEAH
#define struct_tag_mZ9I1mqDifJDnWN1LeDEAH

struct tag_mZ9I1mqDifJDnWN1LeDEAH
{
  char_T Value[8];
};

#endif                                 /*struct_tag_mZ9I1mqDifJDnWN1LeDEAH*/

#ifndef typedef_s_mZ9I1mqDifJDnWN1LeDEAH
#define typedef_s_mZ9I1mqDifJDnWN1LeDEAH

typedef struct tag_mZ9I1mqDifJDnWN1LeDEAH s_mZ9I1mqDifJDnWN1LeDEAH;

#endif                                 /*typedef_s_mZ9I1mqDifJDnWN1LeDEAH*/

#ifndef struct_tag_HI6nVq5wf7BsUENZR0IheC
#define struct_tag_HI6nVq5wf7BsUENZR0IheC

struct tag_HI6nVq5wf7BsUENZR0IheC
{
  char_T f1[8];
  char_T f2[6];
  char_T f3[6];
  char_T f4[6];
  char_T f5[4];
  char_T f6[5];
  real_T f7;
};

#endif                                 /*struct_tag_HI6nVq5wf7BsUENZR0IheC*/

#ifndef typedef_l_cell
#define typedef_l_cell

typedef struct tag_HI6nVq5wf7BsUENZR0IheC l_cell;

#endif                                 /*typedef_l_cell*/

#ifndef struct_tag_xzcDJVCDY5ygSyoXSlHfkH
#define struct_tag_xzcDJVCDY5ygSyoXSlHfkH

struct tag_xzcDJVCDY5ygSyoXSlHfkH
{
  char_T f1[4];
};

#endif                                 /*struct_tag_xzcDJVCDY5ygSyoXSlHfkH*/

#ifndef typedef_b_cell_wrap
#define typedef_b_cell_wrap

typedef struct tag_xzcDJVCDY5ygSyoXSlHfkH b_cell_wrap;

#endif                                 /*typedef_b_cell_wrap*/

#ifndef struct_tag_HcM0TtCMwMfuJPIeYFWnZH
#define struct_tag_HcM0TtCMwMfuJPIeYFWnZH

struct tag_HcM0TtCMwMfuJPIeYFWnZH
{
  char_T f1[13];
  char_T f2[15];
  char_T f3[16];
};

#endif                                 /*struct_tag_HcM0TtCMwMfuJPIeYFWnZH*/

#ifndef typedef_m_cell
#define typedef_m_cell

typedef struct tag_HcM0TtCMwMfuJPIeYFWnZH m_cell;

#endif                                 /*typedef_m_cell*/

#ifndef struct_tag_AFaEvJCoIOIJxmcI3Rq8vH
#define struct_tag_AFaEvJCoIOIJxmcI3Rq8vH

struct tag_AFaEvJCoIOIJxmcI3Rq8vH
{
  char_T f1[3];
  char_T f2[8];
};

#endif                                 /*struct_tag_AFaEvJCoIOIJxmcI3Rq8vH*/

#ifndef typedef_n_cell
#define typedef_n_cell

typedef struct tag_AFaEvJCoIOIJxmcI3Rq8vH n_cell;

#endif                                 /*typedef_n_cell*/

#ifndef struct_tag_LspniUMu8be5dF65VJGhiE
#define struct_tag_LspniUMu8be5dF65VJGhiE

struct tag_LspniUMu8be5dF65VJGhiE
{
  char_T f1[33];
};

#endif                                 /*struct_tag_LspniUMu8be5dF65VJGhiE*/

#ifndef typedef_c_cell_wrap
#define typedef_c_cell_wrap

typedef struct tag_LspniUMu8be5dF65VJGhiE c_cell_wrap;

#endif                                 /*typedef_c_cell_wrap*/

#ifndef struct_tag_Fwzv7HypSpcecjjatzKK7B
#define struct_tag_Fwzv7HypSpcecjjatzKK7B

struct tag_Fwzv7HypSpcecjjatzKK7B
{
  char_T f1[6];
  char_T f2[8];
};

#endif                                 /*struct_tag_Fwzv7HypSpcecjjatzKK7B*/

#ifndef typedef_o_cell
#define typedef_o_cell

typedef struct tag_Fwzv7HypSpcecjjatzKK7B o_cell;

#endif                                 /*typedef_o_cell*/

#ifndef struct_tag_9gNw6nRENoLeanwvTwMUGB
#define struct_tag_9gNw6nRENoLeanwvTwMUGB

struct tag_9gNw6nRENoLeanwvTwMUGB
{
  char_T f1[22];
  char_T f2[18];
};

#endif                                 /*struct_tag_9gNw6nRENoLeanwvTwMUGB*/

#ifndef typedef_p_cell
#define typedef_p_cell

typedef struct tag_9gNw6nRENoLeanwvTwMUGB p_cell;

#endif                                 /*typedef_p_cell*/

#ifndef struct_tag_wPCA9xEYGLqP7ulHiIS6nG
#define struct_tag_wPCA9xEYGLqP7ulHiIS6nG

struct tag_wPCA9xEYGLqP7ulHiIS6nG
{
  char_T f1[8];
  char_T f2[6];
  char_T f3[6];
  char_T f4[7];
  char_T f5[6];
  char_T f6;
  real_T f7;
};

#endif                                 /*struct_tag_wPCA9xEYGLqP7ulHiIS6nG*/

#ifndef typedef_q_cell
#define typedef_q_cell

typedef struct tag_wPCA9xEYGLqP7ulHiIS6nG q_cell;

#endif                                 /*typedef_q_cell*/

#ifndef struct_tag_t91KI55GeleQ34LImxLyzG
#define struct_tag_t91KI55GeleQ34LImxLyzG

struct tag_t91KI55GeleQ34LImxLyzG
{
  char_T f1[8];
  char_T f2[6];
  char_T f3[6];
  char_T f4[4];
  char_T f5[6];
  char_T f6;
  real_T f7;
};

#endif                                 /*struct_tag_t91KI55GeleQ34LImxLyzG*/

#ifndef typedef_r_cell
#define typedef_r_cell

typedef struct tag_t91KI55GeleQ34LImxLyzG r_cell;

#endif                                 /*typedef_r_cell*/

#ifndef struct_tag_L7UD7LoBtcYzjeUmaOisIB
#define struct_tag_L7UD7LoBtcYzjeUmaOisIB

struct tag_L7UD7LoBtcYzjeUmaOisIB
{
  char_T f1[7];
  char_T f2[7];
};

#endif                                 /*struct_tag_L7UD7LoBtcYzjeUmaOisIB*/

#ifndef typedef_s_L7UD7LoBtcYzjeUmaOisIB
#define typedef_s_L7UD7LoBtcYzjeUmaOisIB

typedef struct tag_L7UD7LoBtcYzjeUmaOisIB s_L7UD7LoBtcYzjeUmaOisIB;

#endif                                 /*typedef_s_L7UD7LoBtcYzjeUmaOisIB*/

#ifndef struct_tag_GqpOvUTmddMV0XgARgBFHC
#define struct_tag_GqpOvUTmddMV0XgARgBFHC

struct tag_GqpOvUTmddMV0XgARgBFHC
{
  char_T f1[8];
  char_T f2[6];
  char_T f3[6];
  char_T f4[6];
  char_T f5[4];
};

#endif                                 /*struct_tag_GqpOvUTmddMV0XgARgBFHC*/

#ifndef typedef_s_cell
#define typedef_s_cell

typedef struct tag_GqpOvUTmddMV0XgARgBFHC s_cell;

#endif                                 /*typedef_s_cell*/

#ifndef struct_tag_me34pYpbvbCAyHjEiY7IvE
#define struct_tag_me34pYpbvbCAyHjEiY7IvE

struct tag_me34pYpbvbCAyHjEiY7IvE
{
  char_T f1[8];
  char_T f2[6];
  char_T f3[6];
  char_T f4[6];
  char_T f5[4];
  char_T f6;
  real_T f7;
};

#endif                                 /*struct_tag_me34pYpbvbCAyHjEiY7IvE*/

#ifndef typedef_t_cell
#define typedef_t_cell

typedef struct tag_me34pYpbvbCAyHjEiY7IvE t_cell;

#endif                                 /*typedef_t_cell*/

#ifndef struct_tag_KyqO7cpbWmJBckbSUJUCEB
#define struct_tag_KyqO7cpbWmJBckbSUJUCEB

struct tag_KyqO7cpbWmJBckbSUJUCEB
{
  char_T f1[4];
  char_T f2[6];
  char_T f3[6];
  char_T f4[6];
};

#endif                                 /*struct_tag_KyqO7cpbWmJBckbSUJUCEB*/

#ifndef typedef_u_cell
#define typedef_u_cell

typedef struct tag_KyqO7cpbWmJBckbSUJUCEB u_cell;

#endif                                 /*typedef_u_cell*/

#ifndef struct_tag_GuIoLukxVi2zQsUjWZQ3ZE
#define struct_tag_GuIoLukxVi2zQsUjWZQ3ZE

struct tag_GuIoLukxVi2zQsUjWZQ3ZE
{
  real_T f1[2];
  real_T f2[2];
  real_T f3[2];
  real_T f4[2];
};

#endif                                 /*struct_tag_GuIoLukxVi2zQsUjWZQ3ZE*/

#ifndef typedef_s_GuIoLukxVi2zQsUjWZQ3ZE
#define typedef_s_GuIoLukxVi2zQsUjWZQ3ZE

typedef struct tag_GuIoLukxVi2zQsUjWZQ3ZE s_GuIoLukxVi2zQsUjWZQ3ZE;

#endif                                 /*typedef_s_GuIoLukxVi2zQsUjWZQ3ZE*/

#ifndef struct_tag_TNZeoVdxvKIjAzUD6PUdSD
#define struct_tag_TNZeoVdxvKIjAzUD6PUdSD

struct tag_TNZeoVdxvKIjAzUD6PUdSD
{
  char_T f1[8];
  char_T f2[4];
  char_T f3[4];
  real_T f4[2];
};

#endif                                 /*struct_tag_TNZeoVdxvKIjAzUD6PUdSD*/

#ifndef typedef_v_cell
#define typedef_v_cell

typedef struct tag_TNZeoVdxvKIjAzUD6PUdSD v_cell;

#endif                                 /*typedef_v_cell*/

#ifndef struct_tag_EhDP16bBvbCTSusBsf0VRF
#define struct_tag_EhDP16bBvbCTSusBsf0VRF

struct tag_EhDP16bBvbCTSusBsf0VRF
{
  char_T f1[6];
  char_T f2[8];
  char_T f3[7];
  char_T f4[13];
  char_T f5[13];
  char_T f6[10];
};

#endif                                 /*struct_tag_EhDP16bBvbCTSusBsf0VRF*/

#ifndef typedef_w_cell
#define typedef_w_cell

typedef struct tag_EhDP16bBvbCTSusBsf0VRF w_cell;

#endif                                 /*typedef_w_cell*/

#ifndef struct_tag_vbBokNRqkJckq2bHwJtaCB
#define struct_tag_vbBokNRqkJckq2bHwJtaCB

struct tag_vbBokNRqkJckq2bHwJtaCB
{
  char_T f1[15];
  char_T f2[12];
  char_T f3[15];
  char_T f4[11];
};

#endif                                 /*struct_tag_vbBokNRqkJckq2bHwJtaCB*/

#ifndef typedef_x_cell
#define typedef_x_cell

typedef struct tag_vbBokNRqkJckq2bHwJtaCB x_cell;

#endif                                 /*typedef_x_cell*/

#ifndef struct_tag_VaTKLTnPYfmrkwRDCncyDE
#define struct_tag_VaTKLTnPYfmrkwRDCncyDE

struct tag_VaTKLTnPYfmrkwRDCncyDE
{
  char_T f1[8];
  char_T f2[4];
  char_T f3[6];
  char_T f4[6];
  char_T f5[11];
  char_T f6[6];
  char_T f7[5];
  real_T f8;
};

#endif                                 /*struct_tag_VaTKLTnPYfmrkwRDCncyDE*/

#ifndef typedef_y_cell
#define typedef_y_cell

typedef struct tag_VaTKLTnPYfmrkwRDCncyDE y_cell;

#endif                                 /*typedef_y_cell*/

#ifndef struct_tag_DLpD1HCLsUg7APOXIGnkLE
#define struct_tag_DLpD1HCLsUg7APOXIGnkLE

struct tag_DLpD1HCLsUg7APOXIGnkLE
{
  char_T Value[9];
};

#endif                                 /*struct_tag_DLpD1HCLsUg7APOXIGnkLE*/

#ifndef typedef_s_DLpD1HCLsUg7APOXIGnkLE
#define typedef_s_DLpD1HCLsUg7APOXIGnkLE

typedef struct tag_DLpD1HCLsUg7APOXIGnkLE s_DLpD1HCLsUg7APOXIGnkLE;

#endif                                 /*typedef_s_DLpD1HCLsUg7APOXIGnkLE*/

#ifndef struct_tag_EdpfKQJwyRupylesDdjNkG
#define struct_tag_EdpfKQJwyRupylesDdjNkG

struct tag_EdpfKQJwyRupylesDdjNkG
{
  char_T Value[15];
};

#endif                                 /*struct_tag_EdpfKQJwyRupylesDdjNkG*/

#ifndef typedef_s_EdpfKQJwyRupylesDdjNkG
#define typedef_s_EdpfKQJwyRupylesDdjNkG

typedef struct tag_EdpfKQJwyRupylesDdjNkG s_EdpfKQJwyRupylesDdjNkG;

#endif                                 /*typedef_s_EdpfKQJwyRupylesDdjNkG*/

#ifndef struct_tag_fmfACJYzKHgczsehQfJiTH
#define struct_tag_fmfACJYzKHgczsehQfJiTH

struct tag_fmfACJYzKHgczsehQfJiTH
{
  char_T Value[15];
};

#endif                                 /*struct_tag_fmfACJYzKHgczsehQfJiTH*/

#ifndef typedef_s_fmfACJYzKHgczsehQfJiTH
#define typedef_s_fmfACJYzKHgczsehQfJiTH

typedef struct tag_fmfACJYzKHgczsehQfJiTH s_fmfACJYzKHgczsehQfJiTH;

#endif                                 /*typedef_s_fmfACJYzKHgczsehQfJiTH*/

#ifndef struct_tag_rVVmb0fbTuJMFHSqGgN1qH
#define struct_tag_rVVmb0fbTuJMFHSqGgN1qH

struct tag_rVVmb0fbTuJMFHSqGgN1qH
{
  char_T Value[26];
};

#endif                                 /*struct_tag_rVVmb0fbTuJMFHSqGgN1qH*/

#ifndef typedef_rtString_2
#define typedef_rtString_2

typedef struct tag_rVVmb0fbTuJMFHSqGgN1qH rtString_2;

#endif                                 /*typedef_rtString_2*/

#ifndef struct_tag_P9zzWt0CccPQ7zxVT7qpSD
#define struct_tag_P9zzWt0CccPQ7zxVT7qpSD

struct tag_P9zzWt0CccPQ7zxVT7qpSD
{
  char_T Value[26];
};

#endif                                 /*struct_tag_P9zzWt0CccPQ7zxVT7qpSD*/

#ifndef typedef_b_rtString_2
#define typedef_b_rtString_2

typedef struct tag_P9zzWt0CccPQ7zxVT7qpSD b_rtString_2;

#endif                                 /*typedef_b_rtString_2*/

#ifndef struct_tag_PDK2pKlIQU5xiKyVRvKr1B
#define struct_tag_PDK2pKlIQU5xiKyVRvKr1B

struct tag_PDK2pKlIQU5xiKyVRvKr1B
{
  s_fmfACJYzKHgczsehQfJiTH posix_clock;
  b_rtString_2 emlrtFunction;
};

#endif                                 /*struct_tag_PDK2pKlIQU5xiKyVRvKr1B*/

#ifndef typedef_s_PDK2pKlIQU5xiKyVRvKr1B
#define typedef_s_PDK2pKlIQU5xiKyVRvKr1B

typedef struct tag_PDK2pKlIQU5xiKyVRvKr1B s_PDK2pKlIQU5xiKyVRvKr1B;

#endif                                 /*typedef_s_PDK2pKlIQU5xiKyVRvKr1B*/

#ifndef struct_tag_IWCQm0zzoC2FtUzCpOlZYE
#define struct_tag_IWCQm0zzoC2FtUzCpOlZYE

struct tag_IWCQm0zzoC2FtUzCpOlZYE
{
  s_EdpfKQJwyRupylesDdjNkG posix_clock;
  rtString_2 emlrtFunction;
};

#endif                                 /*struct_tag_IWCQm0zzoC2FtUzCpOlZYE*/

#ifndef typedef_s_IWCQm0zzoC2FtUzCpOlZYE
#define typedef_s_IWCQm0zzoC2FtUzCpOlZYE

typedef struct tag_IWCQm0zzoC2FtUzCpOlZYE s_IWCQm0zzoC2FtUzCpOlZYE;

#endif                                 /*typedef_s_IWCQm0zzoC2FtUzCpOlZYE*/

#ifndef struct_tag_vbWzcivorexA4JA8bWY4YG
#define struct_tag_vbWzcivorexA4JA8bWY4YG

struct tag_vbWzcivorexA4JA8bWY4YG
{
  char_T f1[8];
  char_T f2[4];
  char_T f3[2];
  char_T f4[5];
  real_T f5;
};

#endif                                 /*struct_tag_vbWzcivorexA4JA8bWY4YG*/

#ifndef typedef_ab_cell
#define typedef_ab_cell

typedef struct tag_vbWzcivorexA4JA8bWY4YG ab_cell;

#endif                                 /*typedef_ab_cell*/

#ifndef struct_tag_Vz5W1wlspMBzkBtxfESIXE
#define struct_tag_Vz5W1wlspMBzkBtxfESIXE

struct tag_Vz5W1wlspMBzkBtxfESIXE
{
  char_T f1[6];
  char_T f2[7];
};

#endif                                 /*struct_tag_Vz5W1wlspMBzkBtxfESIXE*/

#ifndef typedef_bb_cell
#define typedef_bb_cell

typedef struct tag_Vz5W1wlspMBzkBtxfESIXE bb_cell;

#endif                                 /*typedef_bb_cell*/

#ifndef struct_tag_4cIdwr9b2nNUZ8NgBoi0ZD
#define struct_tag_4cIdwr9b2nNUZ8NgBoi0ZD

struct tag_4cIdwr9b2nNUZ8NgBoi0ZD
{
  robotics_manip_internal_CollisionGeometry posix_clock;
  rtString_2 emlrtFunction;
};

#endif                                 /*struct_tag_4cIdwr9b2nNUZ8NgBoi0ZD*/

#ifndef typedef_s_4cIdwr9b2nNUZ8NgBoi0ZD
#define typedef_s_4cIdwr9b2nNUZ8NgBoi0ZD

typedef struct tag_4cIdwr9b2nNUZ8NgBoi0ZD s_4cIdwr9b2nNUZ8NgBoi0ZD;

#endif                                 /*typedef_s_4cIdwr9b2nNUZ8NgBoi0ZD*/

#ifndef struct_tag_4a23tEZUeZaFd3fNsTZfIH
#define struct_tag_4a23tEZUeZaFd3fNsTZfIH

struct tag_4a23tEZUeZaFd3fNsTZfIH
{
  s_u9UvBA3PKnmgBDLStxCWtC _data;
};

#endif                                 /*struct_tag_4a23tEZUeZaFd3fNsTZfIH*/

#ifndef typedef_s_4a23tEZUeZaFd3fNsTZfIH
#define typedef_s_4a23tEZUeZaFd3fNsTZfIH

typedef struct tag_4a23tEZUeZaFd3fNsTZfIH s_4a23tEZUeZaFd3fNsTZfIH;

#endif                                 /*typedef_s_4a23tEZUeZaFd3fNsTZfIH*/

#ifndef struct_tag_x4l4stUDvMdnrA9ugWVmiH
#define struct_tag_x4l4stUDvMdnrA9ugWVmiH

struct tag_x4l4stUDvMdnrA9ugWVmiH
{
  s_EttDMoN1hdet51S4eY3dR _data;
};

#endif                                 /*struct_tag_x4l4stUDvMdnrA9ugWVmiH*/

#ifndef typedef_s_x4l4stUDvMdnrA9ugWVmiH
#define typedef_s_x4l4stUDvMdnrA9ugWVmiH

typedef struct tag_x4l4stUDvMdnrA9ugWVmiH s_x4l4stUDvMdnrA9ugWVmiH;

#endif                                 /*typedef_s_x4l4stUDvMdnrA9ugWVmiH*/

#ifndef struct_tag_6khVZLlzg3270lst7fcoXG
#define struct_tag_6khVZLlzg3270lst7fcoXG

struct tag_6khVZLlzg3270lst7fcoXG
{
  cell _data;
};

#endif                                 /*struct_tag_6khVZLlzg3270lst7fcoXG*/

#ifndef typedef_s_6khVZLlzg3270lst7fcoXG
#define typedef_s_6khVZLlzg3270lst7fcoXG

typedef struct tag_6khVZLlzg3270lst7fcoXG s_6khVZLlzg3270lst7fcoXG;

#endif                                 /*typedef_s_6khVZLlzg3270lst7fcoXG*/

#ifndef struct_tag_Q9exWnM4P2vFrlJou54v4D
#define struct_tag_Q9exWnM4P2vFrlJou54v4D

struct tag_Q9exWnM4P2vFrlJou54v4D
{
  b_cell _data;
};

#endif                                 /*struct_tag_Q9exWnM4P2vFrlJou54v4D*/

#ifndef typedef_s_Q9exWnM4P2vFrlJou54v4D
#define typedef_s_Q9exWnM4P2vFrlJou54v4D

typedef struct tag_Q9exWnM4P2vFrlJou54v4D s_Q9exWnM4P2vFrlJou54v4D;

#endif                                 /*typedef_s_Q9exWnM4P2vFrlJou54v4D*/

#ifndef struct_tag_2Otzot4aR0pW68wjnUjAj
#define struct_tag_2Otzot4aR0pW68wjnUjAj

struct tag_2Otzot4aR0pW68wjnUjAj
{
  s_dK05fgDE5TQ2s3o7OZp84G _data;
};

#endif                                 /*struct_tag_2Otzot4aR0pW68wjnUjAj*/

#ifndef typedef_s_2Otzot4aR0pW68wjnUjAj
#define typedef_s_2Otzot4aR0pW68wjnUjAj

typedef struct tag_2Otzot4aR0pW68wjnUjAj s_2Otzot4aR0pW68wjnUjAj;

#endif                                 /*typedef_s_2Otzot4aR0pW68wjnUjAj*/

#ifndef struct_tag_cZcqb7mh2EnYx0fmiWif3C
#define struct_tag_cZcqb7mh2EnYx0fmiWif3C

struct tag_cZcqb7mh2EnYx0fmiWif3C
{
  c_cell _data;
};

#endif                                 /*struct_tag_cZcqb7mh2EnYx0fmiWif3C*/

#ifndef typedef_s_cZcqb7mh2EnYx0fmiWif3C
#define typedef_s_cZcqb7mh2EnYx0fmiWif3C

typedef struct tag_cZcqb7mh2EnYx0fmiWif3C s_cZcqb7mh2EnYx0fmiWif3C;

#endif                                 /*typedef_s_cZcqb7mh2EnYx0fmiWif3C*/

#ifndef struct_tag_ChBPpVvVxuM9ubMdh2oT1D
#define struct_tag_ChBPpVvVxuM9ubMdh2oT1D

struct tag_ChBPpVvVxuM9ubMdh2oT1D
{
  d_cell _data;
};

#endif                                 /*struct_tag_ChBPpVvVxuM9ubMdh2oT1D*/

#ifndef typedef_s_ChBPpVvVxuM9ubMdh2oT1D
#define typedef_s_ChBPpVvVxuM9ubMdh2oT1D

typedef struct tag_ChBPpVvVxuM9ubMdh2oT1D s_ChBPpVvVxuM9ubMdh2oT1D;

#endif                                 /*typedef_s_ChBPpVvVxuM9ubMdh2oT1D*/

#ifndef struct_tag_HripCXu6JAaYwwBOIrvKEG
#define struct_tag_HripCXu6JAaYwwBOIrvKEG

struct tag_HripCXu6JAaYwwBOIrvKEG
{
  e_cell _data;
};

#endif                                 /*struct_tag_HripCXu6JAaYwwBOIrvKEG*/

#ifndef typedef_s_HripCXu6JAaYwwBOIrvKEG
#define typedef_s_HripCXu6JAaYwwBOIrvKEG

typedef struct tag_HripCXu6JAaYwwBOIrvKEG s_HripCXu6JAaYwwBOIrvKEG;

#endif                                 /*typedef_s_HripCXu6JAaYwwBOIrvKEG*/

#ifndef struct_tag_IXDPg4TguZyNIZe3sGIUmH
#define struct_tag_IXDPg4TguZyNIZe3sGIUmH

struct tag_IXDPg4TguZyNIZe3sGIUmH
{
  f_cell _data;
};

#endif                                 /*struct_tag_IXDPg4TguZyNIZe3sGIUmH*/

#ifndef typedef_s_IXDPg4TguZyNIZe3sGIUmH
#define typedef_s_IXDPg4TguZyNIZe3sGIUmH

typedef struct tag_IXDPg4TguZyNIZe3sGIUmH s_IXDPg4TguZyNIZe3sGIUmH;

#endif                                 /*typedef_s_IXDPg4TguZyNIZe3sGIUmH*/

#ifndef struct_tag_Y9kVpJoelcqH40diwCOSsG
#define struct_tag_Y9kVpJoelcqH40diwCOSsG

struct tag_Y9kVpJoelcqH40diwCOSsG
{
  g_cell _data;
};

#endif                                 /*struct_tag_Y9kVpJoelcqH40diwCOSsG*/

#ifndef typedef_s_Y9kVpJoelcqH40diwCOSsG
#define typedef_s_Y9kVpJoelcqH40diwCOSsG

typedef struct tag_Y9kVpJoelcqH40diwCOSsG s_Y9kVpJoelcqH40diwCOSsG;

#endif                                 /*typedef_s_Y9kVpJoelcqH40diwCOSsG*/

#ifndef struct_tag_t7lBoh2zbixDAvB17FYokG
#define struct_tag_t7lBoh2zbixDAvB17FYokG

struct tag_t7lBoh2zbixDAvB17FYokG
{
  h_cell _data;
};

#endif                                 /*struct_tag_t7lBoh2zbixDAvB17FYokG*/

#ifndef typedef_s_t7lBoh2zbixDAvB17FYokG
#define typedef_s_t7lBoh2zbixDAvB17FYokG

typedef struct tag_t7lBoh2zbixDAvB17FYokG s_t7lBoh2zbixDAvB17FYokG;

#endif                                 /*typedef_s_t7lBoh2zbixDAvB17FYokG*/

#ifndef struct_tag_Y6XvlYTysWyABOiCRpJ3lH
#define struct_tag_Y6XvlYTysWyABOiCRpJ3lH

struct tag_Y6XvlYTysWyABOiCRpJ3lH
{
  cell_wrap _data;
};

#endif                                 /*struct_tag_Y6XvlYTysWyABOiCRpJ3lH*/

#ifndef typedef_s_Y6XvlYTysWyABOiCRpJ3lH
#define typedef_s_Y6XvlYTysWyABOiCRpJ3lH

typedef struct tag_Y6XvlYTysWyABOiCRpJ3lH s_Y6XvlYTysWyABOiCRpJ3lH;

#endif                                 /*typedef_s_Y6XvlYTysWyABOiCRpJ3lH*/

#ifndef struct_tag_MTIy3ehNapLINbxKQqfESE
#define struct_tag_MTIy3ehNapLINbxKQqfESE

struct tag_MTIy3ehNapLINbxKQqfESE
{
  i_cell _data;
};

#endif                                 /*struct_tag_MTIy3ehNapLINbxKQqfESE*/

#ifndef typedef_s_MTIy3ehNapLINbxKQqfESE
#define typedef_s_MTIy3ehNapLINbxKQqfESE

typedef struct tag_MTIy3ehNapLINbxKQqfESE s_MTIy3ehNapLINbxKQqfESE;

#endif                                 /*typedef_s_MTIy3ehNapLINbxKQqfESE*/

#ifndef struct_tag_N3qtS5cWoNdn0sL8jsEEPE
#define struct_tag_N3qtS5cWoNdn0sL8jsEEPE

struct tag_N3qtS5cWoNdn0sL8jsEEPE
{
  j_cell _data;
};

#endif                                 /*struct_tag_N3qtS5cWoNdn0sL8jsEEPE*/

#ifndef typedef_s_N3qtS5cWoNdn0sL8jsEEPE
#define typedef_s_N3qtS5cWoNdn0sL8jsEEPE

typedef struct tag_N3qtS5cWoNdn0sL8jsEEPE s_N3qtS5cWoNdn0sL8jsEEPE;

#endif                                 /*typedef_s_N3qtS5cWoNdn0sL8jsEEPE*/

#ifndef struct_tag_EWUGvSwVJMiGIFOUXXSV0G
#define struct_tag_EWUGvSwVJMiGIFOUXXSV0G

struct tag_EWUGvSwVJMiGIFOUXXSV0G
{
  k_cell _data;
};

#endif                                 /*struct_tag_EWUGvSwVJMiGIFOUXXSV0G*/

#ifndef typedef_s_EWUGvSwVJMiGIFOUXXSV0G
#define typedef_s_EWUGvSwVJMiGIFOUXXSV0G

typedef struct tag_EWUGvSwVJMiGIFOUXXSV0G s_EWUGvSwVJMiGIFOUXXSV0G;

#endif                                 /*typedef_s_EWUGvSwVJMiGIFOUXXSV0G*/

#ifndef struct_tag_oGraOHor6pHRVC3FPpsI7F
#define struct_tag_oGraOHor6pHRVC3FPpsI7F

struct tag_oGraOHor6pHRVC3FPpsI7F
{
  l_cell _data;
};

#endif                                 /*struct_tag_oGraOHor6pHRVC3FPpsI7F*/

#ifndef typedef_s_oGraOHor6pHRVC3FPpsI7F
#define typedef_s_oGraOHor6pHRVC3FPpsI7F

typedef struct tag_oGraOHor6pHRVC3FPpsI7F s_oGraOHor6pHRVC3FPpsI7F;

#endif                                 /*typedef_s_oGraOHor6pHRVC3FPpsI7F*/

#ifndef struct_tag_e7jvQoFbvOwJ3sc92LdjpG
#define struct_tag_e7jvQoFbvOwJ3sc92LdjpG

struct tag_e7jvQoFbvOwJ3sc92LdjpG
{
  b_cell_wrap _data;
};

#endif                                 /*struct_tag_e7jvQoFbvOwJ3sc92LdjpG*/

#ifndef typedef_s_e7jvQoFbvOwJ3sc92LdjpG
#define typedef_s_e7jvQoFbvOwJ3sc92LdjpG

typedef struct tag_e7jvQoFbvOwJ3sc92LdjpG s_e7jvQoFbvOwJ3sc92LdjpG;

#endif                                 /*typedef_s_e7jvQoFbvOwJ3sc92LdjpG*/

#ifndef struct_tag_JwSVm36Dontv8xVkHxhlFG
#define struct_tag_JwSVm36Dontv8xVkHxhlFG

struct tag_JwSVm36Dontv8xVkHxhlFG
{
  m_cell _data;
};

#endif                                 /*struct_tag_JwSVm36Dontv8xVkHxhlFG*/

#ifndef typedef_s_JwSVm36Dontv8xVkHxhlFG
#define typedef_s_JwSVm36Dontv8xVkHxhlFG

typedef struct tag_JwSVm36Dontv8xVkHxhlFG s_JwSVm36Dontv8xVkHxhlFG;

#endif                                 /*typedef_s_JwSVm36Dontv8xVkHxhlFG*/

#ifndef struct_tag_IMplkwHwl9Mp3XkIKDeekE
#define struct_tag_IMplkwHwl9Mp3XkIKDeekE

struct tag_IMplkwHwl9Mp3XkIKDeekE
{
  n_cell _data;
};

#endif                                 /*struct_tag_IMplkwHwl9Mp3XkIKDeekE*/

#ifndef typedef_s_IMplkwHwl9Mp3XkIKDeekE
#define typedef_s_IMplkwHwl9Mp3XkIKDeekE

typedef struct tag_IMplkwHwl9Mp3XkIKDeekE s_IMplkwHwl9Mp3XkIKDeekE;

#endif                                 /*typedef_s_IMplkwHwl9Mp3XkIKDeekE*/

#ifndef struct_tag_PHbM3YsQmfii5HvU0Kv5dF
#define struct_tag_PHbM3YsQmfii5HvU0Kv5dF

struct tag_PHbM3YsQmfii5HvU0Kv5dF
{
  c_cell_wrap _data;
};

#endif                                 /*struct_tag_PHbM3YsQmfii5HvU0Kv5dF*/

#ifndef typedef_s_PHbM3YsQmfii5HvU0Kv5dF
#define typedef_s_PHbM3YsQmfii5HvU0Kv5dF

typedef struct tag_PHbM3YsQmfii5HvU0Kv5dF s_PHbM3YsQmfii5HvU0Kv5dF;

#endif                                 /*typedef_s_PHbM3YsQmfii5HvU0Kv5dF*/

#ifndef struct_tag_V0kS2Xksq6JLfwCbs6byXC
#define struct_tag_V0kS2Xksq6JLfwCbs6byXC

struct tag_V0kS2Xksq6JLfwCbs6byXC
{
  o_cell _data;
};

#endif                                 /*struct_tag_V0kS2Xksq6JLfwCbs6byXC*/

#ifndef typedef_s_V0kS2Xksq6JLfwCbs6byXC
#define typedef_s_V0kS2Xksq6JLfwCbs6byXC

typedef struct tag_V0kS2Xksq6JLfwCbs6byXC s_V0kS2Xksq6JLfwCbs6byXC;

#endif                                 /*typedef_s_V0kS2Xksq6JLfwCbs6byXC*/

#ifndef struct_tag_4C0RWAw2XAIgChxsP1WtuF
#define struct_tag_4C0RWAw2XAIgChxsP1WtuF

struct tag_4C0RWAw2XAIgChxsP1WtuF
{
  p_cell _data;
};

#endif                                 /*struct_tag_4C0RWAw2XAIgChxsP1WtuF*/

#ifndef typedef_s_4C0RWAw2XAIgChxsP1WtuF
#define typedef_s_4C0RWAw2XAIgChxsP1WtuF

typedef struct tag_4C0RWAw2XAIgChxsP1WtuF s_4C0RWAw2XAIgChxsP1WtuF;

#endif                                 /*typedef_s_4C0RWAw2XAIgChxsP1WtuF*/

#ifndef struct_tag_P6KwnRByFgNalRDS16ZLlD
#define struct_tag_P6KwnRByFgNalRDS16ZLlD

struct tag_P6KwnRByFgNalRDS16ZLlD
{
  q_cell _data;
};

#endif                                 /*struct_tag_P6KwnRByFgNalRDS16ZLlD*/

#ifndef typedef_s_P6KwnRByFgNalRDS16ZLlD
#define typedef_s_P6KwnRByFgNalRDS16ZLlD

typedef struct tag_P6KwnRByFgNalRDS16ZLlD s_P6KwnRByFgNalRDS16ZLlD;

#endif                                 /*typedef_s_P6KwnRByFgNalRDS16ZLlD*/

#ifndef struct_tag_AwUUAUmXG66MEvvjXpqO4G
#define struct_tag_AwUUAUmXG66MEvvjXpqO4G

struct tag_AwUUAUmXG66MEvvjXpqO4G
{
  r_cell _data;
};

#endif                                 /*struct_tag_AwUUAUmXG66MEvvjXpqO4G*/

#ifndef typedef_s_AwUUAUmXG66MEvvjXpqO4G
#define typedef_s_AwUUAUmXG66MEvvjXpqO4G

typedef struct tag_AwUUAUmXG66MEvvjXpqO4G s_AwUUAUmXG66MEvvjXpqO4G;

#endif                                 /*typedef_s_AwUUAUmXG66MEvvjXpqO4G*/

#ifndef struct_tag_jGkLm5JXrhqUavbFvt7USD
#define struct_tag_jGkLm5JXrhqUavbFvt7USD

struct tag_jGkLm5JXrhqUavbFvt7USD
{
  s_L7UD7LoBtcYzjeUmaOisIB _data;
};

#endif                                 /*struct_tag_jGkLm5JXrhqUavbFvt7USD*/

#ifndef typedef_s_jGkLm5JXrhqUavbFvt7USD
#define typedef_s_jGkLm5JXrhqUavbFvt7USD

typedef struct tag_jGkLm5JXrhqUavbFvt7USD s_jGkLm5JXrhqUavbFvt7USD;

#endif                                 /*typedef_s_jGkLm5JXrhqUavbFvt7USD*/

#ifndef struct_tag_7MWpNrlRizs4qBxKWIRzZH
#define struct_tag_7MWpNrlRizs4qBxKWIRzZH

struct tag_7MWpNrlRizs4qBxKWIRzZH
{
  s_cell _data;
};

#endif                                 /*struct_tag_7MWpNrlRizs4qBxKWIRzZH*/

#ifndef typedef_s_7MWpNrlRizs4qBxKWIRzZH
#define typedef_s_7MWpNrlRizs4qBxKWIRzZH

typedef struct tag_7MWpNrlRizs4qBxKWIRzZH s_7MWpNrlRizs4qBxKWIRzZH;

#endif                                 /*typedef_s_7MWpNrlRizs4qBxKWIRzZH*/

#ifndef struct_tag_u7mjJk4swyKFhUhWMciBxB
#define struct_tag_u7mjJk4swyKFhUhWMciBxB

struct tag_u7mjJk4swyKFhUhWMciBxB
{
  t_cell _data;
};

#endif                                 /*struct_tag_u7mjJk4swyKFhUhWMciBxB*/

#ifndef typedef_s_u7mjJk4swyKFhUhWMciBxB
#define typedef_s_u7mjJk4swyKFhUhWMciBxB

typedef struct tag_u7mjJk4swyKFhUhWMciBxB s_u7mjJk4swyKFhUhWMciBxB;

#endif                                 /*typedef_s_u7mjJk4swyKFhUhWMciBxB*/

#ifndef struct_tag_Jt1rKnLiYWBMG0lQjLpryF
#define struct_tag_Jt1rKnLiYWBMG0lQjLpryF

struct tag_Jt1rKnLiYWBMG0lQjLpryF
{
  u_cell _data;
};

#endif                                 /*struct_tag_Jt1rKnLiYWBMG0lQjLpryF*/

#ifndef typedef_s_Jt1rKnLiYWBMG0lQjLpryF
#define typedef_s_Jt1rKnLiYWBMG0lQjLpryF

typedef struct tag_Jt1rKnLiYWBMG0lQjLpryF s_Jt1rKnLiYWBMG0lQjLpryF;

#endif                                 /*typedef_s_Jt1rKnLiYWBMG0lQjLpryF*/

#ifndef struct_tag_Rjzf68Hm1Wq1kTtvdSBwLB
#define struct_tag_Rjzf68Hm1Wq1kTtvdSBwLB

struct tag_Rjzf68Hm1Wq1kTtvdSBwLB
{
  s_GuIoLukxVi2zQsUjWZQ3ZE _data;
};

#endif                                 /*struct_tag_Rjzf68Hm1Wq1kTtvdSBwLB*/

#ifndef typedef_s_Rjzf68Hm1Wq1kTtvdSBwLB
#define typedef_s_Rjzf68Hm1Wq1kTtvdSBwLB

typedef struct tag_Rjzf68Hm1Wq1kTtvdSBwLB s_Rjzf68Hm1Wq1kTtvdSBwLB;

#endif                                 /*typedef_s_Rjzf68Hm1Wq1kTtvdSBwLB*/

#ifndef struct_tag_PzuVVe7ae7ECMGcC6fkY7G
#define struct_tag_PzuVVe7ae7ECMGcC6fkY7G

struct tag_PzuVVe7ae7ECMGcC6fkY7G
{
  v_cell _data;
};

#endif                                 /*struct_tag_PzuVVe7ae7ECMGcC6fkY7G*/

#ifndef typedef_s_PzuVVe7ae7ECMGcC6fkY7G
#define typedef_s_PzuVVe7ae7ECMGcC6fkY7G

typedef struct tag_PzuVVe7ae7ECMGcC6fkY7G s_PzuVVe7ae7ECMGcC6fkY7G;

#endif                                 /*typedef_s_PzuVVe7ae7ECMGcC6fkY7G*/

#ifndef struct_tag_2aiDYeyDzk0rU3xH9VoWO
#define struct_tag_2aiDYeyDzk0rU3xH9VoWO

struct tag_2aiDYeyDzk0rU3xH9VoWO
{
  w_cell _data;
};

#endif                                 /*struct_tag_2aiDYeyDzk0rU3xH9VoWO*/

#ifndef typedef_s_2aiDYeyDzk0rU3xH9VoWO
#define typedef_s_2aiDYeyDzk0rU3xH9VoWO

typedef struct tag_2aiDYeyDzk0rU3xH9VoWO s_2aiDYeyDzk0rU3xH9VoWO;

#endif                                 /*typedef_s_2aiDYeyDzk0rU3xH9VoWO*/

#ifndef struct_tag_965CnmpRGHzI9uMFQMrcdE
#define struct_tag_965CnmpRGHzI9uMFQMrcdE

struct tag_965CnmpRGHzI9uMFQMrcdE
{
  x_cell _data;
};

#endif                                 /*struct_tag_965CnmpRGHzI9uMFQMrcdE*/

#ifndef typedef_s_965CnmpRGHzI9uMFQMrcdE
#define typedef_s_965CnmpRGHzI9uMFQMrcdE

typedef struct tag_965CnmpRGHzI9uMFQMrcdE s_965CnmpRGHzI9uMFQMrcdE;

#endif                                 /*typedef_s_965CnmpRGHzI9uMFQMrcdE*/

#ifndef struct_tag_8gT68pP11HTxwUCFqWJzO
#define struct_tag_8gT68pP11HTxwUCFqWJzO

struct tag_8gT68pP11HTxwUCFqWJzO
{
  y_cell _data;
};

#endif                                 /*struct_tag_8gT68pP11HTxwUCFqWJzO*/

#ifndef typedef_s_8gT68pP11HTxwUCFqWJzO
#define typedef_s_8gT68pP11HTxwUCFqWJzO

typedef struct tag_8gT68pP11HTxwUCFqWJzO s_8gT68pP11HTxwUCFqWJzO;

#endif                                 /*typedef_s_8gT68pP11HTxwUCFqWJzO*/

#ifndef struct_tag_yHx1DrDHB7rDGffovTBVkC
#define struct_tag_yHx1DrDHB7rDGffovTBVkC

struct tag_yHx1DrDHB7rDGffovTBVkC
{
  ab_cell _data;
};

#endif                                 /*struct_tag_yHx1DrDHB7rDGffovTBVkC*/

#ifndef typedef_s_yHx1DrDHB7rDGffovTBVkC
#define typedef_s_yHx1DrDHB7rDGffovTBVkC

typedef struct tag_yHx1DrDHB7rDGffovTBVkC s_yHx1DrDHB7rDGffovTBVkC;

#endif                                 /*typedef_s_yHx1DrDHB7rDGffovTBVkC*/

#ifndef struct_tag_C8zFSTvlkEnlFJO8iPhvdC
#define struct_tag_C8zFSTvlkEnlFJO8iPhvdC

struct tag_C8zFSTvlkEnlFJO8iPhvdC
{
  bb_cell _data;
};

#endif                                 /*struct_tag_C8zFSTvlkEnlFJO8iPhvdC*/

#ifndef typedef_s_C8zFSTvlkEnlFJO8iPhvdC
#define typedef_s_C8zFSTvlkEnlFJO8iPhvdC

typedef struct tag_C8zFSTvlkEnlFJO8iPhvdC s_C8zFSTvlkEnlFJO8iPhvdC;

#endif                                 /*typedef_s_C8zFSTvlkEnlFJO8iPhvdC*/

#ifndef typedef_b_robotics_core_internal_NLPSolverExitFlags
#define typedef_b_robotics_core_internal_NLPSolverExitFlags

typedef int32_T b_robotics_core_internal_NLPSolverExitFlags;

#endif                                 /*typedef_b_robotics_core_internal_NLPSolverExitFlags*/

#ifndef robotics_core_internal_NLPSolverExitFlags_constants
#define robotics_core_internal_NLPSolverExitFlags_constants

/* enum robotics_core_internal_NLPSolverExitFlags */
#define robotics_core_internal_NLPSolverExitFlags_LocalMinimumFound (1) /* Default value */
#define robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded (2)
#define robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded (3)
#define robotics_core_internal_NLPSolverExitFlags_StepSizeBelowMinimum (4)
#define robotics_core_internal_NLPSolverExitFlags_SearchDirectionInvalid (6)
#define c_robotics_core_internal_NLPSolverExitFlags_HessianNotPositiveSe (7)
#endif                                 /*robotics_core_internal_NLPSolverExitFlags_constants*/

#ifndef typedef_InstanceStruct_mrkgoZAWWYFs627wbafmvD
#define typedef_InstanceStruct_mrkgoZAWWYFs627wbafmvD

typedef struct {
  SimStruct *S;
  robotics_slmanip_internal_block_IKBlock sysobj;
  boolean_T sysobj_not_empty;
  uint32_T method;
  boolean_T method_not_empty;
  uint32_T state;
  boolean_T state_not_empty;
  uint32_T b_state[2];
  boolean_T b_state_not_empty;
  uint32_T c_state[625];
  boolean_T c_state_not_empty;
  uint32_T b_method;
  boolean_T b_method_not_empty;
  uint32_T d_state[2];
  boolean_T d_state_not_empty;
  void *emlrtRootTLSGlobal;
  real_T (*u0)[16];
  real_T (*u1)[6];
  real_T (*u2)[3];
  real_T (*b_y0)[3];
  ikblock_info_bus *b_y1;
} InstanceStruct_mrkgoZAWWYFs627wbafmvD;

#endif                                 /*typedef_InstanceStruct_mrkgoZAWWYFs627wbafmvD*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_mrkgoZAWWYFs627wbafmvD(SimStruct *S, int_T method,
  void* data);

#endif
