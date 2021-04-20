/* Include files */

#include "modelInterface.h"
#include "m_mrkgoZAWWYFs627wbafmvD.h"
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 50,    /* lineNo */
  "IKBlock",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/IKBlock.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/matlab/system/+matlab/+system/+mixin/Propagates.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 12,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 31,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 70,  /* lineNo */
  "IKBlock",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/IKBlock.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 71,  /* lineNo */
  "IKBlock",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/IKBlock.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/InternalAccess.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 106, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 153, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 158, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 165, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 71,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 131, /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 144, /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 140, /* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 27,  /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 38,  /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 37,  /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 44,  /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 52,  /* lineNo */
  "collisionBox",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotcore/collisionBox.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 65,  /* lineNo */
  "collisionBox",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotcore/collisionBox.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 50,  /* lineNo */
  "CollisionGeometryBase",             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotcore/+robotics/+core/+internal/CollisionGeometryBase.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 1,  /* lineNo */
  "InternalAccess",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/InternalAccess.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 125,/* lineNo */
  "collisionBox",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotcore/collisionBox.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 35, /* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 86, /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 96, /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 206,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 247,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 1,  /* lineNo */
  "ProcessConstructorArguments",       /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/system/coder/+matlab/+system/+coder/ProcessConstructorArguments.p"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 468,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 454,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 455,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 460,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 473,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 459,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 131,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 134,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 138,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 47, /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 69, /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 61, /* lineNo */
  "randi",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/randi.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 114,/* lineNo */
  "rand",                              /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/rand.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 45, /* lineNo */
  "eml_rand",                          /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/private/eml_rand.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 15, /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/private/eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 51, /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 1121,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 1133,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 1972,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 1977,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 1980,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 1988,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 76, /* lineNo */
  "validateattributes",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 1152,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 1155,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 1161,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 161,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 165,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 2039,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 195,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 199,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 203,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 206,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 208,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 241,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 243,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 244,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 251,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 252,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 219,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 1446,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 1450,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 374,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 1175,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 1179,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 156,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 157,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 167,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 78, /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 147,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 215,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 359,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 361,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 363,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 364,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 155,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 67, /* lineNo */
  "validatestring",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/lang/validatestring.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 98, /* lineNo */
  "validatestring",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/lang/validatestring.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 140,/* lineNo */
  "validatestring",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/lang/validatestring.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 216,/* lineNo */
  "strcmp",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/strcmp.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 217,/* lineNo */
  "strcmp",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/strcmp.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 218,/* lineNo */
  "strcmp",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/strcmp.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 16, /* lineNo */
  "lower",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/strfun/lower.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 10, /* lineNo */
  "eml_string_transform",              /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/strfun/eml_string_transform.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 227,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 231,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 21, /* lineNo */
  "warning",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/warning.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 451,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 1,  /* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 70, /* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 112,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 113,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 42, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 1,  /* lineNo */
  "TimeProvider",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/TimeProvider.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 358,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 439,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 33, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 38, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 118,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 121,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 124,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 504,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 507,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 508,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 509,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 510,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 50, /* lineNo */
  "eye",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/eye.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 21, /* lineNo */
  "checkAndSaturateExpandSize",        /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/checkAndSaturateExpandSize.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 2000,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 130,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 1,  /* lineNo */
  "IKExtraArgs",                       /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/IKExtraArgs.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 158,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 159,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 258,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 259,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 261,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 270,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 271,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 275,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 31, /* lineNo */
  "inv",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 42, /* lineNo */
  "inv",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 46, /* lineNo */
  "inv",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 307,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 309,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 315,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 316,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 320,/* lineNo */
  "inverseKinematics",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 1419,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 1421,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 1435,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 39, /* lineNo */
  "find",                              /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 1398,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 402,/* lineNo */
  "find",                              /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 43, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo wf_emlrtRSI = { 108,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo xf_emlrtRSI = { 111,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 123,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 142,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 144,/* lineNo */
  "NLPSolverInterface",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/NLPSolverInterface.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 83, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo dg_emlrtRSI = { 84, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 31, /* lineNo */
  "tic",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/timefun/tic.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 9,  /* lineNo */
  "getTime",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/coder/coder/lib/+coder/+internal/+time/getTime.m"/* pathName */
};

static emlrtRSInfo gg_emlrtRSI = { 29, /* lineNo */
  "callEMLRTClockGettime",             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/coder/coder/lib/+coder/+internal/+time/private/callEMLRTClockGettime.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 185,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 191,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 192,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 223,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 226,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 235,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 239,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 243,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 250,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 251,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 266,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 286,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 320,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 324,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 327,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 334,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 337,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 348,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 385,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 388,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 394,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 398,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 410,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 79, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 48, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 38, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 40, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 22, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/IKHelpers.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 27, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/IKHelpers.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 1658,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 1655,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 1622,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 1609,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 1608,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 1605,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 1732,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 1733,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 511,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 395,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 396,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 398,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 23, /* lineNo */
  "axang2tform",                       /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/axang2tform.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 39, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/axang2rotm.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 15, /* lineNo */
  "normalizeRows",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+internal/normalizeRows.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 22, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/axang2rotm.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 21, /* lineNo */
  "validateNumericMatrix",             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+internal/+validation/validateNumericMatrix.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 64, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/IKHelpers.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 53, /* lineNo */
  "rotm2axang",                        /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/rotm2axang.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 44, /* lineNo */
  "rotm2axang",                        /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/rotm2axang.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 25, /* lineNo */
  "svd",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/svd.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 33, /* lineNo */
  "svd",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/svd.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 34, /* lineNo */
  "xgesvd",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+lapack/xgesvd.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 407,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzsvdc.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 394,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzsvdc.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 380,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzsvdc.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 353,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzsvdc.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 334,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzsvdc.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 32, /* lineNo */
  "xrotg",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+refblas/xrotg.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 64, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 66, /* lineNo */
  "SystemTimeProvider",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/SystemTimeProvider.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 36, /* lineNo */
  "toc",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/timefun/toc.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 20, /* lineNo */
  "mldivide",                          /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/mldivide.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 42, /* lineNo */
  "mldivide",                          /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/mldivide.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 44, /* lineNo */
  "mldivide",                          /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/mldivide.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 112,/* lineNo */
  "lusolve",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 124,/* lineNo */
  "lusolve",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 70, /* lineNo */
  "xgetrfs",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+lapack/xgetrfs.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 28, /* lineNo */
  "repmat",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/repmat.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 30, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 58, /* lineNo */
  "xgetrf",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+lapack/xgetrf.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 58, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrf.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 81, /* lineNo */
  "colon",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/colon.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 126,/* lineNo */
  "colon",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/colon.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 273,/* lineNo */
  "colon",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/colon.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 45, /* lineNo */
  "xgeru",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+blas/xgeru.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 16, /* lineNo */
  "xgetrs",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+lapack/xgetrs.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 18, /* lineNo */
  "xgetrs",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+lapack/xgetrs.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 32, /* lineNo */
  "xzgetrs",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrs.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 36, /* lineNo */
  "xzgetrs",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrs.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 90, /* lineNo */
  "lusolve",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 41, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 45, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 52, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 111,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 114,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 169,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 209,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 224,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 250,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzgeqp3.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 81, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 68, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 41, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarfg.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 68, /* lineNo */
  "xzlarf",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m"/* pathName */
};

static emlrtRSInfo ak_emlrtRSI = { 75, /* lineNo */
  "xzlarf",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzlarf.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 45, /* lineNo */
  "xgerc",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+blas/xgerc.m"/* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 139,/* lineNo */
  "qrsolve",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 138,/* lineNo */
  "qrsolve",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 85, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 31, /* lineNo */
  "xunormqr",                          /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 415,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 21, /* lineNo */
  "inv",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 22, /* lineNo */
  "inv",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 173,/* lineNo */
  "inv",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 174,/* lineNo */
  "inv",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 190,/* lineNo */
  "inv",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 44, /* lineNo */
  "chol",                              /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/chol.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 74, /* lineNo */
  "chol",                              /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/chol.m"/* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 13, /* lineNo */
  "xzpotrf",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzpotrf.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 99, /* lineNo */
  "xzpotrf",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzpotrf.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 105,/* lineNo */
  "xzpotrf",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzpotrf.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 419,/* lineNo */
  "DampedBFGSwGradientProjection",     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 48, /* lineNo */
  "IKHelpers",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/IKHelpers.m"/* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 540,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 523,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 524,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 526,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 527,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 528,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo al_emlrtRSI = { 529,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo bl_emlrtRSI = { 531,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo cl_emlrtRSI = { 123,/* lineNo */
  "randn",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/randn.m"/* pathName */
};

static emlrtRSInfo dl_emlrtRSI = { 40, /* lineNo */
  "eml_randn",                         /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/private/eml_randn.m"/* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 21, /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/private/eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 56, /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 438,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 447,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 449,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 1773,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 1786,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 103,/* lineNo */
  "colon",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/colon.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 297,/* lineNo */
  "colon",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/colon.m"/* pathName */
};

static emlrtRSInfo nl_emlrtRSI = { 612,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 1260,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 1,  /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/coder/coder/+coder/+internal/matlabCodegenHandle.p"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 158, /* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 13,  /* lineNo */
  37,                                  /* colNo */
  "validatenonempty",                  /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatenonempty.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 28,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/error.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatenonnan.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatefinite.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 115, /* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/lang/validatestring.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 107, /* lineNo */
  9,                                   /* colNo */
  "validatestring",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/lang/validatestring.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 15,  /* lineNo */
  9,                                   /* colNo */
  "assertSupportedString",             /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/assertSupportedString.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 14,  /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/coder/coder/lib/+coder/+internal/warning.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/coder/coder/lib/+coder/+internal/warning.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 58,  /* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 64,  /* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 21,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/error.m"/* pName */
};

static emlrtMCInfo p_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/flt2str.m"/* pName */
};

static emlrtMCInfo q_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatenonnegative.m"/* pName */
};

static emlrtMCInfo r_emlrtMCI = { 10,  /* lineNo */
  23,                                  /* colNo */
  "validatesize",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatesize.m"/* pName */
};

static emlrtMCInfo s_emlrtMCI = { 15,  /* lineNo */
  19,                                  /* colNo */
  "validatesize",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatesize.m"/* pName */
};

static emlrtMCInfo t_emlrtMCI = { 121, /* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/indexShapeCheck.m"/* pName */
};

static emlrtMCInfo u_emlrtMCI = { 37,  /* lineNo */
  9,                                   /* colNo */
  "callEMLRTClockGettime",             /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/coder/coder/lib/+coder/+internal/+time/private/callEMLRTClockGettime.m"/* pName */
};

static emlrtMCInfo v_emlrtMCI = { 20,  /* lineNo */
  15,                                  /* colNo */
  "rdivide_helper",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/rdivide_helper.m"/* pName */
};

static emlrtMCInfo w_emlrtMCI = { 283, /* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtMCInfo x_emlrtMCI = { 18,  /* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatencols.m"/* pName */
};

static emlrtMCInfo y_emlrtMCI = { 123, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo ab_emlrtMCI = { 118,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo bb_emlrtMCI = { 269,/* lineNo */
  13,                                  /* colNo */
  "xzsvdc",                            /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzsvdc.m"/* pName */
};

static emlrtMCInfo cb_emlrtMCI = { 64, /* lineNo */
  13,                                  /* colNo */
  "SystemTimeProvider",                /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/SystemTimeProvider.m"/* pName */
};

static emlrtMCInfo db_emlrtMCI = { 16, /* lineNo */
  19,                                  /* colNo */
  "mldivide",                          /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/mldivide.m"/* pName */
};

static emlrtMCInfo eb_emlrtMCI = { 47, /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/repmat.m"/* pName */
};

static emlrtMCInfo fb_emlrtMCI = { 403,/* lineNo */
  15,                                  /* colNo */
  "colon",                             /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/colon.m"/* pName */
};

static emlrtMCInfo gb_emlrtMCI = { 12, /* lineNo */
  23,                                  /* colNo */
  "xzgetrs",                           /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzgetrs.m"/* pName */
};

static emlrtMCInfo hb_emlrtMCI = { 47, /* lineNo */
  19,                                  /* colNo */
  "allOrAny",                          /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/allOrAny.m"/* pName */
};

static emlrtMCInfo ib_emlrtMCI = { 14, /* lineNo */
  15,                                  /* colNo */
  "inv",                               /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/inv.m"/* pName */
};

static emlrtMCInfo jb_emlrtMCI = { 102,/* lineNo */
  19,                                  /* colNo */
  "diag",                              /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/diag.m"/* pName */
};

static emlrtMCInfo kb_emlrtMCI = { 26, /* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo lb_emlrtMCI = { 97, /* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo mb_emlrtMCI = { 81, /* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtMCInfo nb_emlrtMCI = { 392,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtMCInfo ob_emlrtMCI = { 99, /* lineNo */
  5,                                   /* colNo */
  "chol",                              /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/chol.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 43,  /* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 33,    /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 33,  /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = { 164,/* lineNo */
  21,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 1160,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtBCInfo b_emlrtBCI = { 0,   /* iFirst */
  3,                                   /* iLast */
  1161,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  165,                                 /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  165,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 0,   /* iFirst */
  3,                                   /* iLast */
  469,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 469, /* lineNo */
  34,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 70,  /* lineNo */
  17,                                  /* colNo */
  "VisualizationInfo",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/VisualizationInfo.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  62,                                  /* iLast */
  70,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "VisualizationInfo",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/VisualizationInfo.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 221, /* lineNo */
  24,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 230, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  230,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 243, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  243,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 244, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  244,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 246, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  246,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 247, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { 1,   /* iFirst */
  4,                                   /* iLast */
  247,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 0,   /* iFirst */
  3,                                   /* iLast */
  221,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { 0,   /* iFirst */
  3,                                   /* iLast */
  226,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 1178,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtBCInfo n_emlrtBCI = { 0,   /* iFirst */
  3,                                   /* iLast */
  1179,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  155,                                 /* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 503,/* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pName */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  509,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 507, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  507,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 507, /* lineNo */
  25,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  507,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 507, /* lineNo */
  35,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  507,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 507, /* lineNo */
  37,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  507,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  507,                                 /* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pName */
};

static emlrtDCInfo o_emlrtDCI = { 508, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  508,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 508, /* lineNo */
  25,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  508,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 508, /* lineNo */
  35,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  508,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 508, /* lineNo */
  42,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  508,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  508,                                 /* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 1,   /* nDims */
  146,                                 /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pName */
};

static emlrtDCInfo s_emlrtDCI = { 498, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 498, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 498, /* lineNo */
  26,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 499, /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { 0,   /* iFirst */
  3,                                   /* iLast */
  504,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 146, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 146, /* lineNo */
  23,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  509,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 509, /* lineNo */
  21,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = { 1996,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtDCInfo ab_emlrtDCI = { 2000,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2000,                                /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 2000,/* lineNo */
  30,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2000,                                /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  2000,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtDCInfo cb_emlrtDCI = { 1994,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 1994,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { 0,  /* iFirst */
  3,                                   /* iLast */
  1997,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 628,/* lineNo */
  34,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 628,/* lineNo */
  34,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  639,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 639,/* lineNo */
  39,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  639,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  635,                                 /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  632,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1786,                                /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1786,                                /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  318,                                 /* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m"/* pName */
};

static emlrtDCInfo hb_emlrtDCI = { 315,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 315,/* lineNo */
  13,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { 0,  /* iFirst */
  3,                                   /* iLast */
  1778,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1782,                                /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { 0,  /* iFirst */
  3,                                   /* iLast */
  1783,                                /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 1783,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  627,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 627,/* lineNo */
  46,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  627,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 318,/* lineNo */
  19,                                  /* colNo */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  318,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "inverseKinematics",                 /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/inverseKinematics.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 635,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  635,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  143,                                 /* lineNo */
  17,                                  /* colNo */
  "NLPSolverInterface",                /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/NLPSolverInterface.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 537,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtBCInfo rb_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  538,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 541,/* lineNo */
  23,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 541,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  541,                                 /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtDCInfo pb_emlrtDCI = { 517,/* lineNo */
  20,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  525,                                 /* lineNo */
  40,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  525,                                 /* lineNo */
  35,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  525,                                 /* lineNo */
  30,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pName */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  527,                                 /* lineNo */
  30,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pName */
};

static emlrtECInfo n_emlrtECI = { -1,  /* nDims */
  529,                                 /* lineNo */
  30,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pName */
};

static emlrtDCInfo qb_emlrtDCI = { 142,/* lineNo */
  17,                                  /* colNo */
  "NLPSolverInterface",                /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/NLPSolverInterface.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 142,/* lineNo */
  17,                                  /* colNo */
  "NLPSolverInterface",                /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/NLPSolverInterface.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  200,                                 /* lineNo */
  29,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pName */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  211,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI = { 220,/* lineNo */
  21,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pName */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo p_emlrtECI = { 2,   /* nDims */
  266,                                 /* lineNo */
  30,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pName */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  270,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { -1,  /* nDims */
  291,                                 /* lineNo */
  32,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pName */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  349,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  358,                                 /* lineNo */
  25,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pName */
};

static emlrtECInfo s_emlrtECI = { 2,   /* nDims */
  371,                                 /* lineNo */
  25,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pName */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  201,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  262,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  263,                                 /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  289,                                 /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  351,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  352,                                 /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "IKHelpers",                         /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/IKHelpers.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo t_emlrtECI = { -1,  /* nDims */
  1682,                                /* lineNo */
  29,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1682,                                /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 1682,/* lineNo */
  43,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1682,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 1682,/* lineNo */
  35,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  1660,                                /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 1660,/* lineNo */
  55,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  1658,                                /* lineNo */
  72,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 1658,/* lineNo */
  72,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  1658,                                /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 1658,/* lineNo */
  64,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  1657,                                /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 1657,/* lineNo */
  51,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1743,                                /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1745,                                /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 1625,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 1625,/* lineNo */
  32,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { 0,  /* iFirst */
  3,                                   /* iLast */
  1615,                                /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { 0,  /* iFirst */
  3,                                   /* iLast */
  1620,                                /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1737,                                /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1737,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1742,                                /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1627,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1632,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { 0,  /* iFirst */
  3,                                   /* iLast */
  1628,                                /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = { 1628,/* lineNo */
  39,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1628,                                /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { 0,  /* iFirst */
  3,                                   /* iLast */
  1633,                                /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = { 1633,/* lineNo */
  36,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1633,                                /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1766,                                /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1766,                                /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1756,                                /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = { 1754,/* lineNo */
  31,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = { 1754,/* lineNo */
  31,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { 0,  /* iFirst */
  3,                                   /* iLast */
  1758,                                /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = { 1758,/* lineNo */
  24,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1763,                                /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1759,                                /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "axang2rotm",                        /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/axang2rotm.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo u_emlrtECI = { -1,  /* nDims */
  47,                                  /* lineNo */
  5,                                   /* colNo */
  "rotm2axang",                        /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/rotm2axang.m"/* pName */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "rotm2axang",                        /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/rotm2axang.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "rotm2axang",                        /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/rotm2axang.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo v_emlrtECI = { -1,  /* nDims */
  419,                                 /* lineNo */
  45,                                  /* colNo */
  "DampedBFGSwGradientProjection",     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/DampedBFGSwGradientProjection.m"/* pName */
};

static emlrtDCInfo gc_emlrtDCI = { 13, /* lineNo */
  24,                                  /* colNo */
  "eml_rand_mt19937ar_stateful",       /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/private/eml_rand_mt19937ar_stateful.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo w_emlrtECI = { -1,  /* nDims */
  1422,                                /* lineNo */
  20,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtECInfo x_emlrtECI = { -1,  /* nDims */
  1423,                                /* lineNo */
  20,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtECInfo y_emlrtECI = { -1,  /* nDims */
  1431,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtECInfo ab_emlrtECI = { -1, /* nDims */
  1434,                                /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pName */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1431,                                /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1434,                                /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTree",                     /* fName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo ql_emlrtRSI = { 269,/* lineNo */
  "xzsvdc",                            /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+reflapack/xzsvdc.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 20, /* lineNo */
  "rdivide_helper",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/rdivide_helper.m"/* pathName */
};

static emlrtRSInfo sl_emlrtRSI = { 13, /* lineNo */
  "sqrt",                              /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

static emlrtRSInfo tl_emlrtRSI = { 15, /* lineNo */
  "validatesize",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatesize.m"/* pathName */
};

static emlrtRSInfo ul_emlrtRSI = { 14, /* lineNo */
  "validatefinite",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatefinite.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 14, /* lineNo */
  "validatenonnan",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatenonnan.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 14, /* lineNo */
  "validatenonnegative",               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatenonnegative.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 28, /* lineNo */
  "error",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/error.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 15, /* lineNo */
  "assertSupportedString",             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/assertSupportedString.m"/* pathName */
};

static emlrtRSInfo am_emlrtRSI = { 13, /* lineNo */
  "validatenonempty",                  /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatenonempty.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 158,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 10, /* lineNo */
  "validatesize",                      /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatesize.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 99, /* lineNo */
  "chol",                              /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/chol.m"/* pathName */
};

static emlrtRSInfo em_emlrtRSI = { 118,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 123,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo gm_emlrtRSI = { 97, /* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo hm_emlrtRSI = { 26, /* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo im_emlrtRSI = { 47, /* lineNo */
  "allOrAny",                          /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/allOrAny.m"/* pathName */
};

static emlrtRSInfo jm_emlrtRSI = { 392,/* lineNo */
  "find",                              /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo km_emlrtRSI = { 102,/* lineNo */
  "diag",                              /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/elmat/diag.m"/* pathName */
};

static emlrtRSInfo lm_emlrtRSI = { 14, /* lineNo */
  "inv",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/matfun/inv.m"/* pathName */
};

static emlrtRSInfo mm_emlrtRSI = { 403,/* lineNo */
  "colon",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/colon.m"/* pathName */
};

static emlrtRSInfo nm_emlrtRSI = { 16, /* lineNo */
  "mldivide",                          /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/ops/mldivide.m"/* pathName */
};

static emlrtRSInfo om_emlrtRSI = { 18, /* lineNo */
  "validatencols",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatencols.m"/* pathName */
};

static emlrtRSInfo pm_emlrtRSI = { 283,/* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo qm_emlrtRSI = { 37, /* lineNo */
  "callEMLRTClockGettime",             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/coder/coder/lib/+coder/+internal/+time/private/callEMLRTClockGettime.m"/* pathName */
};

static emlrtRSInfo rm_emlrtRSI = { 121,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo sm_emlrtRSI = { 21, /* lineNo */
  "error",                             /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/error.m"/* pathName */
};

static emlrtRSInfo tm_emlrtRSI = { 64, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo um_emlrtRSI = { 58, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo vm_emlrtRSI = { 107,/* lineNo */
  "validatestring",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/lang/validatestring.m"/* pathName */
};

static emlrtRSInfo wm_emlrtRSI = { 115,/* lineNo */
  "validatestring",                    /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/lib/matlab/lang/validatestring.m"/* pathName */
};

static emlrtRSInfo xm_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/shared/coder/coder/lib/+coder/+internal/warning.m"/* pathName */
};

static emlrtRSInfo ym_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/eml/eml/+coder/+internal/flt2str.m"/* pathName */
};

static emlrtRSInfo an_emlrtRSI = { 1743,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2020b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp);
static void SystemCore_setup(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp, robotics_slmanip_internal_block_IKBlock
  *obj);
static real_T minimum2(real_T x, real_T y);
static boolean_T b_strcmp(emxArray_char_T *a);
static boolean_T c_strcmp(emxArray_char_T *a);
static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj, real_T maxElements);
static robotics_manip_internal_RigidBody *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static void eye(real_T b_I[9]);
static inverseKinematics *inverseKinematics_inverseKinematics
  (InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance, const emlrtStack *sp,
   inverseKinematics *obj, robotics_manip_internal_RigidBodyTree *varargin_2);
static robotics_manip_internal_RigidBodyTree_1 *RigidBodyTree_RigidBodyTree
  (InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj);
static void b_rand(InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance, const
                   emlrtStack *sp, real_T r[5]);
static boolean_T is_valid_state(uint32_T mt[625]);
static void RigidBodyTree_clearAllBodies(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp, robotics_manip_internal_RigidBodyTree_1
  *obj, robotics_manip_internal_RigidBody_1 *iobj_0);
static robotics_manip_internal_RigidBody_1 *d_RigidBody_RigidBody(const
  emlrtStack *sp, robotics_manip_internal_RigidBody_1 *obj);
static void validateattributes(const emlrtStack *sp, emxArray_char_T *a);
static boolean_T d_strcmp(emxArray_char_T *a, emxArray_char_T *b_b);
static void RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1,
  robotics_manip_internal_RigidBody_1 *iobj_2);
static real_T RigidBodyTree_findBodyIndexByName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static real_T RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname);
static void error(const emlrtStack *sp);
static robotics_manip_internal_RigidBody_1 *RigidBody_copy(const emlrtStack *sp,
  robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet
  *iobj_0, rigidBodyJoint *iobj_1, robotics_manip_internal_RigidBody_1 *iobj_2);
static void b_validateattributes(const emlrtStack *sp, emxArray_char_T *a);
static rigidBodyJoint *rigidBodyJoint_copy(const emlrtStack *sp, rigidBodyJoint *
  obj, rigidBodyJoint *iobj_0);
static void get_match(const emlrtStack *sp, emxArray_char_T *str, char_T
                      match_data[], int32_T match_size[2], real_T *nmatched);
static void assertSupportedString(const emlrtStack *sp, char_T s);
static void warning(const emlrtStack *sp);
static boolean_T e_strcmp(emxArray_char_T *a);
static void inverseKinematics_set_SolverAlgorithm(inverseKinematics *obj,
  robotics_core_internal_DampedBFGSwGradientProjection *iobj_0);
static void mw__internal__call__reset(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp, real_T b_u0[16], real_T b_u1[6], real_T
  b_u2[3], real_T c_y0[3], real_T *y1_Iterations, real_T *y1_PoseErrorNorm,
  uint16_T *y1_ExitFlag, uint8_T *y1_Status);
static void b_eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *b_I);
static void RigidBodyTree_get_JointPositionLimits(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_real_T *limits);
static void inverseKinematics_stepImpl(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T tform[16],
  real_T weights[6], real_T initialGuess[3], real_T QSol[3], real_T
  *solutionInfo_Iterations, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2]);
static boolean_T f_strcmp(emxArray_char_T *a);
static void inv(const emlrtStack *sp, real_T x[9], real_T y[9]);
static real_T b_norm(real_T x[9]);
static void b_warning(const emlrtStack *sp);
static void c_warning(const emlrtStack *sp, char_T varargin_1[14]);
static void d_warning(const emlrtStack *sp);
static void c_validateattributes(const emlrtStack *sp, real_T a[6]);
static void inverseKinematics_solve(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T
  initialGuess[3], real_T QSol[3], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_NumRandomRestarts, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2]);
static void eml_find(const emlrtStack *sp, boolean_T x[3], int32_T i_data[],
                     int32_T i_size[1]);
static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2]);
static void e_warning(const emlrtStack *sp);
static void NLPSolverInterface_solve(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T seed[3],
  real_T xSol[3], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_RRAttempts, real_T *solutionInfo_Error, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2]);
static void SystemTimeProvider_reset(const emlrtStack *sp,
  robotics_core_internal_SystemTimeProvider *obj);
static void tic(const emlrtStack *sp, real_T *tstart_tv_sec, real_T
                *tstart_tv_nsec);
static emlrtTimespec getTime(const emlrtStack *sp);
static void DampedBFGSwGradientProjection_solveInternal(const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T xSol[3],
  b_robotics_core_internal_NLPSolverExitFlags *exitFlag, real_T *err, real_T
  *iter);
static void IKHelpers_computeCost(const emlrtStack *sp, real_T x[3],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args);
static void RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[3], emxArray_char_T
  *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac);
static void RigidBodyTree_ancestorIndices(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody_1 *body, emxArray_real_T *indices);
static void rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T T[16]);
static void normalizeRows(const emlrtStack *sp, real_T matrix[3], real_T
  normRowMatrix[3]);
static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void permute(real_T a[9], real_T b_b[9]);
static void b_rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T q_data[], int32_T q_size[1], real_T T[16]);
static void mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C);
static void rotm2axang(const emlrtStack *sp, real_T R[9], real_T axang[4]);
static void xzsvdc(const emlrtStack *sp, real_T A[9], real_T U[9], real_T b_S[3],
                   real_T V[9]);
static real_T xnrm2(int32_T n, real_T x[9], int32_T ix0);
static real_T xdotc(int32_T n, real_T x[9], int32_T ix0, real_T y[9], int32_T
                    iy0);
static real_T b_xnrm2(real_T x[3], int32_T ix0);
static void dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static void b_mtimes(emxArray_real_T *A, real_T B[3], emxArray_real_T *C);
static void b_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static void c_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB);
static void d_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB);
static void c_mtimes(real_T A[9], emxArray_real_T *B, emxArray_real_T *C);
static void e_dynamic_size_checks(const emlrtStack *sp, int32_T innerDimA);
static real_T SystemTimeProvider_getElapsedTime(const emlrtStack *sp,
  robotics_core_internal_SystemTimeProvider *obj);
static real_T toc(const emlrtStack *sp, real_T tstart_tv_sec, real_T
                  tstart_tv_nsec);
static real_T IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args);
static void f_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  emxArray_real_T *b_b, int32_T innerDimA, int32_T innerDimB);
static void d_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C);
static void mldivide(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T
                     *B, emxArray_real_T *Y);
static void repmat(ptrdiff_t a, int32_T varargin_1, emxArray_ptrdiff_t *b_b);
static void assert_pmaxsize(const emlrtStack *sp, boolean_T p);
static void f_warning(const emlrtStack *sp, int32_T varargin_1, char_T
                      varargin_2[14]);
static void g_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  emxArray_real_T *b_b, int32_T innerDimA, int32_T innerDimB);
static void e_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C);
static void h_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB);
static boolean_T DampedBFGSwGradientProjection_atLocalMinimum(const emlrtStack
  *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T Hg[3],
  emxArray_real_T *alpha);
static real_T c_norm(real_T x[3]);
static boolean_T all(const emlrtStack *sp, emxArray_boolean_T *x);
static void b_inv(const emlrtStack *sp, emxArray_real_T *x, emxArray_real_T *y);
static real_T d_norm(emxArray_real_T *x);
static void diag(const emlrtStack *sp, emxArray_real_T *v, emxArray_real_T *d);
static void maximum(const emlrtStack *sp, emxArray_real_T *x, real_T *ex,
                    int32_T *idx);
static void b_eml_find(const emlrtStack *sp, emxArray_boolean_T *x,
  emxArray_int32_T *i);
static void f_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C);
static boolean_T any(const emlrtStack *sp, emxArray_boolean_T *x);
static void minimum(const emlrtStack *sp, emxArray_real_T *x, real_T *ex,
                    int32_T *idx);
static void i_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static void j_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static void g_mtimes(emxArray_real_T *A, real_T B[9], emxArray_real_T *C);
static void k_dynamic_size_checks(const emlrtStack *sp, int32_T innerDimB);
static void l_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB);
static void m_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA);
static boolean_T isPositiveDefinite(const emlrtStack *sp, real_T B[9]);
static boolean_T DampedBFGSwGradientProjection_searchDirectionInvalid(const
  emlrtStack *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj,
  real_T xNew[3]);
static void c_rand(InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance, const
                   emlrtStack *sp, real_T varargin_1, emxArray_real_T *r);
static void randn(InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance, const
                  emlrtStack *sp, real_T varargin_1[2], emxArray_real_T *r);
static void g_warning(const emlrtStack *sp);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T b_u
  [30]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14]);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T
  b_u[15]);
static const mxArray *message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *c,
  emlrtMCInfo *location);
static void b_error(const emlrtStack *sp, const mxArray *c, const mxArray *d,
                    emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *c,
  emlrtMCInfo *location);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);
static void b_feval(const emlrtStack *sp, const mxArray *c, const mxArray *d,
                    emlrtMCInfo *location);
static const mxArray *d_message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, emlrtMCInfo *location);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, emlrtMCInfo *location);
static const mxArray *d_feval(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *location);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);
static void b_sqrt(const emlrtStack *sp, real_T *x);
static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625]);
static void genrand_uint32_vector(uint32_T mt[625], uint32_T b_u[2]);
static void RigidBodyTree_validateConfigurationWithLimits(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T Q[3]);
static void c_sqrt(creal_T *x);
static real_T rescale(real_T *re, real_T *im);
static void xscal(int32_T n, real_T a, real_T x[9], int32_T ix0);
static void xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0);
static void b_xscal(real_T a, real_T x[3], int32_T ix0);
static void b_xaxpy(int32_T n, real_T a, real_T x[9], int32_T ix0, real_T y[3],
                    int32_T iy0);
static void c_xaxpy(int32_T n, real_T a, real_T x[3], int32_T ix0, real_T y[9],
                    int32_T iy0);
static void c_xscal(real_T a, real_T x[9], int32_T ix0);
static void xrotg(real_T *a, real_T *b_b, real_T *c, real_T *s);
static void xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s);
static void xswap(real_T x[9], int32_T ix0, int32_T iy0);
static void d_sqrt(const emlrtStack *sp, emxArray_real_T *x);
static real_T b_eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625]);
static real_T genrandu(const emlrtStack *sp, uint32_T mt[625]);
static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct);
static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct);
static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T b_numDimensions);
static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T b_numDimensions);
static void emxInit_real_T1(emxArray_real_T **pEmxArray, int32_T b_numDimensions);
static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct);
static void emxInit_unnamed_struct(emxArray_unnamed_struct **pEmxArray, int32_T
  b_numDimensions);
static void emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[4]);
static void emxInitStruct_inverseKinematics(inverseKinematics *pStruct);
static void d_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct);
static void e_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct);
static void f_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 *pStruct);
static void b_emxInitMatrix_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 pMatrix[4]);
static void c_emxInitMatrix_robotics_manip_in
  (robotics_manip_internal_CollisionSet pMatrix[5]);
static void emxInitMatrix_rigidBodyJoint(rigidBodyJoint pMatrix[4]);
static void emxInitStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct);
static void emxFree_char_T(emxArray_char_T **pEmxArray);
static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct);
static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void emxFree_unnamed_struct(emxArray_unnamed_struct **pEmxArray);
static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct);
static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[4]);
static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct);
static void emxFreeStruct_inverseKinematics(inverseKinematics *pStruct);
static void d_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct);
static void e_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 *pStruct);
static void f_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct);
static void b_emxFreeMatrix_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 pMatrix[4]);
static void c_emxFreeMatrix_robotics_manip_in
  (robotics_manip_internal_CollisionSet pMatrix[5]);
static void emxFreeMatrix_rigidBodyJoint(rigidBodyJoint pMatrix[4]);
static void emxFreeStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct);
static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int32_T
  oldNumel);
static void emxEnsureCapacity_unnamed_struc(emxArray_unnamed_struct *emxArray,
  int32_T oldNumel);
static void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int32_T
  oldNumel);
static void emxEnsureCapacity_int32_T1(emxArray_int32_T *emxArray, int32_T
  oldNumel);
static void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions);
static void emxInit_int32_T1(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions);
static void emxFree_int32_T(emxArray_int32_T **pEmxArray);
static void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int32_T
  oldNumel);
static void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T
  b_numDimensions);
static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
static void emxEnsureCapacity_ptrdiff_t(emxArray_ptrdiff_t *emxArray, int32_T
  oldNumel);
static void emxInit_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray, int32_T
  b_numDimensions);
static void emxFree_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray);
static int32_T div_nzp_s32(int32_T numerator, int32_T denominator);
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static void init_simulink_io_address(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetSimStateCompliance(moduleInstance->S, 4);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2012b(&st, "robotics_system_toolbox", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T y_tmp0[3];
  real_T y_tmp1_Iterations;
  real_T y_tmp1_PoseErrorNorm;
  int32_T i;
  uint16_T y_tmp1_ExitFlag;
  uint8_T y_tmp1_Status;
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, *moduleInstance->u0,
    *moduleInstance->u1, *moduleInstance->u2, y_tmp0, &y_tmp1_Iterations,
    &y_tmp1_PoseErrorNorm, &y_tmp1_ExitFlag, &y_tmp1_Status);
  for (i = 0; i < 3; i++) {
    (*moduleInstance->b_y0)[i] = y_tmp0[i];
  }

  *(real_T *)&((char_T *)moduleInstance->b_y1)[0] = y_tmp1_Iterations;
  *(real_T *)&((char_T *)moduleInstance->b_y1)[8] = y_tmp1_PoseErrorNorm;
  *(uint16_T *)&((char_T *)moduleInstance->b_y1)[16] = y_tmp1_ExitFlag;
  *(uint8_T *)&((char_T *)moduleInstance->b_y1)[18] = y_tmp1_Status;
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance)
{
  int32_T i;
  uint32_T r;
  emxInitStruct_robotics_slmanip_(&moduleInstance->sysobj);
  moduleInstance->sysobj.IKInternal.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.matlabCodegenIsDeleted = true;
  moduleInstance->method = 7U;
  moduleInstance->method_not_empty = true;
  moduleInstance->state = 1144108930U;
  moduleInstance->state_not_empty = true;
  for (i = 0; i < 2; i++) {
    moduleInstance->b_state[i] = 158852560U * (uint32_T)i + 362436069U;
  }

  moduleInstance->b_state_not_empty = true;
  for (i = 0; i < 625; i++) {
    moduleInstance->c_state[i] = 0U;
  }

  r = 5489U;
  moduleInstance->c_state[0] = 5489U;
  for (i = 0; i < 623; i++) {
    r = ((r ^ r >> 30U) * 1812433253U + (uint32_T)i) + 1U;
    moduleInstance->c_state[i + 1] = r;
  }

  moduleInstance->c_state[624] = 624U;
  moduleInstance->c_state_not_empty = true;
  moduleInstance->b_method = 0U;
  moduleInstance->b_method_not_empty = true;
  for (i = 0; i < 2; i++) {
    moduleInstance->d_state[i] = (uint32_T)(-362436069 * i) + 362436069U;
  }

  moduleInstance->d_state[1] = 521288629U;
  moduleInstance->d_state_not_empty = true;
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  inverseKinematics *obj;
  st.site = NULL;
  if (!moduleInstance->sysobj.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  obj = &moduleInstance->sysobj.IKInternal;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    b_st.site = &pl_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
      d_st.site = &d_emlrtRSI;
    }
  }

  emxFreeStruct_robotics_slmanip_(&moduleInstance->sysobj);
}

static void mw__internal__call__setup(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  robotics_slmanip_internal_block_IKBlock *obj;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    d_st.site = &d_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &e_emlrtRSI;
    obj->matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &g_emlrtRSI;
  SystemCore_setup(moduleInstance, &st, &moduleInstance->sysobj);
}

static void SystemCore_setup(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp, robotics_slmanip_internal_block_IKBlock
  *obj)
{
  static real_T dv1[36] = { 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, -0.0, 0.0, 0.0, 0.302, -0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0,
    -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0 };

  static real_T dv2[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.6731, 1.0 };

  static real_T dv[9] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.302 };

  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T b_jname[10] = { 'L', 'i', 'n', 'k', '_', '0', '_', 'j', 'n', 't'
  };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[7] = { 'J', 'o', 'i', 'n', 't', '_', '1' };

  static char_T bname[6] = { 'L', 'i', 'n', 'k', '_', '0' };

  static char_T cv[6] = { 'L', 'i', 'n', 'k', '_', '1' };

  static char_T cv2[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T e_u[5] = { 's', 'e', 't', 'u', 'p' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv4[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv5[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv6[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  robotics_manip_internal_RigidBodyTree *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  char_T b_u[51];
  char_T d_u[5];
  int8_T msubspace_data[36];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &d_emlrtRSI;
    b_error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
            &emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &d_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  b_obj = &obj->TreeInternal;
  c_st.site = &k_emlrtRSI;
  d_st.site = &j_emlrtRSI;
  c_st.site = &l_emlrtRSI;
  d_st.site = &o_emlrtRSI;
  e_st.site = &j_emlrtRSI;
  i = obj->TreeInternal._pobj0[0].NameInternal->size[0] *
    obj->TreeInternal._pobj0[0].NameInternal->size[1];
  obj->TreeInternal._pobj0[0].NameInternal->size[0] = 1;
  obj->TreeInternal._pobj0[0].NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj0[0].NameInternal, i);
  for (i = 0; i < 6; i++) {
    obj->TreeInternal._pobj0[0].NameInternal->data[i] = cv[i];
  }

  obj->TreeInternal._pobj0[0].ParentIndex = 0.0;
  obj->TreeInternal._pobj0[0].MassInternal = 0.0;
  for (i = 0; i < 3; i++) {
    obj->TreeInternal._pobj0[0].CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    obj->TreeInternal._pobj0[0].InertiaInternal[i] = dv[i];
  }

  for (i = 0; i < 36; i++) {
    obj->TreeInternal._pobj0[0].SpatialInertia[i] = dv1[i];
  }

  d_st.site = &p_emlrtRSI;
  obj->TreeInternal._pobj0[0].JointInternal.InTree = false;
  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj0[0].JointInternal.JointToParentTransform[i] =
      (real_T)iv3[i];
  }

  for (i = 0; i < 16; i++) {
    obj->TreeInternal._pobj0[0].JointInternal.ChildToJointTransform[i] = (real_T)
      iv3[i];
  }

  e_st.site = &r_emlrtRSI;
  i = obj->TreeInternal._pobj0[0].JointInternal.NameInternal->size[0] *
    obj->TreeInternal._pobj0[0].JointInternal.NameInternal->size[1];
  obj->TreeInternal._pobj0[0].JointInternal.NameInternal->size[0] = 1;
  obj->TreeInternal._pobj0[0].JointInternal.NameInternal->size[1] = 7;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj0[0].
    JointInternal.NameInternal, i);
  for (i = 0; i < 7; i++) {
    obj->TreeInternal._pobj0[0].JointInternal.NameInternal->data[i] = jname[i];
  }

  i = obj->TreeInternal._pobj0[0].JointInternal.Type->size[0] *
    obj->TreeInternal._pobj0[0].JointInternal.Type->size[1];
  obj->TreeInternal._pobj0[0].JointInternal.Type->size[0] = 1;
  obj->TreeInternal._pobj0[0].JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(obj->TreeInternal._pobj0[0].JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    obj->TreeInternal._pobj0[0].JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->TreeInternal._pobj0[0]
    .JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = obj->TreeInternal._pobj0[0].JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = obj->TreeInternal._pobj0[0].
      JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv4[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    obj->TreeInternal._pobj0[0].JointInternal.VelocityNumber = 1.0;
    obj->TreeInternal._pobj0[0].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj0[0].JointInternal.JointAxisInternal[i] = (real_T)
        iv6[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv5[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i + -0.5;
    }

    obj->TreeInternal._pobj0[0].JointInternal.VelocityNumber = 1.0;
    obj->TreeInternal._pobj0[0].JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj0[0].JointInternal.JointAxisInternal[i] = (real_T)
        iv6[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    obj->TreeInternal._pobj0[0].JointInternal.VelocityNumber = 0.0;
    obj->TreeInternal._pobj0[0].JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal._pobj0[0].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = obj->TreeInternal._pobj0[0].JointInternal.MotionSubspace->size[0] *
    obj->TreeInternal._pobj0[0].JointInternal.MotionSubspace->size[1];
  obj->TreeInternal._pobj0[0].JointInternal.MotionSubspace->size[0] = 6;
  obj->TreeInternal._pobj0[0].JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(obj->TreeInternal._pobj0[0].
    JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    obj->TreeInternal._pobj0[0].JointInternal.MotionSubspace->data[i] = (real_T)
      msubspace_data[i];
  }

  i = obj->TreeInternal._pobj0[0].JointInternal.PositionLimitsInternal->size[0] *
    obj->TreeInternal._pobj0[0].JointInternal.PositionLimitsInternal->size[1];
  obj->TreeInternal._pobj0[0].JointInternal.PositionLimitsInternal->size[0] = 1;
  obj->TreeInternal._pobj0[0].JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(obj->TreeInternal._pobj0[0].
    JointInternal.PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    obj->TreeInternal._pobj0[0].JointInternal.PositionLimitsInternal->data[i] =
      poslim_data[i];
  }

  i = obj->TreeInternal._pobj0[0].JointInternal.HomePositionInternal->size[0];
  obj->TreeInternal._pobj0[0].JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(obj->TreeInternal._pobj0[0].
    JointInternal.HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    obj->TreeInternal._pobj0[0].JointInternal.HomePositionInternal->data[0] =
      0.0;
  }

  for (i = 0; i < 16; i++) {
    b_obj->_pobj0[0].JointInternal.JointToParentTransform[i] = dv2[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->_pobj0[0].JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->_pobj0[0].JointInternal.MotionSubspace->size[0] * b_obj->_pobj0[0].
    JointInternal.MotionSubspace->size[1];
  b_obj->_pobj0[0].JointInternal.MotionSubspace->size[0] = 6;
  b_obj->_pobj0[0].JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->_pobj0[0].JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->_pobj0[0].JointInternal.MotionSubspace->data[i] = (real_T)iv4[i];
  }

  b_obj->_pobj0[0].JointInternal.InTree = true;
  i = b_obj->_pobj0[0].JointInternal.PositionLimitsInternal->size[0] *
    b_obj->_pobj0[0].JointInternal.PositionLimitsInternal->size[1];
  b_obj->_pobj0[0].JointInternal.PositionLimitsInternal->size[0] = 1;
  b_obj->_pobj0[0].JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->_pobj0[0].JointInternal.PositionLimitsInternal,
    i);
  for (i = 0; i < 2; i++) {
    b_obj->_pobj0[0].JointInternal.PositionLimitsInternal->data[i] =
      25.93411945678 * (real_T)i + -12.96705972839;
  }

  for (i = 0; i < 3; i++) {
    b_obj->_pobj0[0].JointInternal.JointAxisInternal[i] = (real_T)iv6[i];
  }

  i = b_obj->_pobj0[0].JointInternal.HomePositionInternal->size[0];
  b_obj->_pobj0[0].JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->_pobj0[0].JointInternal.HomePositionInternal,
    i);
  b_obj->_pobj0[0].JointInternal.HomePositionInternal->data[0] = 0.0;
  d_st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&d_st, &b_obj->_pobj0[0].CollisionsInternal, 0.0);
  obj->TreeInternal.Bodies[0] = &b_obj->_pobj0[0];
  obj->TreeInternal.Bodies[0]->Index = 1.0;
  c_st.site = &l_emlrtRSI;
  obj->TreeInternal.Bodies[1] = RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj0[1]);
  obj->TreeInternal.Bodies[1]->Index = 2.0;
  c_st.site = &l_emlrtRSI;
  obj->TreeInternal.Bodies[2] = b_RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj0[2]);
  obj->TreeInternal.Bodies[2]->Index = 3.0;
  c_st.site = &l_emlrtRSI;
  obj->TreeInternal.Bodies[3] = c_RigidBody_RigidBody(&c_st,
    &obj->TreeInternal._pobj0[3]);
  obj->TreeInternal.Bodies[3]->Index = 4.0;
  obj->TreeInternal.NumBodies = 4.0;
  c_st.site = &m_emlrtRSI;
  for (i = 0; i < 3; i++) {
    obj->TreeInternal.Gravity[i] = 0.0;
  }

  c_st.site = &n_emlrtRSI;
  d_st.site = &o_emlrtRSI;
  e_st.site = &j_emlrtRSI;
  i = b_obj->Base.NameInternal->size[0] * b_obj->Base.NameInternal->size[1];
  b_obj->Base.NameInternal->size[0] = 1;
  b_obj->Base.NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(b_obj->Base.NameInternal, i);
  for (i = 0; i < 6; i++) {
    b_obj->Base.NameInternal->data[i] = bname[i];
  }

  d_st.site = &db_emlrtRSI;
  obj->TreeInternal.Base.JointInternal.InTree = false;
  for (i = 0; i < 16; i++) {
    obj->TreeInternal.Base.JointInternal.JointToParentTransform[i] = (real_T)
      iv3[i];
  }

  for (i = 0; i < 16; i++) {
    obj->TreeInternal.Base.JointInternal.ChildToJointTransform[i] = (real_T)
      iv3[i];
  }

  e_st.site = &r_emlrtRSI;
  i = obj->TreeInternal.Base.JointInternal.NameInternal->size[0] *
    obj->TreeInternal.Base.JointInternal.NameInternal->size[1];
  obj->TreeInternal.Base.JointInternal.NameInternal->size[0] = 1;
  obj->TreeInternal.Base.JointInternal.NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(obj->TreeInternal.Base.JointInternal.NameInternal, i);
  for (i = 0; i < 10; i++) {
    obj->TreeInternal.Base.JointInternal.NameInternal->data[i] = b_jname[i];
  }

  i = obj->TreeInternal.Base.JointInternal.Type->size[0] *
    obj->TreeInternal.Base.JointInternal.Type->size[1];
  obj->TreeInternal.Base.JointInternal.Type->size[0] = 1;
  obj->TreeInternal.Base.JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(obj->TreeInternal.Base.JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    obj->TreeInternal.Base.JointInternal.Type->data[i] = cv2[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->TreeInternal.Base.JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = obj->TreeInternal.Base.JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = obj->TreeInternal.Base.JointInternal.Type->
      data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv4[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    obj->TreeInternal.Base.JointInternal.VelocityNumber = 1.0;
    obj->TreeInternal.Base.JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal.Base.JointInternal.JointAxisInternal[i] = (real_T)iv6[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv5[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i + -0.5;
    }

    obj->TreeInternal.Base.JointInternal.VelocityNumber = 1.0;
    obj->TreeInternal.Base.JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal.Base.JointInternal.JointAxisInternal[i] = (real_T)iv6[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    obj->TreeInternal.Base.JointInternal.VelocityNumber = 0.0;
    obj->TreeInternal.Base.JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      obj->TreeInternal.Base.JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = obj->TreeInternal.Base.JointInternal.MotionSubspace->size[0] *
    obj->TreeInternal.Base.JointInternal.MotionSubspace->size[1];
  obj->TreeInternal.Base.JointInternal.MotionSubspace->size[0] = 6;
  obj->TreeInternal.Base.JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(obj->TreeInternal.Base.JointInternal.MotionSubspace,
    i);
  for (i = 0; i < 6; i++) {
    obj->TreeInternal.Base.JointInternal.MotionSubspace->data[i] = (real_T)
      msubspace_data[i];
  }

  i = obj->TreeInternal.Base.JointInternal.PositionLimitsInternal->size[0] *
    obj->TreeInternal.Base.JointInternal.PositionLimitsInternal->size[1];
  obj->TreeInternal.Base.JointInternal.PositionLimitsInternal->size[0] = 1;
  obj->TreeInternal.Base.JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T
    (obj->TreeInternal.Base.JointInternal.PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    obj->TreeInternal.Base.JointInternal.PositionLimitsInternal->data[i] =
      poslim_data[i];
  }

  i = obj->TreeInternal.Base.JointInternal.HomePositionInternal->size[0];
  obj->TreeInternal.Base.JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1
    (obj->TreeInternal.Base.JointInternal.HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    obj->TreeInternal.Base.JointInternal.HomePositionInternal->data[0] = 0.0;
  }

  b_obj->Base.Index = -1.0;
  b_obj->Base.ParentIndex = -1.0;
  b_obj->Base.MassInternal = 1.0;
  for (i = 0; i < 3; i++) {
    b_obj->Base.CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 3; loop_ub++) {
    b_I[loop_ub + 3 * loop_ub] = 1;
  }

  for (i = 0; i < 9; i++) {
    b_obj->Base.InertiaInternal[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->Base.SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  d_st.site = &eb_emlrtRSI;
  CollisionSet_CollisionSet(&d_st, &b_obj->Base.CollisionsInternal, 0.0);
  b_st.site = &i_emlrtRSI;
  inverseKinematics_inverseKinematics(moduleInstance, &b_st, &obj->IKInternal,
    &obj->TreeInternal);
}

static real_T minimum2(real_T x, real_T y)
{
  return muDoubleScalarMin(x, y);
}

static boolean_T b_strcmp(emxArray_char_T *a)
{
  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] == 8) {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static boolean_T c_strcmp(emxArray_char_T *a)
{
  static char_T cv[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] == 9) {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 9) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj, real_T maxElements)
{
  b_robotics_manip_internal_CollisionGeometry *c_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_unnamed_struct *r;
  robotics_manip_internal_CollisionSet *b_obj;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  emxInit_unnamed_struct(&r, 2);
  b_obj = obj;
  b_obj->Size = 0.0;
  st.site = &s_emlrtRSI;
  b_obj->MaxElements = maxElements;
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  d = emlrtNonNegativeCheckR2012b(b_obj->MaxElements, &b_emlrtDCI, sp);
  r->size[1] = (int32_T)emlrtIntegerCheckR2012b(d, &emlrtDCI, sp);
  emxEnsureCapacity_unnamed_struc(r, i);
  i = b_obj->CollisionGeometries->size[0] * b_obj->CollisionGeometries->size[1];
  b_obj->CollisionGeometries->size[0] = r->size[0];
  b_obj->CollisionGeometries->size[1] = r->size[1];
  emxEnsureCapacity_unnamed_struc(b_obj->CollisionGeometries, i);
  st.site = &t_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  c_st.site = &y_emlrtRSI;
  d_st.site = &ab_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  collisioncodegen_makeBox(0.0, 0.0, 0.0);
  st.site = &u_emlrtRSI;
  c_obj = &b_obj->_pobj0;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d = b_obj->MaxElements;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &emlrtRTEI, sp);
  emxFree_unnamed_struct(&r);
  for (b_i = 0; b_i <= i; b_i++) {
    st.site = &v_emlrtRSI;
    i1 = b_obj->CollisionGeometries->size[1] - 1;
    b_obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
      &emlrtBCI, sp)] = c_obj;
  }

  return b_obj;
}

static robotics_manip_internal_RigidBody *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv2[36] = { 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.72130176, 0.0,
    0.0, 0.0, -3.33936, 0.0, 0.0, 0.72130176, -0.0, 3.33936, 0.0, 0.0, 0.0, -0.0,
    15.46, 0.0, 0.0, -0.0, 0.0, 3.33936, 0.0, 15.46, 0.0, 0.0, -3.33936, 0.0,
    0.0, 0.0, 15.46 };

  static real_T dv3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, -3.6732051033465739E-6,
    -0.99999999999325373, 0.0, -0.0, 0.99999999999325373, -3.6732051033465739E-6,
    0.0, 0.0, 0.0, 0.0, 1.0 };

  static real_T dv1[9] = { 0.0, 0.0, 0.0, 0.0, 0.72130176, 0.0, 0.0, 0.0,
    0.72130176 };

  static real_T dv[3] = { 0.216, 0.0, 0.0 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[7] = { 'J', 'o', 'i', 'n', 't', '_', '2' };

  static char_T cv[6] = { 'L', 'i', 'n', 'k', '_', '2' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 6; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 1.0;
  b_obj->MassInternal = 15.46;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &p_emlrtRSI;
  b_obj->JointInternal.InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.NameInternal->size[0] *
    b_obj->JointInternal.NameInternal->size[1];
  b_obj->JointInternal.NameInternal->size[0] = 1;
  b_obj->JointInternal.NameInternal->size[1] = 7;
  emxEnsureCapacity_char_T(b_obj->JointInternal.NameInternal, i);
  for (i = 0; i < 7; i++) {
    b_obj->JointInternal.NameInternal->data[i] = jname[i];
  }

  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i + -0.5;
    }

    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = b_obj->JointInternal.PositionLimitsInternal->size[0] *
    b_obj->JointInternal.PositionLimitsInternal->size[1];
  b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal.PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal.PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = b_obj->JointInternal.HomePositionInternal->size[0];
  b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal.HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv1[i];
  }

  b_obj->JointInternal.InTree = true;
  i = b_obj->JointInternal.PositionLimitsInternal->size[0] *
    b_obj->JointInternal.PositionLimitsInternal->size[1];
  b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal.PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal.PositionLimitsInternal->data[i] = 5.93411945678 *
      (real_T)i + -2.96705972839;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.HomePositionInternal->size[0];
  b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal.HomePositionInternal, i);
  b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal, 0.0);
  return b_obj;
}

static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv2[36] = { 1.7987998, 0.0, 0.0, 0.0, -0.0, -4.1447, 0.0, 0.0,
    0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 1.7987998, 4.1447, 0.0, 0.0, 0.0, 0.0, 4.1447,
    9.55, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 9.55, 0.0, -4.1447, -0.0, 0.0, 0.0, 0.0,
    9.55 };

  static real_T dv3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.432, 0.0, 0.0, 1.0 };

  static real_T dv1[9] = { 1.7987998, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.7987998 };

  static real_T dv[3] = { 0.0, -0.434, 0.0 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T jname[7] = { 'J', 'o', 'i', 'n', 't', '_', '3' };

  static char_T cv[6] = { 'L', 'i', 'n', 'k', '_', '3' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 6;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 6; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 2.0;
  b_obj->MassInternal = 9.55;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = dv[i];
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = dv1[i];
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv2[i];
  }

  st.site = &p_emlrtRSI;
  b_obj->JointInternal.InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.NameInternal->size[0] *
    b_obj->JointInternal.NameInternal->size[1];
  b_obj->JointInternal.NameInternal->size[0] = 1;
  b_obj->JointInternal.NameInternal->size[1] = 7;
  emxEnsureCapacity_char_T(b_obj->JointInternal.NameInternal, i);
  for (i = 0; i < 7; i++) {
    b_obj->JointInternal.NameInternal->data[i] = jname[i];
  }

  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i + -0.5;
    }

    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = b_obj->JointInternal.PositionLimitsInternal->size[0] *
    b_obj->JointInternal.PositionLimitsInternal->size[1];
  b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal.PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal.PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = b_obj->JointInternal.HomePositionInternal->size[0];
  b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal.HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv1[i];
  }

  b_obj->JointInternal.InTree = true;
  i = b_obj->JointInternal.PositionLimitsInternal->size[0] *
    b_obj->JointInternal.PositionLimitsInternal->size[1];
  b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal.PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal.PositionLimitsInternal->data[i] = 5.93411945678 *
      (real_T)i + -2.96705972839;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.HomePositionInternal->size[0];
  b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal.HomePositionInternal, i);
  b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal, 0.0);
  return b_obj;
}

static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, -3.6732051033465739E-6,
    0.99999999999325373, 0.0, 0.0, -0.99999999999325373, -3.6732051033465739E-6,
    0.0, 0.0, -0.434, 0.0, 1.0 };

  static char_T jname[8] = { 'J', 'o', 'i', 'n', 't', '_', 'E', 'E' };

  static char_T cv[7] = { 'L', 'i', 'n', 'k', '_', 'E', 'E' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 7;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 7; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 3.0;
  b_obj->MassInternal = 0.0;
  for (i = 0; i < 3; i++) {
    b_obj->CenterOfMassInternal[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    b_obj->InertiaInternal[i] = 0.0;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = 0.0;
  }

  st.site = &p_emlrtRSI;
  b_obj->JointInternal.InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &r_emlrtRSI;
  i = b_obj->JointInternal.NameInternal->size[0] *
    b_obj->JointInternal.NameInternal->size[1];
  b_obj->JointInternal.NameInternal->size[0] = 1;
  b_obj->JointInternal.NameInternal->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.NameInternal, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.NameInternal->data[i] = jname[i];
  }

  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i + -0.5;
    }

    b_obj->JointInternal.VelocityNumber = 1.0;
    b_obj->JointInternal.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    b_obj->JointInternal.VelocityNumber = 0.0;
    b_obj->JointInternal.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = b_obj->JointInternal.PositionLimitsInternal->size[0] *
    b_obj->JointInternal.PositionLimitsInternal->size[1];
  b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal.PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal.PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = b_obj->JointInternal.HomePositionInternal->size[0];
  b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal.HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = 0.0;
  }

  b_obj->JointInternal.InTree = true;
  i = b_obj->JointInternal.PositionLimitsInternal->size[0] *
    b_obj->JointInternal.PositionLimitsInternal->size[1];
  b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->JointInternal.PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->JointInternal.PositionLimitsInternal->data[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = 0.0;
  }

  i = b_obj->JointInternal.HomePositionInternal->size[0];
  b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->JointInternal.HomePositionInternal, i);
  b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal, 0.0);
  return b_obj;
}

static void eye(real_T b_I[9])
{
  int32_T k;
  for (k = 0; k < 9; k++) {
    b_I[k] = 0.0;
  }

  for (k = 0; k < 3; k++) {
    b_I[k + 3 * k] = 1.0;
  }
}

static inverseKinematics *inverseKinematics_inverseKinematics
  (InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance, const emlrtStack *sp,
   inverseKinematics *obj, robotics_manip_internal_RigidBodyTree *varargin_2)
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv10[2] = { 1, 46 };

  static const int32_T iv11[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 8 };

  static const int32_T iv3[2] = { 1, 51 };

  static const int32_T iv4[2] = { 1, 51 };

  static const int32_T iv6[2] = { 1, 35 };

  static const int32_T iv7[2] = { 1, 46 };

  static const int32_T iv8[2] = { 1, 35 };

  static const int32_T iv9[2] = { 1, 7 };

  static char_T i_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'a', 's', 'e', 'N', 'a',
    'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T m_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T q_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c_u[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T k_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T n_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'T', 'r', 'e', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T g_u[8] = { 'b', 'a', 's', 'e', 'N', 'a', 'm', 'e' };

  static char_T p_u[7] = { 'G', 'r', 'a', 'v', 'i', 't', 'y' };

  b_robotics_manip_internal_CollisionGeometry *f_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_char_T *b_basename;
  emxArray_char_T *bname;
  inverseKinematics *b_obj;
  inverseKinematics *c_obj;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *y;
  rigidBodyJoint *iobj_2;
  robotics_core_internal_DampedBFGSwGradientProjection *g_obj;
  robotics_manip_internal_CollisionSet *b_iobj_1;
  robotics_manip_internal_CollisionSet *d_obj;
  robotics_manip_internal_CollisionSet *iobj_1;
  robotics_manip_internal_CollisionSet *newObj;
  robotics_manip_internal_RigidBody *body;
  robotics_manip_internal_RigidBody *parent;
  robotics_manip_internal_RigidBodyTree_1 *iobj_0;
  robotics_manip_internal_RigidBodyTree_1 *newrobot;
  robotics_manip_internal_RigidBody_1 *e_obj;
  real_T g[3];
  real_T pid;
  int32_T iv5[2];
  int32_T b_i;
  int32_T bid;
  int32_T i;
  int32_T loop_ub;
  char_T h_u[51];
  char_T d_u[48];
  char_T l_u[46];
  char_T b_u[37];
  char_T j_u[35];
  char_T f_u[8];
  char_T o_u[7];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emxInit_char_T(&b_basename, 2);
  b_obj = obj;
  st.site = &fb_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  b_obj->isInitialized = 0;
  c_st.site = &d_emlrtRSI;
  st.site = &fb_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  st.site = &gb_emlrtRSI;
  c_obj = b_obj;
  iobj_0 = &b_obj->_pobj1;
  iobj_1 = &b_obj->_pobj2[0];
  iobj_2 = &b_obj->_pobj3[0];
  b_st.site = &c_emlrtRSI;
  b_iobj_1 = &iobj_1[0];
  c_st.site = &hb_emlrtRSI;
  d_st.site = &hb_emlrtRSI;
  e_st.site = &ib_emlrtRSI;
  f_st.site = &jb_emlrtRSI;
  newrobot = RigidBodyTree_RigidBodyTree(moduleInstance, &f_st, iobj_0);
  f_st.site = &kb_emlrtRSI;
  g_st.site = &bc_emlrtRSI;
  i = b_basename->size[0] * b_basename->size[1];
  b_basename->size[0] = 1;
  b_basename->size[1] = varargin_2->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_basename, i);
  loop_ub = varargin_2->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_basename->data[i] = varargin_2->Base.NameInternal->data[i];
  }

  f_st.site = &kb_emlrtRSI;
  g_st.site = &cc_emlrtRSI;
  h_st.site = &fc_emlrtRSI;
  if (b_basename->size[1] == 0) {
    for (i = 0; i < 37; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&h_st, 37, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&h_st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 8; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&h_st, 8, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    i_st.site = &am_emlrtRSI;
    b_error(&i_st, y, getString(&i_st, message(&i_st, b_y, c_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
  }

  emxInit_char_T(&bname, 2);
  g_st.site = &dc_emlrtRSI;
  bid = -1;
  h_st.site = &gc_emlrtRSI;
  validateattributes(&h_st, b_basename);
  h_st.site = &hc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = newrobot->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = newrobot->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = newrobot->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, b_basename)) {
    bid = 0;
  } else {
    pid = newrobot->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, pid, mxDOUBLE_CLASS, (int32_T)pid,
      &c_emlrtRTEI, &g_st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)pid - 1)) {
      h_st.site = &ic_emlrtRSI;
      e_obj = newrobot->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 3,
        &b_emlrtBCI, &h_st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = e_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = e_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = e_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, b_basename)) {
        bid = b_i + 1;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  if (bid != 0) {
    if (bid < 0) {
      i = newrobot->Base.NameInternal->size[0] * newrobot->
        Base.NameInternal->size[1];
      newrobot->Base.NameInternal->size[0] = 1;
      newrobot->Base.NameInternal->size[1] = b_basename->size[1];
      emxEnsureCapacity_char_T(newrobot->Base.NameInternal, i);
      loop_ub = b_basename->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        newrobot->Base.NameInternal->data[i] = b_basename->data[i];
      }
    } else {
      g_st.site = &ec_emlrtRSI;
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_basename->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_basename->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_basename->data[i];
      }

      for (i = 0; i < 51; i++) {
        h_u[i] = i_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&g_st, 51, m, &h_u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 51; i++) {
        h_u[i] = i_u[i];
      }

      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&g_st, 51, m, &h_u[0]);
      emlrtAssign(&e_y, m);
      f_y = NULL;
      for (i = 0; i < 2; i++) {
        iv5[i] = b_basename->size[i];
      }

      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&g_st, b_basename->size[1], m, &bname->data[0]);
      emlrtAssign(&f_y, m);
      h_st.site = &xl_emlrtRSI;
      b_error(&h_st, d_y, getString(&h_st, message(&h_st, e_y, f_y, &e_emlrtMCI),
               &e_emlrtMCI), &e_emlrtMCI);
    }
  }

  emxFree_char_T(&b_basename);
  f_st.site = &nb_emlrtRSI;
  d_obj = &varargin_2->Base.CollisionsInternal;
  g_st.site = &jc_emlrtRSI;
  newObj = CollisionSet_CollisionSet(&g_st, &(&(&(&(&iobj_1[0])[0])[0])[0])[0],
    varargin_2->Base.CollisionsInternal.MaxElements);
  newObj->Size = varargin_2->Base.CollisionsInternal.Size;
  pid = varargin_2->Base.CollisionsInternal.Size;
  i = (int32_T)pid - 1;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, pid, mxDOUBLE_CLASS, (int32_T)pid,
    &b_emlrtRTEI, &f_st);
  for (b_i = 0; b_i <= i; b_i++) {
    g_st.site = &kc_emlrtRSI;
    loop_ub = d_obj->CollisionGeometries->size[1] - 1;
    f_obj = d_obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i,
      0, loop_ub, &c_emlrtBCI, &g_st)];
    loop_ub = newObj->CollisionGeometries->size[1] - 1;
    newObj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0,
      loop_ub, &d_emlrtBCI, &f_st)] = f_obj;
  }

  newrobot->Base.CollisionsInternal = newObj;
  f_st.site = &lb_emlrtRSI;
  for (i = 0; i < 3; i++) {
    g[i] = varargin_2->Gravity[i];
  }

  g_st.site = &lc_emlrtRSI;
  h_st.site = &fc_emlrtRSI;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 3)) {
    if (!muDoubleScalarIsNaN(g[loop_ub])) {
      loop_ub++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 35; i++) {
      j_u[i] = k_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&h_st, 35, m, &j_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 46; i++) {
      l_u[i] = m_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&h_st, 46, m, &l_u[0]);
    emlrtAssign(&h_y, m);
    for (i = 0; i < 7; i++) {
      o_u[i] = p_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(&h_st, 7, m, &o_u[0]);
    emlrtAssign(&j_y, m);
    i_st.site = &vl_emlrtRSI;
    b_error(&i_st, g_y, getString(&i_st, message(&i_st, h_y, j_y, &f_emlrtMCI),
             &f_emlrtMCI), &f_emlrtMCI);
  }

  h_st.site = &fc_emlrtRSI;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 3)) {
    if ((!muDoubleScalarIsInf(g[loop_ub])) && (!muDoubleScalarIsNaN(g[loop_ub])))
    {
      loop_ub++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 35; i++) {
      j_u[i] = n_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&h_st, 35, m, &j_u[0]);
    emlrtAssign(&i_y, m);
    for (i = 0; i < 46; i++) {
      l_u[i] = q_u[i];
    }

    k_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(&h_st, 46, m, &l_u[0]);
    emlrtAssign(&k_y, m);
    for (i = 0; i < 7; i++) {
      o_u[i] = p_u[i];
    }

    l_y = NULL;
    m = emlrtCreateCharArray(2, &iv11[0]);
    emlrtInitCharArrayR2013a(&h_st, 7, m, &o_u[0]);
    emlrtAssign(&l_y, m);
    i_st.site = &ul_emlrtRSI;
    b_error(&i_st, i_y, getString(&i_st, message(&i_st, k_y, l_y, &g_emlrtMCI),
             &g_emlrtMCI), &g_emlrtMCI);
  }

  if (1.0 <= varargin_2->NumBodies) {
    body = varargin_2->Bodies[0];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &c_emlrtDCI, &e_st) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 3,
        &e_emlrtBCI, &e_st)];
    } else {
      parent = &varargin_2->Base;
    }

    f_st.site = &mb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    f_st.site = &mb_emlrtRSI;
    RigidBodyTree_addBody(&f_st, newrobot, body, bname, &(&(&(&b_iobj_1[0])[0])
      [0])[1], &(&(&(&(&(&b_obj->_pobj3[0])[0])[0])[0])[0])[0],
                          &(&(&(&(&(&b_obj->_pobj4[0])[0])[0])[0])[0])[0]);
  }

  if (2.0 <= varargin_2->NumBodies) {
    body = varargin_2->Bodies[1];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &c_emlrtDCI, &e_st) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 3,
        &e_emlrtBCI, &e_st)];
    } else {
      parent = &varargin_2->Base;
    }

    f_st.site = &mb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    f_st.site = &mb_emlrtRSI;
    RigidBodyTree_addBody(&f_st, newrobot, body, bname, &(&(&(&b_iobj_1[0])[0])
      [0])[2], &(&(&(&(&iobj_2[0])[0])[0])[0])[1], &(&(&(&(&(&b_obj->_pobj4[0])
      [0])[0])[0])[0])[1]);
  }

  if (3.0 <= varargin_2->NumBodies) {
    body = varargin_2->Bodies[2];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &c_emlrtDCI, &e_st) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 3,
        &e_emlrtBCI, &e_st)];
    } else {
      parent = &varargin_2->Base;
    }

    f_st.site = &mb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    f_st.site = &mb_emlrtRSI;
    RigidBodyTree_addBody(&f_st, newrobot, body, bname, &(&(&(&b_iobj_1[0])[0])
      [0])[3], &(&(&(&(&iobj_2[0])[0])[0])[0])[2], &(&(&(&(&(&b_obj->_pobj4[0])
      [0])[0])[0])[0])[2]);
  }

  if (4.0 <= varargin_2->NumBodies) {
    body = varargin_2->Bodies[3];
    pid = body->ParentIndex;
    if (pid > 0.0) {
      i = (int32_T)emlrtIntegerCheckR2012b(pid, &c_emlrtDCI, &e_st) - 1;
      parent = varargin_2->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 3,
        &e_emlrtBCI, &e_st)];
    } else {
      parent = &varargin_2->Base;
    }

    f_st.site = &mb_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = parent->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = parent->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = parent->NameInternal->data[i];
    }

    f_st.site = &mb_emlrtRSI;
    RigidBodyTree_addBody(&f_st, newrobot, body, bname, &(&(&(&b_iobj_1[0])[0])
      [0])[4], &(&(&(&(&iobj_2[0])[0])[0])[0])[3], &(&(&(&(&(&b_obj->_pobj4[0])
      [0])[0])[0])[0])[3]);
  }

  emxFree_char_T(&bname);
  c_obj->RigidBodyTreeInternal = newrobot;
  d_st.site = &hb_emlrtRSI;
  inverseKinematics_set_SolverAlgorithm(c_obj, &b_obj->_pobj5);
  d_st.site = &hb_emlrtRSI;
  e_st.site = &c_emlrtRSI;
  d_st.site = &hb_emlrtRSI;
  e_st.site = &he_emlrtRSI;
  e_st.site = &ie_emlrtRSI;
  g_obj = c_obj->Solver;
  g_obj->MaxNumIteration = 1500.0;
  g_obj->MaxTime = 10.0;
  g_obj->GradientTolerance = 1.0E-7;
  g_obj->SolutionTolerance = 1.0E-6;
  g_obj->ConstraintsOn = true;
  g_obj->RandomRestart = false;
  g_obj->StepTolerance = 1.0E-14;
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBodyTree_1 *RigidBodyTree_RigidBodyTree
  (InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance, const emlrtStack *sp,
   robotics_manip_internal_RigidBodyTree_1 *obj)
{
  static char_T jname[8] = { 'b', 'a', 's', 'e', '_', 'j', 'n', 't' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T bname[4] = { 'b', 'a', 's', 'e' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  robotics_manip_internal_RigidBody_1 *c_obj;
  real_T poslim_data[12];
  real_T idx[5];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_obj = obj;
  st.site = &k_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  st.site = &ob_emlrtRSI;
  c_obj = &b_obj->Base;
  b_st.site = &o_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  i = b_obj->Base.NameInternal->size[0] * b_obj->Base.NameInternal->size[1];
  b_obj->Base.NameInternal->size[0] = 1;
  b_obj->Base.NameInternal->size[1] = 4;
  emxEnsureCapacity_char_T(b_obj->Base.NameInternal, i);
  for (i = 0; i < 4; i++) {
    b_obj->Base.NameInternal->data[i] = bname[i];
  }

  b_st.site = &db_emlrtRSI;
  c_obj->_pobj1.InTree = false;
  for (i = 0; i < 16; i++) {
    c_obj->_pobj1.JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    c_obj->_pobj1.ChildToJointTransform[i] = (real_T)iv[i];
  }

  c_st.site = &r_emlrtRSI;
  i = c_obj->_pobj1.NameInternal->size[0] * c_obj->_pobj1.NameInternal->size[1];
  c_obj->_pobj1.NameInternal->size[0] = 1;
  c_obj->_pobj1.NameInternal->size[1] = 8;
  emxEnsureCapacity_char_T(c_obj->_pobj1.NameInternal, i);
  for (i = 0; i < 8; i++) {
    c_obj->_pobj1.NameInternal->data[i] = jname[i];
  }

  i = c_obj->_pobj1.Type->size[0] * c_obj->_pobj1.Type->size[1];
  c_obj->_pobj1.Type->size[0] = 1;
  c_obj->_pobj1.Type->size[1] = 5;
  emxEnsureCapacity_char_T(c_obj->_pobj1.Type, i);
  for (i = 0; i < 5; i++) {
    c_obj->_pobj1.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = c_obj->_pobj1.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = c_obj->_pobj1.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = c_obj->_pobj1.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    c_obj->_pobj1.VelocityNumber = 1.0;
    c_obj->_pobj1.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      c_obj->_pobj1.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i + -0.5;
    }

    c_obj->_pobj1.VelocityNumber = 1.0;
    c_obj->_pobj1.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      c_obj->_pobj1.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    c_obj->_pobj1.VelocityNumber = 0.0;
    c_obj->_pobj1.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      c_obj->_pobj1.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = c_obj->_pobj1.MotionSubspace->size[0] * c_obj->_pobj1.MotionSubspace->
    size[1];
  c_obj->_pobj1.MotionSubspace->size[0] = 6;
  c_obj->_pobj1.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(c_obj->_pobj1.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    c_obj->_pobj1.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = c_obj->_pobj1.PositionLimitsInternal->size[0] *
    c_obj->_pobj1.PositionLimitsInternal->size[1];
  c_obj->_pobj1.PositionLimitsInternal->size[0] = 1;
  c_obj->_pobj1.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(c_obj->_pobj1.PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    c_obj->_pobj1.PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = c_obj->_pobj1.HomePositionInternal->size[0];
  c_obj->_pobj1.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(c_obj->_pobj1.HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    c_obj->_pobj1.HomePositionInternal->data[0] = 0.0;
  }

  b_obj->Base.JointInternal = &c_obj->_pobj1;
  b_obj->Base.Index = -1.0;
  b_obj->Base.ParentIndex = -1.0;
  b_st.site = &eb_emlrtRSI;
  b_obj->Base.CollisionsInternal = CollisionSet_CollisionSet(&b_st,
    &b_obj->Base._pobj0, 0.0);
  b_obj->Base.Index = 0.0;
  st.site = &pb_emlrtRSI;
  b_st.site = &rb_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  d_st.site = &tb_emlrtRSI;
  b_rand(moduleInstance, &d_st, idx);
  for (loop_ub = 0; loop_ub < 5; loop_ub++) {
    idx[loop_ub] = muDoubleScalarFloor(idx[loop_ub] * 62.0) + 1.0;
  }

  for (i = 0; i < 5; i++) {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(idx[i], &d_emlrtDCI, &b_st);
    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 62, &f_emlrtBCI, &b_st);
  }

  st.site = &qb_emlrtRSI;
  RigidBodyTree_clearAllBodies(moduleInstance, &st, b_obj, &b_obj->_pobj0[0]);
  return b_obj;
}

static void b_rand(InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance, const
                   emlrtStack *sp, real_T r[5])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ub_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &vb_emlrtRSI;
  for (k = 0; k < 5; k++) {
    c_st.site = &wb_emlrtRSI;
    d = eml_rand_mt19937ar(&c_st, moduleInstance->c_state);
    r[k] = d;
  }
}

static boolean_T is_valid_state(uint32_T mt[625])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T isvalid;
  if ((mt[624] >= 1U) && (mt[624] < 625U)) {
    isvalid = true;
  } else {
    isvalid = false;
  }

  if (isvalid) {
    isvalid = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k + 1 < 625)) {
      if (mt[k] == 0U) {
        k++;
      } else {
        isvalid = true;
        exitg1 = true;
      }
    }
  }

  return isvalid;
}

static void RigidBodyTree_clearAllBodies(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp, robotics_manip_internal_RigidBodyTree_1
  *obj, robotics_manip_internal_RigidBody_1 *iobj_0)
{
  static char_T b_jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x02', '_', 'j', 'n', 't' };

  static char_T c_jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x03', '_', 'j', 'n', 't' };

  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x01', '_', 'j', 'n', 't' };

  static char_T b_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x02' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x01' };

  static char_T c_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x03' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv4[8] = { 0, 0, 0, 0, -1, -1, -1, -1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody_1 *b_obj;
  real_T poslim_data[12];
  real_T idx[5];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_obj = &iobj_0[0];
  b_st.site = &o_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  i = iobj_0[0].NameInternal->size[0] * iobj_0[0].NameInternal->size[1];
  iobj_0[0].NameInternal->size[0] = 1;
  iobj_0[0].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[0].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[0].NameInternal->data[i] = bname[i];
  }

  b_st.site = &db_emlrtRSI;
  b_obj->_pobj1.InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->_pobj1.JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->_pobj1.ChildToJointTransform[i] = (real_T)iv[i];
  }

  c_st.site = &r_emlrtRSI;
  i = b_obj->_pobj1.NameInternal->size[0] * b_obj->_pobj1.NameInternal->size[1];
  b_obj->_pobj1.NameInternal->size[0] = 1;
  b_obj->_pobj1.NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(b_obj->_pobj1.NameInternal, i);
  for (i = 0; i < 14; i++) {
    b_obj->_pobj1.NameInternal->data[i] = jname[i];
  }

  i = b_obj->_pobj1.Type->size[0] * b_obj->_pobj1.Type->size[1];
  b_obj->_pobj1.Type->size[0] = 1;
  b_obj->_pobj1.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->_pobj1.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->_pobj1.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->_pobj1.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->_pobj1.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->_pobj1.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    b_obj->_pobj1.VelocityNumber = 1.0;
    b_obj->_pobj1.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj1.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i + -0.5;
    }

    b_obj->_pobj1.VelocityNumber = 1.0;
    b_obj->_pobj1.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj1.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    b_obj->_pobj1.VelocityNumber = 0.0;
    b_obj->_pobj1.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj1.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->_pobj1.MotionSubspace->size[0] * b_obj->_pobj1.MotionSubspace->
    size[1];
  b_obj->_pobj1.MotionSubspace->size[0] = 6;
  b_obj->_pobj1.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->_pobj1.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->_pobj1.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = b_obj->_pobj1.PositionLimitsInternal->size[0] *
    b_obj->_pobj1.PositionLimitsInternal->size[1];
  b_obj->_pobj1.PositionLimitsInternal->size[0] = 1;
  b_obj->_pobj1.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->_pobj1.PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->_pobj1.PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = b_obj->_pobj1.HomePositionInternal->size[0];
  b_obj->_pobj1.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->_pobj1.HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    b_obj->_pobj1.HomePositionInternal->data[0] = 0.0;
  }

  iobj_0[0].JointInternal = &b_obj->_pobj1;
  iobj_0[0].Index = -1.0;
  iobj_0[0].ParentIndex = -1.0;
  b_st.site = &eb_emlrtRSI;
  iobj_0[0].CollisionsInternal = CollisionSet_CollisionSet(&b_st, &iobj_0[0].
    _pobj0, 0.0);
  obj->Bodies[0] = &iobj_0[0];
  st.site = &yb_emlrtRSI;
  b_obj = &iobj_0[1];
  b_st.site = &o_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  i = iobj_0[1].NameInternal->size[0] * iobj_0[1].NameInternal->size[1];
  iobj_0[1].NameInternal->size[0] = 1;
  iobj_0[1].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[1].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[1].NameInternal->data[i] = b_bname[i];
  }

  b_st.site = &db_emlrtRSI;
  b_obj->_pobj1.InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->_pobj1.JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->_pobj1.ChildToJointTransform[i] = (real_T)iv[i];
  }

  c_st.site = &r_emlrtRSI;
  i = b_obj->_pobj1.NameInternal->size[0] * b_obj->_pobj1.NameInternal->size[1];
  b_obj->_pobj1.NameInternal->size[0] = 1;
  b_obj->_pobj1.NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(b_obj->_pobj1.NameInternal, i);
  for (i = 0; i < 14; i++) {
    b_obj->_pobj1.NameInternal->data[i] = b_jname[i];
  }

  i = b_obj->_pobj1.Type->size[0] * b_obj->_pobj1.Type->size[1];
  b_obj->_pobj1.Type->size[0] = 1;
  b_obj->_pobj1.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->_pobj1.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->_pobj1.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->_pobj1.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->_pobj1.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->_pobj1.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    b_obj->_pobj1.VelocityNumber = 1.0;
    b_obj->_pobj1.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj1.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i + -0.5;
    }

    b_obj->_pobj1.VelocityNumber = 1.0;
    b_obj->_pobj1.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj1.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    b_obj->_pobj1.VelocityNumber = 0.0;
    b_obj->_pobj1.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj1.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->_pobj1.MotionSubspace->size[0] * b_obj->_pobj1.MotionSubspace->
    size[1];
  b_obj->_pobj1.MotionSubspace->size[0] = 6;
  b_obj->_pobj1.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->_pobj1.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->_pobj1.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = b_obj->_pobj1.PositionLimitsInternal->size[0] *
    b_obj->_pobj1.PositionLimitsInternal->size[1];
  b_obj->_pobj1.PositionLimitsInternal->size[0] = 1;
  b_obj->_pobj1.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->_pobj1.PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->_pobj1.PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = b_obj->_pobj1.HomePositionInternal->size[0];
  b_obj->_pobj1.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->_pobj1.HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    b_obj->_pobj1.HomePositionInternal->data[0] = 0.0;
  }

  iobj_0[1].JointInternal = &b_obj->_pobj1;
  iobj_0[1].Index = -1.0;
  iobj_0[1].ParentIndex = -1.0;
  b_st.site = &eb_emlrtRSI;
  iobj_0[1].CollisionsInternal = CollisionSet_CollisionSet(&b_st, &iobj_0[1].
    _pobj0, 0.0);
  obj->Bodies[1] = &iobj_0[1];
  st.site = &yb_emlrtRSI;
  b_obj = &iobj_0[2];
  b_st.site = &o_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  i = iobj_0[2].NameInternal->size[0] * iobj_0[2].NameInternal->size[1];
  iobj_0[2].NameInternal->size[0] = 1;
  iobj_0[2].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[2].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[2].NameInternal->data[i] = c_bname[i];
  }

  b_st.site = &db_emlrtRSI;
  b_obj->_pobj1.InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->_pobj1.JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->_pobj1.ChildToJointTransform[i] = (real_T)iv[i];
  }

  c_st.site = &r_emlrtRSI;
  i = b_obj->_pobj1.NameInternal->size[0] * b_obj->_pobj1.NameInternal->size[1];
  b_obj->_pobj1.NameInternal->size[0] = 1;
  b_obj->_pobj1.NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(b_obj->_pobj1.NameInternal, i);
  for (i = 0; i < 14; i++) {
    b_obj->_pobj1.NameInternal->data[i] = c_jname[i];
  }

  i = b_obj->_pobj1.Type->size[0] * b_obj->_pobj1.Type->size[1];
  b_obj->_pobj1.Type->size[0] = 1;
  b_obj->_pobj1.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->_pobj1.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->_pobj1.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->_pobj1.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->_pobj1.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->_pobj1.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    b_obj->_pobj1.VelocityNumber = 1.0;
    b_obj->_pobj1.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj1.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i + -0.5;
    }

    b_obj->_pobj1.VelocityNumber = 1.0;
    b_obj->_pobj1.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj1.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    b_obj->_pobj1.VelocityNumber = 0.0;
    b_obj->_pobj1.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj1.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->_pobj1.MotionSubspace->size[0] * b_obj->_pobj1.MotionSubspace->
    size[1];
  b_obj->_pobj1.MotionSubspace->size[0] = 6;
  b_obj->_pobj1.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->_pobj1.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->_pobj1.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = b_obj->_pobj1.PositionLimitsInternal->size[0] *
    b_obj->_pobj1.PositionLimitsInternal->size[1];
  b_obj->_pobj1.PositionLimitsInternal->size[0] = 1;
  b_obj->_pobj1.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->_pobj1.PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->_pobj1.PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = b_obj->_pobj1.HomePositionInternal->size[0];
  b_obj->_pobj1.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->_pobj1.HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    b_obj->_pobj1.HomePositionInternal->data[0] = 0.0;
  }

  iobj_0[2].JointInternal = &b_obj->_pobj1;
  iobj_0[2].Index = -1.0;
  iobj_0[2].ParentIndex = -1.0;
  b_st.site = &eb_emlrtRSI;
  iobj_0[2].CollisionsInternal = CollisionSet_CollisionSet(&b_st, &iobj_0[2].
    _pobj0, 0.0);
  obj->Bodies[2] = &iobj_0[2];
  st.site = &yb_emlrtRSI;
  obj->Bodies[3] = d_RigidBody_RigidBody(&st, &iobj_0[3]);
  obj->NumBodies = 0.0;
  obj->NumNonFixedBodies = 0.0;
  obj->PositionNumber = 0.0;
  obj->VelocityNumber = 0.0;
  st.site = &ac_emlrtRSI;
  b_st.site = &rb_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  d_st.site = &tb_emlrtRSI;
  b_rand(moduleInstance, &d_st, idx);
  for (loop_ub = 0; loop_ub < 5; loop_ub++) {
    idx[loop_ub] = muDoubleScalarFloor(idx[loop_ub] * 62.0) + 1.0;
  }

  for (i = 0; i < 5; i++) {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(idx[i], &d_emlrtDCI, &b_st);
    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 62, &f_emlrtBCI, &b_st);
  }

  for (i = 0; i < 8; i++) {
    obj->PositionDoFMap[i] = (real_T)iv4[i];
  }

  for (i = 0; i < 8; i++) {
    obj->VelocityDoFMap[i] = (real_T)iv4[i];
  }
}

static robotics_manip_internal_RigidBody_1 *d_RigidBody_RigidBody(const
  emlrtStack *sp, robotics_manip_internal_RigidBody_1 *obj)
{
  static char_T jname[14] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x04', '_', 'j', 'n', 't' };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y',
    '\x04' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv1[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv2[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv3[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody_1 *b_obj;
  real_T poslim_data[12];
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &o_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &db_emlrtRSI;
  b_obj->_pobj1.InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->_pobj1.JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->_pobj1.ChildToJointTransform[i] = (real_T)iv[i];
  }

  b_st.site = &r_emlrtRSI;
  i = b_obj->_pobj1.NameInternal->size[0] * b_obj->_pobj1.NameInternal->size[1];
  b_obj->_pobj1.NameInternal->size[0] = 1;
  b_obj->_pobj1.NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(b_obj->_pobj1.NameInternal, i);
  for (i = 0; i < 14; i++) {
    b_obj->_pobj1.NameInternal->data[i] = jname[i];
  }

  i = b_obj->_pobj1.Type->size[0] * b_obj->_pobj1.Type->size[1];
  b_obj->_pobj1.Type->size[0] = 1;
  b_obj->_pobj1.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->_pobj1.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->_pobj1.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->_pobj1.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->_pobj1.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = b_obj->_pobj1.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    b_obj->_pobj1.VelocityNumber = 1.0;
    b_obj->_pobj1.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj1.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv2[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i + -0.5;
    }

    b_obj->_pobj1.VelocityNumber = 1.0;
    b_obj->_pobj1.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj1.JointAxisInternal[i] = (real_T)iv3[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    b_obj->_pobj1.VelocityNumber = 0.0;
    b_obj->_pobj1.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      b_obj->_pobj1.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->_pobj1.MotionSubspace->size[0] * b_obj->_pobj1.MotionSubspace->
    size[1];
  b_obj->_pobj1.MotionSubspace->size[0] = 6;
  b_obj->_pobj1.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->_pobj1.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->_pobj1.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = b_obj->_pobj1.PositionLimitsInternal->size[0] *
    b_obj->_pobj1.PositionLimitsInternal->size[1];
  b_obj->_pobj1.PositionLimitsInternal->size[0] = 1;
  b_obj->_pobj1.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(b_obj->_pobj1.PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    b_obj->_pobj1.PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = b_obj->_pobj1.HomePositionInternal->size[0];
  b_obj->_pobj1.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(b_obj->_pobj1.HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    b_obj->_pobj1.HomePositionInternal->data[0] = 0.0;
  }

  b_obj->JointInternal = &b_obj->_pobj1;
  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  st.site = &eb_emlrtRSI;
  b_obj->CollisionsInternal = CollisionSet_CollisionSet(&st, &b_obj->_pobj0, 0.0);
  return b_obj;
}

static void validateattributes(const emlrtStack *sp, emxArray_char_T *a)
{
  static const int32_T iv[2] = { 1, 43 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv2[2] = { 1, 8 };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c_u[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'f', 'i', 'n',
    'd', 'B', 'o', 'd', 'y', 'I', 'n', 'd', 'e', 'x', 'B', 'y', 'N', 'a', 'm',
    'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm',
    'p', 't', 'y' };

  static char_T g_u[8] = { 'b', 'o', 'd', 'y', 'n', 'a', 'm', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T d_u[48];
  char_T b_u[43];
  char_T f_u[8];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (a->size[1] == 0) {
    for (i = 0; i < 43; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 43, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 8; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 8, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &am_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
  }
}

static boolean_T d_strcmp(emxArray_char_T *a, emxArray_char_T *b_b)
{
  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  boolean_T c_b;
  b_bool = false;
  c_b = (a->size[1] == 0);
  if (c_b && (b_b->size[1] == 0)) {
    b_bool = true;
  } else if (a->size[1] != b_b->size[1]) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 <= b_b->size[1] - 1) {
        if (a->data[kstr - 1] != b_b->data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void RigidBodyTree_addBody(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody *bodyin, emxArray_char_T *parentName,
  robotics_manip_internal_CollisionSet *iobj_0, rigidBodyJoint *iobj_1,
  robotics_manip_internal_RigidBody_1 *iobj_2)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv2[2] = { 1, 51 };

  static const int32_T iv3[2] = { 1, 48 };

  static const int32_T iv5[2] = { 1, 9 };

  static const int32_T iv6[2] = { 1, 52 };

  static const int32_T iv7[2] = { 1, 52 };

  static char_T j_u[52] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'J', 'o', 'i', 'n', 't', 'N',
    'a', 'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  static char_T c_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'a',
    'm', 'e', 'C', 'o', 'l', 'l', 'i', 's', 'i', 'o', 'n' };

  static char_T e_u[48] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'f', 'i', 'n',
    'd', 'B', 'o', 'd', 'y', 'I', 'n', 'd', 'e', 'x', 'B', 'y', 'J', 'o', 'i',
    'n', 't', 'N', 'a', 'm', 'e', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T f_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T h_u[9] = { 'j', 'o', 'i', 'n', 't', 'n', 'a', 'm', 'e' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *bname;
  emxArray_char_T *nm;
  emxArray_char_T *varargin_1;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  rigidBodyJoint *jnt;
  robotics_manip_internal_RigidBody_1 *body;
  real_T bid;
  real_T pid;
  int32_T iv4[2];
  int32_T b_i;
  int32_T bid2;
  int32_T i;
  int32_T loop_ub;
  char_T i_u[52];
  char_T b_u[51];
  char_T d_u[48];
  char_T g_u[9];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emxInit_char_T(&bname, 2);
  st.site = &mc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = bodyin->NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = bodyin->NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = bodyin->NameInternal->data[i];
  }

  st.site = &mc_emlrtRSI;
  bid = RigidBodyTree_findBodyIndexByName(&st, obj, bname);
  emxInit_char_T(&varargin_1, 2);
  if (bid > -1.0) {
    st.site = &nc_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = bodyin->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = bodyin->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = bodyin->NameInternal->data[i];
    }

    st.site = &nc_emlrtRSI;
    i = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = bname->size[1];
    emxEnsureCapacity_char_T(varargin_1, i);
    loop_ub = bname->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      varargin_1->data[i] = bname->data[i];
    }

    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    e_y = NULL;
    for (i = 0; i < 2; i++) {
      iv4[i] = bname->size[i];
    }

    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, bname->size[1], m, &varargin_1->data[0]);
    emlrtAssign(&e_y, m);
    b_st.site = &xl_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, c_y, e_y, &e_emlrtMCI),
             &e_emlrtMCI), &e_emlrtMCI);
  }

  st.site = &oc_emlrtRSI;
  pid = RigidBodyTree_validateInputBodyName(&st, obj, parentName);
  st.site = &pc_emlrtRSI;
  if (bodyin->Index == 0.0) {
    b_st.site = &ad_emlrtRSI;
    error(&b_st);
  }

  emxInit_char_T(&nm, 2);
  st.site = &pc_emlrtRSI;
  i = nm->size[0] * nm->size[1];
  nm->size[0] = 1;
  nm->size[1] = bodyin->JointInternal.NameInternal->size[1];
  emxEnsureCapacity_char_T(nm, i);
  loop_ub = bodyin->JointInternal.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    nm->data[i] = bodyin->JointInternal.NameInternal->data[i];
  }

  st.site = &pc_emlrtRSI;
  bid2 = -2;
  b_st.site = &bd_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  if (nm->size[1] == 0) {
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&c_st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = f_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&c_st, 48, m, &d_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 9; i++) {
      g_u[i] = h_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&c_st, 9, m, &g_u[0]);
    emlrtAssign(&f_y, m);
    d_st.site = &am_emlrtRSI;
    b_error(&d_st, b_y, getString(&d_st, message(&d_st, d_y, f_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
  }

  bid = obj->NumBodies;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, bid, mxDOUBLE_CLASS, (int32_T)bid,
    &d_emlrtRTEI, &st);
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= (int32_T)bid - 1)) {
    b_st.site = &cd_emlrtRSI;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 3, &n_emlrtBCI,
      &b_st)];
    if (body->Index == 0.0) {
      c_st.site = &ad_emlrtRSI;
      error(&c_st);
    }

    jnt = body->JointInternal;
    b_st.site = &cd_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(bname, i);
    loop_ub = jnt->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bname->data[i] = jnt->NameInternal->data[i];
    }

    if (d_strcmp(bname, nm)) {
      bid2 = b_i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  emxFree_char_T(&bname);
  if (bid2 + 1 > 0) {
    st.site = &qc_emlrtRSI;
    if (bodyin->Index == 0.0) {
      b_st.site = &ad_emlrtRSI;
      error(&b_st);
    }

    st.site = &qc_emlrtRSI;
    i = nm->size[0] * nm->size[1];
    nm->size[0] = 1;
    nm->size[1] = bodyin->JointInternal.NameInternal->size[1];
    emxEnsureCapacity_char_T(nm, i);
    loop_ub = bodyin->JointInternal.NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      nm->data[i] = bodyin->JointInternal.NameInternal->data[i];
    }

    st.site = &qc_emlrtRSI;
    i = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = nm->size[1];
    emxEnsureCapacity_char_T(varargin_1, i);
    loop_ub = nm->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      varargin_1->data[i] = nm->data[i];
    }

    for (i = 0; i < 52; i++) {
      i_u[i] = j_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&st, 52, m, &i_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 52; i++) {
      i_u[i] = j_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&st, 52, m, &i_u[0]);
    emlrtAssign(&h_y, m);
    i_y = NULL;
    for (i = 0; i < 2; i++) {
      iv4[i] = nm->size[i];
    }

    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, nm->size[1], m, &varargin_1->data[0]);
    emlrtAssign(&i_y, m);
    b_st.site = &xl_emlrtRSI;
    b_error(&b_st, g_y, getString(&b_st, message(&b_st, h_y, i_y, &e_emlrtMCI),
             &e_emlrtMCI), &e_emlrtMCI);
  }

  emxFree_char_T(&nm);
  emxFree_char_T(&varargin_1);
  bid = obj->NumBodies + 1.0;
  st.site = &wc_emlrtRSI;
  body = RigidBody_copy(&st, bodyin, iobj_0, iobj_1, iobj_2);
  i = (int32_T)emlrtIntegerCheckR2012b(bid, &e_emlrtDCI, sp) - 1;
  obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 3, &l_emlrtBCI, sp)] = body;
  body->Index = bid;
  body->ParentIndex = pid;
  if (pid > 0.0) {
    emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, 3, &m_emlrtBCI, sp);
  }

  i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &f_emlrtDCI, sp);
  emlrtDynamicBoundsCheckR2012b(i, 1, 4, &g_emlrtBCI, sp);
  body->JointInternal->InTree = true;
  obj->NumBodies++;
  st.site = &rc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &ad_emlrtRSI;
    error(&b_st);
  }

  jnt = body->JointInternal;
  if (!e_strcmp(jnt->Type)) {
    obj->NumNonFixedBodies++;
    st.site = &sc_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &ad_emlrtRSI;
      error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &g_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 4, &h_emlrtBCI, sp) - 1;
    obj->PositionDoFMap[loop_ub] = obj->PositionNumber + 1.0;
    obj->PositionDoFMap[loop_ub + 4] = obj->PositionNumber + jnt->PositionNumber;
    st.site = &tc_emlrtRSI;
    if (body->Index == 0.0) {
      b_st.site = &ad_emlrtRSI;
      error(&b_st);
    }

    jnt = body->JointInternal;
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &h_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 4, &i_emlrtBCI, sp) - 1;
    obj->VelocityDoFMap[loop_ub] = obj->VelocityNumber + 1.0;
    obj->VelocityDoFMap[loop_ub + 4] = obj->VelocityNumber + jnt->VelocityNumber;
  } else {
    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &i_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 4, &j_emlrtBCI, sp);
    for (i = 0; i < 2; i++) {
      obj->PositionDoFMap[(loop_ub + (i << 2)) - 1] = 0.0 - (real_T)i;
    }

    i = (int32_T)emlrtIntegerCheckR2012b(body->Index, &j_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, 4, &k_emlrtBCI, sp);
    for (i = 0; i < 2; i++) {
      obj->VelocityDoFMap[(loop_ub + (i << 2)) - 1] = 0.0 - (real_T)i;
    }
  }

  st.site = &uc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &ad_emlrtRSI;
    error(&b_st);
  }

  jnt = body->JointInternal;
  obj->PositionNumber += jnt->PositionNumber;
  st.site = &vc_emlrtRSI;
  if (body->Index == 0.0) {
    b_st.site = &ad_emlrtRSI;
    error(&b_st);
  }

  jnt = body->JointInternal;
  obj->VelocityNumber += jnt->VelocityNumber;
}

static real_T RigidBodyTree_findBodyIndexByName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  emlrtStack st;
  emxArray_char_T *bname;
  robotics_manip_internal_RigidBody_1 *b_obj;
  real_T bid;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T loop_ub;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  bid = -1.0;
  i = bodyname->size[0] * bodyname->size[1];
  bodyname->size[0] = 1;
  emxEnsureCapacity_char_T(bodyname, i);
  emxInit_char_T(&bname, 2);
  st.site = &gc_emlrtRSI;
  validateattributes(&st, bodyname);
  st.site = &hc_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(bname, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bname->data[i] = obj->Base.NameInternal->data[i];
  }

  if (d_strcmp(bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &c_emlrtRTEI, sp);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      st.site = &ic_emlrtRSI;
      b_obj = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 3, &b_emlrtBCI,
        &st)];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(bname, i);
      loop_ub = b_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        bname->data[i] = b_obj->NameInternal->data[i];
      }

      if (d_strcmp(bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&bname);
  return bid;
}

static real_T RigidBodyTree_validateInputBodyName(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_char_T *bodyname)
{
  static const int32_T iv[2] = { 1, 46 };

  static const int32_T iv1[2] = { 1, 46 };

  static char_T c_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o',
    't', 'F', 'o', 'u', 'n', 'd' };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *b_bodyname;
  emxArray_char_T *varargin_1;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T bid;
  int32_T iv2[2];
  int32_T i;
  int32_T loop_ub;
  char_T b_u[46];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&b_bodyname, 2);
  i = b_bodyname->size[0] * b_bodyname->size[1];
  b_bodyname->size[0] = 1;
  b_bodyname->size[1] = bodyname->size[1];
  emxEnsureCapacity_char_T(b_bodyname, i);
  loop_ub = bodyname->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_bodyname->data[i] = bodyname->data[i];
  }

  st.site = &xc_emlrtRSI;
  bid = RigidBodyTree_findBodyIndexByName(&st, obj, b_bodyname);
  emxFree_char_T(&b_bodyname);
  if (bid == -1.0) {
    emxInit_char_T(&varargin_1, 2);
    st.site = &yc_emlrtRSI;
    i = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = 1;
    varargin_1->size[1] = bodyname->size[1];
    emxEnsureCapacity_char_T(varargin_1, i);
    loop_ub = bodyname->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      varargin_1->data[i] = bodyname->data[i];
    }

    for (i = 0; i < 46; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 46, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 46; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 46, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    for (i = 0; i < 2; i++) {
      iv2[i] = bodyname->size[i];
    }

    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, bodyname->size[1], m, &varargin_1->data[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &xl_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &e_emlrtMCI),
             &e_emlrtMCI), &e_emlrtMCI);
    emxFree_char_T(&varargin_1);
  }

  return bid;
}

static void error(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', ':', 'N', 'o', 'S', 'u', 'c', 'h', 'P', 'r', 'o', 'p',
    'e', 'r', 't', 'y', 'F', 'o', 'r', 'B', 'a', 's', 'e' };

  static char_T e_u[5] = { 'J', 'o', 'i', 'n', 't' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[51];
  char_T d_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 51; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 51; i++) {
    b_u[i] = c_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  for (i = 0; i < 5; i++) {
    d_u[i] = e_u[i];
  }

  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, 5, m, &d_u[0]);
  emlrtAssign(&c_y, m);
  st.site = &xl_emlrtRSI;
  b_error(&st, y, getString(&st, message(&st, b_y, c_y, &e_emlrtMCI),
           &e_emlrtMCI), &e_emlrtMCI);
}

static robotics_manip_internal_RigidBody_1 *RigidBody_copy(const emlrtStack *sp,
  robotics_manip_internal_RigidBody *obj, robotics_manip_internal_CollisionSet
  *iobj_0, rigidBodyJoint *iobj_1, robotics_manip_internal_RigidBody_1 *iobj_2)
{
  static const int32_T iv[2] = { 1, 33 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T g_u[5] = { 'b', 'n', 'a', 'm', 'e' };

  static char_T cv[4] = { '_', 'j', 'n', 't' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv4[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv5[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv6[3] = { 0, 0, 1 };

  b_robotics_manip_internal_CollisionGeometry *c_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *input1;
  emxArray_char_T *jname;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  robotics_manip_internal_CollisionSet *b_obj;
  robotics_manip_internal_CollisionSet *newObj;
  robotics_manip_internal_RigidBody_1 *newbody;
  real_T poslim_data[12];
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T loop_ub;
  char_T d_u[48];
  char_T b_u[33];
  char_T f_u[5];
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emxInit_char_T(&input1, 2);
  st.site = &dd_emlrtRSI;
  i = input1->size[0] * input1->size[1];
  input1->size[0] = 1;
  input1->size[1] = obj->NameInternal->size[1];
  emxEnsureCapacity_char_T(input1, i);
  loop_ub = obj->NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    input1->data[i] = obj->NameInternal->data[i];
  }

  b_st.site = &o_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  newbody = iobj_2;
  b_st.site = &gd_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  if (input1->size[1] == 0) {
    for (i = 0; i < 33; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&c_st, 33, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&c_st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&c_st, 5, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    d_st.site = &am_emlrtRSI;
    b_error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
  }

  i = iobj_2->NameInternal->size[0] * iobj_2->NameInternal->size[1];
  iobj_2->NameInternal->size[0] = 1;
  iobj_2->NameInternal->size[1] = input1->size[1];
  emxEnsureCapacity_char_T(iobj_2->NameInternal, i);
  loop_ub = input1->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    iobj_2->NameInternal->data[i] = input1->data[i];
  }

  emxInit_char_T(&jname, 2);
  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = input1->size[1] + 4;
  emxEnsureCapacity_char_T(jname, i);
  loop_ub = input1->size[1];
  for (i = 0; i < loop_ub; i++) {
    jname->data[i] = input1->data[i];
  }

  for (i = 0; i < 4; i++) {
    jname->data[i + input1->size[1]] = cv[i];
  }

  b_st.site = &db_emlrtRSI;
  iobj_2->_pobj1.InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_2->_pobj1.JointToParentTransform[i] = (real_T)iv3[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_2->_pobj1.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  c_st.site = &r_emlrtRSI;
  c_st.site = &hd_emlrtRSI;
  b_validateattributes(&c_st, jname);
  i = iobj_2->_pobj1.NameInternal->size[0] * iobj_2->_pobj1.NameInternal->size[1];
  iobj_2->_pobj1.NameInternal->size[0] = 1;
  iobj_2->_pobj1.NameInternal->size[1] = jname->size[1];
  emxEnsureCapacity_char_T(iobj_2->_pobj1.NameInternal, i);
  loop_ub = jname->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    iobj_2->_pobj1.NameInternal->data[i] = jname->data[i];
  }

  emxFree_char_T(&jname);
  i = iobj_2->_pobj1.Type->size[0] * iobj_2->_pobj1.Type->size[1];
  iobj_2->_pobj1.Type->size[0] = 1;
  iobj_2->_pobj1.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_2->_pobj1.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_2->_pobj1.Type->data[i] = cv1[i];
  }

  i = input1->size[0] * input1->size[1];
  input1->size[0] = 1;
  input1->size[1] = iobj_2->_pobj1.Type->size[1];
  emxEnsureCapacity_char_T(input1, i);
  loop_ub = iobj_2->_pobj1.Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    input1->data[i] = iobj_2->_pobj1.Type->data[i];
  }

  if (b_strcmp(input1)) {
    loop_ub = 0;
  } else if (c_strcmp(input1)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&input1);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv4[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    iobj_2->_pobj1.VelocityNumber = 1.0;
    iobj_2->_pobj1.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_2->_pobj1.JointAxisInternal[i] = (real_T)iv6[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv5[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i + -0.5;
    }

    iobj_2->_pobj1.VelocityNumber = 1.0;
    iobj_2->_pobj1.PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_2->_pobj1.JointAxisInternal[i] = (real_T)iv6[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_2->_pobj1.VelocityNumber = 0.0;
    iobj_2->_pobj1.PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_2->_pobj1.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_2->_pobj1.MotionSubspace->size[0] * iobj_2->
    _pobj1.MotionSubspace->size[1];
  iobj_2->_pobj1.MotionSubspace->size[0] = 6;
  iobj_2->_pobj1.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_2->_pobj1.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_2->_pobj1.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_2->_pobj1.PositionLimitsInternal->size[0] *
    iobj_2->_pobj1.PositionLimitsInternal->size[1];
  iobj_2->_pobj1.PositionLimitsInternal->size[0] = 1;
  iobj_2->_pobj1.PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_2->_pobj1.PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_2->_pobj1.PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_2->_pobj1.HomePositionInternal->size[0];
  iobj_2->_pobj1.HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_2->_pobj1.HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_2->_pobj1.HomePositionInternal->data[0] = 0.0;
  }

  iobj_2->JointInternal = &iobj_2->_pobj1;
  iobj_2->Index = -1.0;
  iobj_2->ParentIndex = -1.0;
  b_st.site = &eb_emlrtRSI;
  iobj_2->CollisionsInternal = CollisionSet_CollisionSet(&b_st, &iobj_2->_pobj0,
    0.0);
  st.site = &ed_emlrtRSI;
  iobj_2->JointInternal = rigidBodyJoint_copy(&st, &obj->JointInternal, iobj_1);
  st.site = &fd_emlrtRSI;
  b_obj = &obj->CollisionsInternal;
  b_st.site = &jc_emlrtRSI;
  newObj = CollisionSet_CollisionSet(&b_st, iobj_0,
    obj->CollisionsInternal.MaxElements);
  newObj->Size = obj->CollisionsInternal.Size;
  d = obj->CollisionsInternal.Size;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &b_emlrtRTEI, &st);
  for (b_i = 0; b_i <= i; b_i++) {
    b_st.site = &kc_emlrtRSI;
    loop_ub = b_obj->CollisionGeometries->size[1] - 1;
    c_obj = b_obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i,
      0, loop_ub, &c_emlrtBCI, &b_st)];
    loop_ub = newObj->CollisionGeometries->size[1] - 1;
    newObj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0,
      loop_ub, &d_emlrtBCI, &st)] = c_obj;
  }

  iobj_2->CollisionsInternal = newObj;
  return newbody;
}

static void b_validateattributes(const emlrtStack *sp, emxArray_char_T *a)
{
  static const int32_T iv[2] = { 1, 38 };

  static const int32_T iv1[2] = { 1, 48 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T e_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T g_u[5] = { 'j', 'n', 'a', 'm', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T d_u[48];
  char_T b_u[38];
  char_T f_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (a->size[1] == 0) {
    for (i = 0; i < 38; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 38, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 48, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      f_u[i] = g_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &am_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
  }
}

static rigidBodyJoint *rigidBodyJoint_copy(const emlrtStack *sp, rigidBodyJoint *
  obj, rigidBodyJoint *iobj_0)
{
  static const int32_T iv1[2] = { 1, 43 };

  static const int32_T iv10[2] = { 1, 32 };

  static const int32_T iv12[2] = { 1, 38 };

  static const int32_T iv13[2] = { 1, 48 };

  static const int32_T iv14[2] = { 1, 4 };

  static const int32_T iv2[2] = { 1, 46 };

  static const int32_T iv3[2] = { 1, 49 };

  static const int32_T iv4[2] = { 1, 52 };

  static const int32_T iv5[2] = { 1, 5 };

  static const int32_T iv6[2] = { 1, 5 };

  static const int32_T iv7[2] = { 1, 32 };

  static char_T i_u[52] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 's', 't', 'r',
    'i', 'n', 'g', 'U', 'n', 'r', 'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e', 'd',
    'S', 't', 'r', 'i', 'n', 'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T h_u[49] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 's', 't', 'r',
    'i', 'n', 'g', 'A', 'm', 'b', 'i', 'g', 'u', 'o', 'u', 's', 'S', 't', 'r',
    'i', 'n', 'g', 'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T q_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T e_u[46] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'u', 'n', 'r',
    'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e', 'd', 'S', 't', 'r', 'i', 'n', 'g',
    'C', 'h', 'o', 'i', 'c', 'e' };

  static char_T d_u[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'a', 'm', 'b',
    'i', 'g', 'u', 'o', 'u', 's', 'S', 't', 'r', 'i', 'n', 'g', 'C', 'h', 'o',
    'i', 'c', 'e' };

  static char_T o_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'i', 'g',
    'i', 'd', 'B', 'o', 'd', 'y', 'J', 'o', 'i', 'n', 't', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T m_u[32] = { '\'', 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e', '\'',
    ',', ' ', '\'', 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c', '\'', ',', ' ',
    '\'', 'f', 'i', 'x', 'e', 'd', '\'' };

  static char_T k_u[5] = { 'j', 't', 'y', 'p', 'e' };

  static char_T s_u[4] = { 'N', 'a', 'm', 'e' };

  static char_T cv[3] = { ',', ' ', '\'' };

  static char_T cv1[2] = { '\'', ',' };

  static int8_T iv[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv8[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv9[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv11[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_char_T *jname;
  emxArray_char_T *jtype;
  emxArray_real_T *b_obj;
  emxArray_real_T *c_obj;
  emxArray_real_T *e_obj;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *y;
  rigidBodyJoint *newjoint;
  real_T f_obj[16];
  real_T poslim_data[12];
  real_T d_obj[3];
  real_T nmatched;
  int32_T partial_match_size[2];
  int32_T i;
  int32_T jointtype_size_idx_1;
  int32_T loop_ub;
  char_T g_u[52];
  char_T f_u[49];
  char_T p_u[48];
  char_T c_u[46];
  char_T b_u[43];
  char_T n_u[38];
  char_T l_u[32];
  char_T jointtype_data[9];
  char_T partial_match_data[9];
  char_T j_u[5];
  char_T r_u[4];
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emxInit_char_T(&jtype, 2);
  st.site = &id_emlrtRSI;
  i = jtype->size[0] * jtype->size[1];
  jtype->size[0] = 1;
  jtype->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(jtype, i);
  loop_ub = obj->Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    jtype->data[i] = obj->Type->data[i];
  }

  emxInit_char_T(&jname, 2);
  b_st.site = &jd_emlrtRSI;
  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = obj->NameInternal->size[1];
  emxEnsureCapacity_char_T(jname, i);
  loop_ub = obj->NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    jname->data[i] = obj->NameInternal->data[i];
  }

  b_st.site = &kd_emlrtRSI;
  iobj_0->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_0->JointToParentTransform[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_0->ChildToJointTransform[i] = (real_T)iv[i];
  }

  c_st.site = &r_emlrtRSI;
  newjoint = iobj_0;
  c_st.site = &hd_emlrtRSI;
  b_validateattributes(&c_st, jname);
  i = iobj_0->NameInternal->size[0] * iobj_0->NameInternal->size[1];
  iobj_0->NameInternal->size[0] = 1;
  iobj_0->NameInternal->size[1] = jname->size[1];
  emxEnsureCapacity_char_T(iobj_0->NameInternal, i);
  loop_ub = jname->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    iobj_0->NameInternal->data[i] = jname->data[i];
  }

  c_st.site = &nd_emlrtRSI;
  d_st.site = &od_emlrtRSI;
  e_st.site = &pd_emlrtRSI;
  get_match(&e_st, jtype, partial_match_data, partial_match_size, &nmatched);
  if ((nmatched == 0.0) || ((jtype->size[1] == 0) != (partial_match_size[1] == 0)))
  {
    jointtype_size_idx_1 = 0;
    if ((nmatched == 0.0) || ((jtype->size[1] == 0) != (partial_match_size[1] ==
          0))) {
      for (i = 0; i < 46; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&d_st, 46, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 52; i++) {
        g_u[i] = i_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&d_st, 52, m, &g_u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 5; i++) {
        j_u[i] = k_u[i];
      }

      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv6[0]);
      emlrtInitCharArrayR2013a(&d_st, 5, m, &j_u[0]);
      emlrtAssign(&f_y, m);
      for (i = 0; i < 32; i++) {
        l_u[i] = m_u[i];
      }

      h_y = NULL;
      m = emlrtCreateCharArray(2, &iv10[0]);
      emlrtInitCharArrayR2013a(&d_st, 32, m, &l_u[0]);
      emlrtAssign(&h_y, m);
      i = jname->size[0] * jname->size[1];
      jname->size[0] = 1;
      jname->size[1] = jtype->size[1] + 5;
      emxEnsureCapacity_char_T(jname, i);
      for (i = 0; i < 3; i++) {
        jname->data[i] = cv[i];
      }

      loop_ub = jtype->size[1];
      for (i = 0; i < loop_ub; i++) {
        jname->data[i + 3] = jtype->data[i];
      }

      for (i = 0; i < 2; i++) {
        jname->data[(i + jtype->size[1]) + 3] = cv1[i];
      }

      j_y = NULL;
      for (i = 0; i < 2; i++) {
        partial_match_size[i] = jname->size[i];
      }

      m = emlrtCreateCharArray(2, &partial_match_size[0]);
      emlrtInitCharArrayR2013a(&d_st, jname->size[1], m, &jname->data[0]);
      emlrtAssign(&j_y, m);
      e_st.site = &vm_emlrtRSI;
      b_error(&e_st, b_y, getString(&e_st, c_message(&e_st, d_y, f_y, h_y, j_y,
                &i_emlrtMCI), &i_emlrtMCI), &i_emlrtMCI);
    }
  } else if (nmatched > 1.0) {
    for (i = 0; i < 43; i++) {
      b_u[i] = d_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&d_st, 43, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 49; i++) {
      f_u[i] = h_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&d_st, 49, m, &f_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 5; i++) {
      j_u[i] = k_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&d_st, 5, m, &j_u[0]);
    emlrtAssign(&e_y, m);
    for (i = 0; i < 32; i++) {
      l_u[i] = m_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&d_st, 32, m, &l_u[0]);
    emlrtAssign(&g_y, m);
    i = jname->size[0] * jname->size[1];
    jname->size[0] = 1;
    jname->size[1] = jtype->size[1] + 5;
    emxEnsureCapacity_char_T(jname, i);
    for (i = 0; i < 3; i++) {
      jname->data[i] = cv[i];
    }

    loop_ub = jtype->size[1];
    for (i = 0; i < loop_ub; i++) {
      jname->data[i + 3] = jtype->data[i];
    }

    for (i = 0; i < 2; i++) {
      jname->data[(i + jtype->size[1]) + 3] = cv1[i];
    }

    i_y = NULL;
    for (i = 0; i < 2; i++) {
      partial_match_size[i] = jname->size[i];
    }

    m = emlrtCreateCharArray(2, &partial_match_size[0]);
    emlrtInitCharArrayR2013a(&d_st, jname->size[1], m, &jname->data[0]);
    emlrtAssign(&i_y, m);
    e_st.site = &wm_emlrtRSI;
    b_error(&e_st, y, getString(&e_st, c_message(&e_st, c_y, e_y, g_y, i_y,
              &h_emlrtMCI), &h_emlrtMCI), &h_emlrtMCI);
  } else {
    jointtype_size_idx_1 = partial_match_size[1];
    if (0 <= partial_match_size[1] - 1) {
      memcpy(&jointtype_data[0], &partial_match_data[0], (uint32_T)
             (partial_match_size[1] * (int32_T)sizeof(char_T)));
    }
  }

  emxFree_char_T(&jtype);
  emlrtDimSizeGeqCheckR2012b(20, jointtype_size_idx_1, &emlrtECI, &b_st);
  i = iobj_0->Type->size[0] * iobj_0->Type->size[1];
  iobj_0->Type->size[0] = 1;
  iobj_0->Type->size[1] = jointtype_size_idx_1;
  emxEnsureCapacity_char_T(iobj_0->Type, i);
  loop_ub = jointtype_size_idx_1 - 1;
  for (i = 0; i <= loop_ub; i++) {
    iobj_0->Type->data[i] = jointtype_data[i];
  }

  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = iobj_0->Type->size[1];
  emxEnsureCapacity_char_T(jname, i);
  loop_ub = iobj_0->Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    jname->data[i] = iobj_0->Type->data[i];
  }

  if (b_strcmp(jname)) {
    loop_ub = 0;
  } else if (c_strcmp(jname)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv8[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 6.2831853071795862 * (real_T)i + -3.1415926535897931;
    }

    iobj_0->VelocityNumber = 1.0;
    iobj_0->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_0->JointAxisInternal[i] = (real_T)iv11[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv9[i];
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = (real_T)i + -0.5;
    }

    iobj_0->VelocityNumber = 1.0;
    iobj_0->PositionNumber = 1.0;
    for (i = 0; i < 3; i++) {
      iobj_0->JointAxisInternal[i] = (real_T)iv11[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 2; i++) {
      poslim_data[i] = 0.0;
    }

    iobj_0->VelocityNumber = 0.0;
    iobj_0->PositionNumber = 0.0;
    for (i = 0; i < 3; i++) {
      iobj_0->JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_0->MotionSubspace->size[0] * iobj_0->MotionSubspace->size[1];
  iobj_0->MotionSubspace->size[0] = 6;
  iobj_0->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_0->MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_0->MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  i = iobj_0->PositionLimitsInternal->size[0] * iobj_0->
    PositionLimitsInternal->size[1];
  iobj_0->PositionLimitsInternal->size[0] = 1;
  iobj_0->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_0->PositionLimitsInternal, i);
  for (i = 0; i < 2; i++) {
    iobj_0->PositionLimitsInternal->data[i] = poslim_data[i];
  }

  i = iobj_0->HomePositionInternal->size[0];
  iobj_0->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T1(iobj_0->HomePositionInternal, i);
  for (i = 0; i < 1; i++) {
    iobj_0->HomePositionInternal->data[0] = 0.0;
  }

  b_st.site = &ld_emlrtRSI;
  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = obj->NameInternal->size[1];
  emxEnsureCapacity_char_T(jname, i);
  loop_ub = obj->NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    jname->data[i] = obj->NameInternal->data[i];
  }

  if (jname->size[1] != 0) {
    b_st.site = &md_emlrtRSI;
    i = jname->size[0] * jname->size[1];
    jname->size[0] = 1;
    jname->size[1] = obj->NameInternal->size[1];
    emxEnsureCapacity_char_T(jname, i);
    loop_ub = obj->NameInternal->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      jname->data[i] = obj->NameInternal->data[i];
    }

    b_st.site = &md_emlrtRSI;
    c_st.site = &wd_emlrtRSI;
    d_st.site = &fc_emlrtRSI;
    if (jname->size[1] == 0) {
      for (i = 0; i < 38; i++) {
        n_u[i] = o_u[i];
      }

      k_y = NULL;
      m = emlrtCreateCharArray(2, &iv12[0]);
      emlrtInitCharArrayR2013a(&d_st, 38, m, &n_u[0]);
      emlrtAssign(&k_y, m);
      for (i = 0; i < 48; i++) {
        p_u[i] = q_u[i];
      }

      l_y = NULL;
      m = emlrtCreateCharArray(2, &iv13[0]);
      emlrtInitCharArrayR2013a(&d_st, 48, m, &p_u[0]);
      emlrtAssign(&l_y, m);
      for (i = 0; i < 4; i++) {
        r_u[i] = s_u[i];
      }

      m_y = NULL;
      m = emlrtCreateCharArray(2, &iv14[0]);
      emlrtInitCharArrayR2013a(&d_st, 4, m, &r_u[0]);
      emlrtAssign(&m_y, m);
      e_st.site = &am_emlrtRSI;
      b_error(&e_st, k_y, getString(&e_st, message(&e_st, l_y, m_y, &d_emlrtMCI),
               &d_emlrtMCI), &d_emlrtMCI);
    }

    if (!iobj_0->InTree) {
      i = iobj_0->NameInternal->size[0] * iobj_0->NameInternal->size[1];
      iobj_0->NameInternal->size[0] = 1;
      iobj_0->NameInternal->size[1] = jname->size[1];
      emxEnsureCapacity_char_T(iobj_0->NameInternal, i);
      loop_ub = jname->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        iobj_0->NameInternal->data[i] = jname->data[i];
      }
    } else {
      c_st.site = &xd_emlrtRSI;
      d_st.site = &yd_emlrtRSI;
      warning(&d_st);
    }
  }

  emxFree_char_T(&jname);
  emxInit_real_T1(&b_obj, 1);
  loop_ub = obj->PositionLimitsInternal->size[0] << 1;
  i = iobj_0->PositionLimitsInternal->size[0] * iobj_0->
    PositionLimitsInternal->size[1];
  iobj_0->PositionLimitsInternal->size[0] = obj->PositionLimitsInternal->size[0];
  iobj_0->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(iobj_0->PositionLimitsInternal, i);
  i = b_obj->size[0];
  b_obj->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(b_obj, i);
  for (i = 0; i < loop_ub; i++) {
    b_obj->data[i] = obj->PositionLimitsInternal->data[i];
  }

  loop_ub = b_obj->size[0];
  for (i = 0; i < loop_ub; i++) {
    iobj_0->PositionLimitsInternal->data[i] = b_obj->data[i];
  }

  emxFree_real_T(&b_obj);
  emxInit_real_T1(&c_obj, 1);
  i = c_obj->size[0];
  c_obj->size[0] = obj->HomePositionInternal->size[0];
  emxEnsureCapacity_real_T1(c_obj, i);
  loop_ub = obj->HomePositionInternal->size[0];
  for (i = 0; i < loop_ub; i++) {
    c_obj->data[i] = obj->HomePositionInternal->data[i];
  }

  i = iobj_0->HomePositionInternal->size[0];
  iobj_0->HomePositionInternal->size[0] = c_obj->size[0];
  emxEnsureCapacity_real_T1(iobj_0->HomePositionInternal, i);
  loop_ub = c_obj->size[0];
  for (i = 0; i < loop_ub; i++) {
    iobj_0->HomePositionInternal->data[i] = c_obj->data[i];
  }

  emxFree_real_T(&c_obj);
  for (i = 0; i < 3; i++) {
    d_obj[i] = obj->JointAxisInternal[i];
  }

  for (i = 0; i < 3; i++) {
    iobj_0->JointAxisInternal[i] = d_obj[i];
  }

  emxInit_real_T1(&e_obj, 1);
  loop_ub = 6 * obj->MotionSubspace->size[1];
  i = iobj_0->MotionSubspace->size[0] * iobj_0->MotionSubspace->size[1];
  iobj_0->MotionSubspace->size[0] = 6;
  iobj_0->MotionSubspace->size[1] = obj->MotionSubspace->size[1];
  emxEnsureCapacity_real_T(iobj_0->MotionSubspace, i);
  i = e_obj->size[0];
  e_obj->size[0] = loop_ub;
  emxEnsureCapacity_real_T1(e_obj, i);
  for (i = 0; i < loop_ub; i++) {
    e_obj->data[i] = obj->MotionSubspace->data[i];
  }

  loop_ub = e_obj->size[0];
  for (i = 0; i < loop_ub; i++) {
    iobj_0->MotionSubspace->data[i] = e_obj->data[i];
  }

  emxFree_real_T(&e_obj);
  for (i = 0; i < 16; i++) {
    f_obj[i] = obj->JointToParentTransform[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_0->JointToParentTransform[i] = f_obj[i];
  }

  for (i = 0; i < 16; i++) {
    f_obj[i] = obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 16; i++) {
    iobj_0->ChildToJointTransform[i] = f_obj[i];
  }

  return newjoint;
}

static void get_match(const emlrtStack *sp, emxArray_char_T *str, char_T
                      match_data[], int32_T match_size[2], real_T *nmatched)
{
  static char_T cv[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
    '\x06', '\x07', '\x08', '\x09', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e',
    '\x0f', '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17',
    '\x18', '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!',
    '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?',
    '@', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']',
    '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{',
    '|', '}', '~', '\x7f' };

  static char_T b_vstr[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static char_T vstr[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c_vstr[5] = { 'f', 'i', 'x', 'e', 'd' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T exitg1;
  int32_T minnanb;
  int32_T ns;
  int32_T partial_match_size_idx_1;
  char_T partial_match_data[9];
  boolean_T b_bool;
  boolean_T b_guard1 = false;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T matched;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  partial_match_size_idx_1 = 0;
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if (str->size[1] <= 8) {
    st.site = &qd_emlrtRSI;
    ns = str->size[1];
    b_bool = false;
    if (str->size[1] < 8) {
      minnanb = str->size[1];
    } else {
      minnanb = 8;
    }

    b_guard1 = false;
    if (ns <= minnanb) {
      if (minnanb < ns) {
        ns = minnanb;
      }

      b_guard1 = true;
    } else {
      if (str->size[1] == 8) {
        ns = 8;
        b_guard1 = true;
      }
    }

    if (b_guard1) {
      minnanb = 1;
      do {
        exitg1 = 0;
        if (minnanb - 1 <= ns - 1) {
          b_st.site = &rd_emlrtRSI;
          assertSupportedString(&b_st, str->data[minnanb - 1]);
          b_st.site = &sd_emlrtRSI;
          assertSupportedString(&b_st, vstr[minnanb - 1]);
          b_st.site = &td_emlrtRSI;
          c_st.site = &ud_emlrtRSI;
          d_st.site = &vd_emlrtRSI;
          assertSupportedString(&d_st, str->data[minnanb - 1]);
          b_st.site = &td_emlrtRSI;
          c_st.site = &ud_emlrtRSI;
          d_st.site = &vd_emlrtRSI;
          assertSupportedString(&d_st, vstr[minnanb - 1]);
          if (cv[(uint8_T)str->data[minnanb - 1] & 127] != cv[(int32_T)
              vstr[minnanb - 1]]) {
            exitg1 = 1;
          } else {
            minnanb++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      if (str->size[1] == 8) {
        *nmatched = 1.0;
        match_size[0] = 1;
        match_size[1] = 8;
        for (minnanb = 0; minnanb < 8; minnanb++) {
          match_data[minnanb] = vstr[minnanb];
        }
      } else {
        partial_match_size_idx_1 = 8;
        for (minnanb = 0; minnanb < 8; minnanb++) {
          partial_match_data[minnanb] = vstr[minnanb];
        }

        matched = true;
        *nmatched = 1.0;
        guard3 = true;
      }
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    matched = false;
    *nmatched = 0.0;
    guard3 = true;
  }

  if (guard3) {
    if (str->size[1] <= 9) {
      st.site = &qd_emlrtRSI;
      ns = str->size[1];
      b_bool = false;
      if (str->size[1] < 9) {
        minnanb = str->size[1];
      } else {
        minnanb = 9;
      }

      b_guard1 = false;
      if (ns <= minnanb) {
        if (minnanb < ns) {
          ns = minnanb;
        }

        b_guard1 = true;
      } else {
        if (str->size[1] == 9) {
          ns = 9;
          b_guard1 = true;
        }
      }

      if (b_guard1) {
        minnanb = 1;
        do {
          exitg1 = 0;
          if (minnanb - 1 <= ns - 1) {
            b_st.site = &rd_emlrtRSI;
            assertSupportedString(&b_st, str->data[minnanb - 1]);
            b_st.site = &sd_emlrtRSI;
            assertSupportedString(&b_st, b_vstr[minnanb - 1]);
            b_st.site = &td_emlrtRSI;
            c_st.site = &ud_emlrtRSI;
            d_st.site = &vd_emlrtRSI;
            assertSupportedString(&d_st, str->data[minnanb - 1]);
            b_st.site = &td_emlrtRSI;
            c_st.site = &ud_emlrtRSI;
            d_st.site = &vd_emlrtRSI;
            assertSupportedString(&d_st, b_vstr[minnanb - 1]);
            if (cv[(uint8_T)str->data[minnanb - 1] & 127] != cv[(int32_T)
                b_vstr[minnanb - 1]]) {
              exitg1 = 1;
            } else {
              minnanb++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        if (str->size[1] == 9) {
          *nmatched = 1.0;
          match_size[0] = 1;
          match_size[1] = 9;
          for (minnanb = 0; minnanb < 9; minnanb++) {
            match_data[minnanb] = b_vstr[minnanb];
          }
        } else {
          if (!matched) {
            partial_match_size_idx_1 = 9;
            for (minnanb = 0; minnanb < 9; minnanb++) {
              partial_match_data[minnanb] = b_vstr[minnanb];
            }
          }

          matched = true;
          (*nmatched)++;
          guard2 = true;
        }
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if (str->size[1] <= 5) {
      st.site = &qd_emlrtRSI;
      ns = str->size[1];
      b_bool = false;
      if (str->size[1] < 5) {
        minnanb = str->size[1];
      } else {
        minnanb = 5;
      }

      b_guard1 = false;
      if (ns <= minnanb) {
        if (minnanb < ns) {
          ns = minnanb;
        }

        b_guard1 = true;
      } else {
        if (str->size[1] == 5) {
          ns = 5;
          b_guard1 = true;
        }
      }

      if (b_guard1) {
        minnanb = 1;
        do {
          exitg1 = 0;
          if (minnanb - 1 <= ns - 1) {
            b_st.site = &rd_emlrtRSI;
            assertSupportedString(&b_st, str->data[minnanb - 1]);
            b_st.site = &sd_emlrtRSI;
            assertSupportedString(&b_st, c_vstr[minnanb - 1]);
            b_st.site = &td_emlrtRSI;
            c_st.site = &ud_emlrtRSI;
            d_st.site = &vd_emlrtRSI;
            assertSupportedString(&d_st, str->data[minnanb - 1]);
            b_st.site = &td_emlrtRSI;
            c_st.site = &ud_emlrtRSI;
            d_st.site = &vd_emlrtRSI;
            assertSupportedString(&d_st, c_vstr[minnanb - 1]);
            if (cv[(uint8_T)str->data[minnanb - 1] & 127] != cv[(int32_T)
                c_vstr[minnanb - 1]]) {
              exitg1 = 1;
            } else {
              minnanb++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (b_bool) {
        if (str->size[1] == 5) {
          *nmatched = 1.0;
          match_size[0] = 1;
          match_size[1] = 5;
          for (minnanb = 0; minnanb < 5; minnanb++) {
            match_data[minnanb] = c_vstr[minnanb];
          }
        } else {
          if (!matched) {
            partial_match_size_idx_1 = 5;
            for (minnanb = 0; minnanb < 5; minnanb++) {
              partial_match_data[minnanb] = c_vstr[minnanb];
            }
          }

          (*nmatched)++;
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    if (*nmatched == 0.0) {
      match_size[0] = 1;
      match_size[1] = 0;
    } else {
      match_size[0] = 1;
      match_size[1] = partial_match_size_idx_1;
      if (0 <= partial_match_size_idx_1 - 1) {
        memcpy(&match_data[0], &partial_match_data[0], (uint32_T)
               (partial_match_size_idx_1 * (int32_T)sizeof(char_T)));
      }
    }
  }
}

static void assertSupportedString(const emlrtStack *sp, char_T s)
{
  static const int32_T iv[2] = { 1, 31 };

  static const int32_T iv1[2] = { 1, 31 };

  static char_T c_u[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd',
    'S', 't', 'r', 'i', 'n', 'g' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[31];
  st.prev = sp;
  st.tls = sp->tls;
  if (!((uint8_T)s <= 127)) {
    for (i = 0; i < 31; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 31, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 31; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 31, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
    *(int8_T *)emlrtMxGetData(m) = MAX_int8_T;
    emlrtAssign(&c_y, m);
    st.site = &yl_emlrtRSI;
    b_error(&st, y, getString(&st, message(&st, b_y, c_y, &j_emlrtMCI),
             &j_emlrtMCI), &j_emlrtMCI);
  }
}

static void warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 38 };

  static char_T b_msgID[38] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'j', 'o', 'i', 'n', 't',
    ':', 'J', 'o', 'i', 'n', 't', 'N', 'o', 't', 'F', 'r', 'e', 'e' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[38];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 38; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, 38, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &xm_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &k_emlrtMCI), &l_emlrtMCI);
}

static boolean_T e_strcmp(emxArray_char_T *a)
{
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] == 5) {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void inverseKinematics_set_SolverAlgorithm(inverseKinematics *obj,
  robotics_core_internal_DampedBFGSwGradientProjection *iobj_0)
{
  static char_T cv[22] = { 'B', 'F', 'G', 'S', 'G', 'r', 'a', 'd', 'i', 'e', 'n',
    't', 'P', 'r', 'o', 'j', 'e', 'c', 't', 'i', 'o', 'n' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T i;
  st.site = &ae_emlrtRSI;
  b_st.site = &ce_emlrtRSI;
  c_st.site = &be_emlrtRSI;
  iobj_0->MaxNumIteration = 1500.0;
  iobj_0->MaxTime = 10.0;
  iobj_0->GradientTolerance = 1.0E-7;
  iobj_0->SolutionTolerance = 1.0E-6;
  iobj_0->ArmijoRuleBeta = 0.4;
  iobj_0->ArmijoRuleSigma = 1.0E-5;
  iobj_0->ConstraintsOn = true;
  iobj_0->RandomRestart = true;
  iobj_0->StepTolerance = 1.0E-14;
  for (i = 0; i < 22; i++) {
    iobj_0->Name[i] = cv[i];
  }

  iobj_0->ConstraintMatrix->size[0] = 0;
  iobj_0->ConstraintMatrix->size[1] = 0;
  iobj_0->ConstraintBound->size[0] = 0;
  b_st.site = &de_emlrtRSI;
  c_st.site = &fe_emlrtRSI;
  d_st.site = &ge_emlrtRSI;
  iobj_0->TimeObj.StartTime.tv_sec = 0.0;
  iobj_0->TimeObj.StartTime.tv_nsec = 0.0;
  b_st.site = &ee_emlrtRSI;
  c_st.site = &fe_emlrtRSI;
  d_st.site = &ge_emlrtRSI;
  iobj_0->TimeObjInternal.StartTime.tv_sec = 0.0;
  iobj_0->TimeObjInternal.StartTime.tv_nsec = 0.0;
  obj->Solver = iobj_0;
}

static void mw__internal__call__reset(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T e_u[5] = { 'r', 'e', 's', 'e', 't' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  robotics_slmanip_internal_block_IKBlock *obj;
  int32_T i;
  char_T b_u[45];
  char_T d_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    d_st.site = &d_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &e_emlrtRSI;
    obj->matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &je_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp, real_T b_u0[16], real_T b_u1[6], real_T
  b_u2[3], real_T c_y0[3], real_T *y1_Iterations, real_T *y1_PoseErrorNorm,
  uint16_T *y1_ExitFlag, uint8_T *y1_Status)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 51 };

  static const int32_T iv4[2] = { 1, 45 };

  static const int32_T iv5[2] = { 1, 4 };

  static const int32_T iv6[2] = { 1, 51 };

  static const int32_T iv7[2] = { 1, 4 };

  static const int32_T iv8[2] = { 1, 5 };

  static char_T f_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T cv[7] = { 's', 'u', 'c', 'c', 'e', 's', 's' };

  static char_T i_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T g_u[4] = { 's', 't', 'e', 'p' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_real_T *A;
  emxArray_real_T *b_b;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  inverseKinematics *b_obj;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  rigidBodyJoint *joint;
  robotics_manip_internal_RigidBody_1 *c_obj;
  robotics_slmanip_internal_block_IKBlock *obj;
  real_T varargout_1[3];
  real_T b_m;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T n;
  real_T pnum;
  int32_T varargout_2_Status_size[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T exitg1;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T loop_ub;
  char_T d_u[51];
  char_T b_u[45];
  char_T varargout_2_Status_data[14];
  char_T h_u[5];
  char_T e_u[4];
  int8_T b_I[16];
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    d_st.site = &d_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &e_emlrtRSI;
    obj->matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &ke_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 4; i++) {
      e_u[i] = g_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &e_u[0]);
    emlrtAssign(&f_y, m);
    b_st.site = &d_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, c_y, f_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    SystemCore_setup(moduleInstance, &c_st, obj);
  }

  b_st.site = &d_emlrtRSI;
  b_obj = &obj->IKInternal;
  c_st.site = &d_emlrtRSI;
  if (obj->IKInternal.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&c_st, 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&c_st, 45, m, &b_u[0]);
    emlrtAssign(&e_y, m);
    for (i = 0; i < 4; i++) {
      e_u[i] = g_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&c_st, 4, m, &e_u[0]);
    emlrtAssign(&h_y, m);
    d_st.site = &d_emlrtRSI;
    b_error(&d_st, b_y, getString(&d_st, message(&d_st, e_y, h_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
  }

  if (obj->IKInternal.isInitialized != 1) {
    d_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    obj->IKInternal.isSetupComplete = false;
    if (obj->IKInternal.isInitialized != 0) {
      for (i = 0; i < 51; i++) {
        d_u[i] = f_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&e_st, 51, m, &d_u[0]);
      emlrtAssign(&d_y, m);
      for (i = 0; i < 51; i++) {
        d_u[i] = f_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv6[0]);
      emlrtInitCharArrayR2013a(&e_st, 51, m, &d_u[0]);
      emlrtAssign(&g_y, m);
      for (i = 0; i < 5; i++) {
        h_u[i] = i_u[i];
      }

      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv8[0]);
      emlrtInitCharArrayR2013a(&e_st, 5, m, &h_u[0]);
      emlrtAssign(&i_y, m);
      f_st.site = &d_emlrtRSI;
      b_error(&f_st, d_y, getString(&f_st, message(&f_st, g_y, i_y, &emlrtMCI),
               &emlrtMCI), &emlrtMCI);
    }

    emxInit_real_T(&A, 2);
    obj->IKInternal.isInitialized = 1;
    f_st.site = &d_emlrtRSI;
    g_st.site = &le_emlrtRSI;
    n = obj->IKInternal.RigidBodyTreeInternal->PositionNumber;
    i = A->size[0] * A->size[1];
    d2 = emlrtNonNegativeCheckR2012b(n, &t_emlrtDCI, &g_st);
    A->size[0] = (int32_T)emlrtIntegerCheckR2012b(d2, &s_emlrtDCI, &g_st);
    A->size[1] = (int32_T)emlrtIntegerCheckR2012b(2.0 * n, &u_emlrtDCI, &g_st);
    emxEnsureCapacity_real_T(A, i);
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(n, &s_emlrtDCI, &g_st) * (int32_T)
      emlrtIntegerCheckR2012b(2.0 * n, &u_emlrtDCI, &g_st) - 1;
    for (i = 0; i <= loop_ub; i++) {
      A->data[i] = 0.0;
    }

    emxInit_real_T1(&b_b, 1);
    i = b_b->size[0];
    b_b->size[0] = (int32_T)emlrtIntegerCheckR2012b(2.0 * n, &v_emlrtDCI, &g_st);
    emxEnsureCapacity_real_T1(b_b, i);
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(2.0 * n, &v_emlrtDCI, &g_st);
    for (i = 0; i < loop_ub; i++) {
      b_b->data[i] = 0.0;
    }

    n = 1.0;
    b_m = 1.0;
    d2 = obj->IKInternal.RigidBodyTreeInternal->NumBodies;
    i = (int32_T)d2 - 1;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, d2, mxDOUBLE_CLASS, (int32_T)d2,
      &e_emlrtRTEI, &g_st);
    emxInit_real_T(&r, 2);
    emxInit_real_T(&r1, 2);
    for (b_i = 0; b_i <= i; b_i++) {
      h_st.site = &oe_emlrtRSI;
      c_obj = b_obj->RigidBodyTreeInternal->Bodies[emlrtDynamicBoundsCheckR2012b
        (b_i, 0, 3, &y_emlrtBCI, &h_st)];
      if (c_obj->Index == 0.0) {
        i_st.site = &ad_emlrtRSI;
        error(&i_st);
      }

      joint = c_obj->JointInternal;
      pnum = joint->PositionNumber;
      if (!e_strcmp(joint->Type)) {
        d2 = (n + pnum) - 1.0;
        if (n > d2) {
          i1 = 0;
          i2 = -1;
        } else {
          i1 = A->size[0];
          i2 = (int32_T)emlrtIntegerCheckR2012b(n, &k_emlrtDCI, &g_st);
          i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &q_emlrtBCI, &g_st) - 1;
          i2 = A->size[0];
          i3 = (int32_T)emlrtIntegerCheckR2012b(d2, &l_emlrtDCI, &g_st);
          i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &r_emlrtBCI, &g_st) - 1;
        }

        d2 = (b_m + pnum) - 1.0;
        if (b_m > d2) {
          i3 = 0;
          i4 = -1;
        } else {
          i3 = A->size[1];
          i4 = (int32_T)emlrtIntegerCheckR2012b(b_m, &m_emlrtDCI, &g_st);
          i3 = emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &s_emlrtBCI, &g_st) - 1;
          i4 = A->size[1];
          i5 = (int32_T)emlrtIntegerCheckR2012b(d2, &n_emlrtDCI, &g_st);
          i4 = emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &t_emlrtBCI, &g_st) - 1;
        }

        h_st.site = &pe_emlrtRSI;
        b_eye(&h_st, pnum, r1);
        varargout_2_Status_size[0] = (i2 - i1) + 1;
        varargout_2_Status_size[1] = (i4 - i3) + 1;
        emlrtSubAssignSizeCheckR2012b(varargout_2_Status_size, 2, *(int32_T (*)
          [2])r1->size, 2, &b_emlrtECI, &g_st);
        loop_ub = r1->size[1];
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_loop_ub = r1->size[0];
          for (i4 = 0; i4 < b_loop_ub; i4++) {
            A->data[(i1 + i4) + A->size[0] * (i3 + i2)] = r1->data[i4 + r1->
              size[0] * i2];
          }
        }

        d2 = (n + pnum) - 1.0;
        if (n > d2) {
          i1 = 0;
          i2 = -1;
        } else {
          i1 = A->size[0];
          i2 = (int32_T)emlrtIntegerCheckR2012b(n, &o_emlrtDCI, &g_st);
          i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &u_emlrtBCI, &g_st) - 1;
          i2 = A->size[0];
          i3 = (int32_T)emlrtIntegerCheckR2012b(d2, &p_emlrtDCI, &g_st);
          i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &v_emlrtBCI, &g_st) - 1;
        }

        d2 = b_m + pnum;
        d3 = (b_m + 2.0 * pnum) - 1.0;
        if (d2 > d3) {
          i3 = 0;
          i4 = -1;
        } else {
          i3 = A->size[1];
          i4 = (int32_T)emlrtIntegerCheckR2012b(d2, &q_emlrtDCI, &g_st);
          i3 = emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &w_emlrtBCI, &g_st) - 1;
          i4 = A->size[1];
          i5 = (int32_T)emlrtIntegerCheckR2012b(d3, &r_emlrtDCI, &g_st);
          i4 = emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &x_emlrtBCI, &g_st) - 1;
        }

        h_st.site = &qe_emlrtRSI;
        b_eye(&h_st, pnum, r1);
        i5 = r1->size[0] * r1->size[1];
        b_loop_ub = r1->size[0] * r1->size[1];
        emxEnsureCapacity_real_T(r1, b_loop_ub);
        loop_ub = i5 - 1;
        for (i5 = 0; i5 <= loop_ub; i5++) {
          r1->data[i5] = -r1->data[i5];
        }

        varargout_2_Status_size[0] = (i2 - i1) + 1;
        varargout_2_Status_size[1] = (i4 - i3) + 1;
        emlrtSubAssignSizeCheckR2012b(varargout_2_Status_size, 2, *(int32_T (*)
          [2])r1->size, 2, &c_emlrtECI, &g_st);
        loop_ub = r1->size[1];
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_loop_ub = r1->size[0];
          for (i4 = 0; i4 < b_loop_ub; i4++) {
            A->data[(i1 + i4) + A->size[0] * (i3 + i2)] = r1->data[i4 + r1->
              size[0] * i2];
          }
        }

        h_st.site = &re_emlrtRSI;
        i1 = r->size[0] * r->size[1];
        r->size[0] = joint->PositionLimitsInternal->size[0];
        r->size[1] = 2;
        emxEnsureCapacity_real_T(r, i1);
        loop_ub = (joint->PositionLimitsInternal->size[0] << 1) - 1;
        for (i1 = 0; i1 <= loop_ub; i1++) {
          r->data[i1] = joint->PositionLimitsInternal->data[i1];
        }

        i1 = r->size[0] << 1;
        emlrtDynamicBoundsCheckR2012b(2, 1, i1, &o_emlrtBCI, &g_st);
        i1 = b_b->size[0];
        i2 = (int32_T)emlrtIntegerCheckR2012b(b_m, &y_emlrtDCI, &g_st);
        b_b->data[emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ab_emlrtBCI, &g_st)
          - 1] = r->data[1];
        h_st.site = &se_emlrtRSI;
        i1 = r->size[0] * r->size[1];
        r->size[0] = joint->PositionLimitsInternal->size[0];
        r->size[1] = 2;
        emxEnsureCapacity_real_T(r, i1);
        loop_ub = (joint->PositionLimitsInternal->size[0] << 1) - 1;
        for (i1 = 0; i1 <= loop_ub; i1++) {
          r->data[i1] = joint->PositionLimitsInternal->data[i1];
        }

        i1 = r->size[0] << 1;
        emlrtDynamicBoundsCheckR2012b(1, 1, i1, &p_emlrtBCI, &g_st);
        i1 = b_b->size[0];
        b_b->data[emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_m + 1U), 1,
          i1, &bb_emlrtBCI, &g_st) - 1] = -r->data[0];
        b_m += 2.0 * pnum;
      }

      n += pnum;
    }

    emxFree_real_T(&r1);
    emxFree_real_T(&r);
    i = A->size[0] * A->size[1];
    i1 = obj->IKInternal.Solver->ConstraintMatrix->size[0] *
      obj->IKInternal.Solver->ConstraintMatrix->size[1];
    obj->IKInternal.Solver->ConstraintMatrix->size[0] = A->size[0];
    obj->IKInternal.Solver->ConstraintMatrix->size[1] = A->size[1];
    emxEnsureCapacity_real_T(obj->IKInternal.Solver->ConstraintMatrix, i1);
    loop_ub = i - 1;
    for (i = 0; i <= loop_ub; i++) {
      obj->IKInternal.Solver->ConstraintMatrix->data[i] = A->data[i];
    }

    emxFree_real_T(&A);
    i = obj->IKInternal.Solver->ConstraintBound->size[0];
    obj->IKInternal.Solver->ConstraintBound->size[0] = b_b->size[0];
    emxEnsureCapacity_real_T1(obj->IKInternal.Solver->ConstraintBound, i);
    loop_ub = b_b->size[0];
    for (i = 0; i < loop_ub; i++) {
      obj->IKInternal.Solver->ConstraintBound->data[i] = b_b->data[i];
    }

    g_st.site = &me_emlrtRSI;
    RigidBodyTree_get_JointPositionLimits(&g_st,
      obj->IKInternal.RigidBodyTreeInternal, obj->IKInternal.Limits);
    g_st.site = &ne_emlrtRSI;
    h_st.site = &we_emlrtRSI;
    i_st.site = &xe_emlrtRSI;
    obj->IKInternal.Solver->ExtraArgs = &b_obj->_pobj0;
    for (i = 0; i < 36; i++) {
      obj->IKInternal.Solver->ExtraArgs->WeightMatrix[i] = 0.0;
    }

    obj->IKInternal.Solver->ExtraArgs->Robot =
      obj->IKInternal.RigidBodyTreeInternal;
    for (i = 0; i < 16; i++) {
      b_I[i] = 0;
    }

    for (b_loop_ub = 0; b_loop_ub < 4; b_loop_ub++) {
      b_I[b_loop_ub + (b_loop_ub << 2)] = 1;
    }

    for (i = 0; i < 16; i++) {
      obj->IKInternal.Solver->ExtraArgs->Tform[i] = (real_T)b_I[i];
    }

    obj->IKInternal.Solver->ExtraArgs->BodyName->size[0] = 1;
    obj->IKInternal.Solver->ExtraArgs->BodyName->size[1] = 0;
    i = obj->IKInternal.Solver->ExtraArgs->ErrTemp->size[0];
    obj->IKInternal.Solver->ExtraArgs->ErrTemp->size[0] = 6;
    emxEnsureCapacity_real_T1(obj->IKInternal.Solver->ExtraArgs->ErrTemp, i);
    for (i = 0; i < 6; i++) {
      obj->IKInternal.Solver->ExtraArgs->ErrTemp->data[i] = 0.0;
    }

    obj->IKInternal.Solver->ExtraArgs->CostTemp = 0.0;
    i = b_b->size[0];
    d2 = obj->IKInternal.RigidBodyTreeInternal->PositionNumber;
    d2 = emlrtNonNegativeCheckR2012b(d2, &x_emlrtDCI, &g_st);
    b_b->size[0] = (int32_T)emlrtIntegerCheckR2012b(d2, &w_emlrtDCI, &g_st);
    emxEnsureCapacity_real_T1(b_b, i);
    d2 = obj->IKInternal.RigidBodyTreeInternal->PositionNumber;
    d2 = emlrtNonNegativeCheckR2012b(d2, &x_emlrtDCI, &g_st);
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(d2, &w_emlrtDCI, &g_st);
    for (i = 0; i < loop_ub; i++) {
      b_b->data[i] = 0.0;
    }

    i = b_b->size[0];
    emlrtDimSizeGeqCheckR2012b(28, i, &d_emlrtECI, &g_st);
    i = obj->IKInternal.Solver->ExtraArgs->GradTemp->size[0];
    obj->IKInternal.Solver->ExtraArgs->GradTemp->size[0] = b_b->size[0];
    emxEnsureCapacity_real_T1(obj->IKInternal.Solver->ExtraArgs->GradTemp, i);
    loop_ub = b_b->size[0];
    for (i = 0; i < loop_ub; i++) {
      obj->IKInternal.Solver->ExtraArgs->GradTemp->data[i] = b_b->data[i];
    }

    emxFree_real_T(&b_b);
    obj->IKInternal.isSetupComplete = true;
  }

  d_st.site = &d_emlrtRSI;
  inverseKinematics_stepImpl(moduleInstance, &d_st, &obj->IKInternal, b_u0, b_u1,
    b_u2, varargout_1, &d, &d1, &n, varargout_2_Status_data,
    varargout_2_Status_size);
  *y1_PoseErrorNorm = d1;
  *y1_Iterations = d;
  d2 = muDoubleScalarRound(n);
  if (d2 < 65536.0) {
    if (d2 >= 0.0) {
      *y1_ExitFlag = (uint16_T)d2;
    } else {
      *y1_ExitFlag = 0U;
    }
  } else if (d2 >= 65536.0) {
    *y1_ExitFlag = MAX_uint16_T;
  } else {
    *y1_ExitFlag = 0U;
  }

  b_bool = false;
  if (varargout_2_Status_size[1] == 7) {
    b_loop_ub = 1;
    do {
      exitg1 = 0;
      if (b_loop_ub - 1 < 7) {
        if (varargout_2_Status_data[b_loop_ub - 1] != cv[b_loop_ub - 1]) {
          exitg1 = 1;
        } else {
          b_loop_ub++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    *y1_Status = 1U;
  } else {
    *y1_Status = 2U;
  }

  for (i = 0; i < 3; i++) {
    c_y0[i] = varargout_1[i];
  }
}

static void b_eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *b_I)
{
  static const int32_T iv[2] = { 1, 28 };

  static const int32_T iv1[2] = { 1, 21 };

  static const int32_T iv2[2] = { 1, 28 };

  static const int32_T iv3[2] = { 1, 21 };

  static char_T c_u[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  static char_T e_u[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  real_T n;
  real_T t;
  int32_T b_m;
  int32_T i;
  int32_T loop_ub;
  char_T b_u[28];
  char_T d_u[21];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &te_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (varargin_1 < 0.0) {
    t = 0.0;
  } else {
    t = varargin_1;
  }

  b_st.site = &ue_emlrtRSI;
  if ((t != muDoubleScalarFloor(t)) || muDoubleScalarIsInf(t) || (t >
       2.147483647E+9)) {
    for (i = 0; i < 28; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 28, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 28; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 28, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    d_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MIN_int32_T;
    emlrtAssign(&d_y, m);
    f_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = MAX_int32_T;
    emlrtAssign(&f_y, m);
    c_st.site = &um_emlrtRSI;
    b_error(&c_st, y, getString(&c_st, d_message(&c_st, c_y, d_y, f_y,
              &m_emlrtMCI), &m_emlrtMCI), &m_emlrtMCI);
  }

  if (t <= 0.0) {
    n = 0.0;
  } else {
    n = t;
  }

  if (!(n <= 2.147483647E+9)) {
    for (i = 0; i < 21; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 21; i++) {
      d_u[i] = e_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &d_u[0]);
    emlrtAssign(&e_y, m);
    c_st.site = &tm_emlrtRSI;
    b_error(&c_st, b_y, getString(&c_st, b_message(&c_st, e_y, &n_emlrtMCI),
             &n_emlrtMCI), &n_emlrtMCI);
  }

  b_m = (int32_T)t - 1;
  i = b_I->size[0] * b_I->size[1];
  b_I->size[0] = (int32_T)t;
  b_I->size[1] = (int32_T)t;
  emxEnsureCapacity_real_T(b_I, i);
  loop_ub = (int32_T)t * (int32_T)t - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_I->data[i] = 0.0;
  }

  if ((int32_T)t > 0) {
    for (loop_ub = 0; loop_ub <= b_m; loop_ub++) {
      b_I->data[loop_ub + b_I->size[0] * loop_ub] = 1.0;
    }
  }
}

static void RigidBodyTree_get_JointPositionLimits(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, emxArray_real_T *limits)
{
  emlrtStack st;
  emxArray_real_T *r;
  rigidBodyJoint *b_obj;
  robotics_manip_internal_RigidBody_1 *body;
  real_T d;
  real_T k;
  real_T pnum;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  i = limits->size[0] * limits->size[1];
  d = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &db_emlrtDCI, sp);
  limits->size[0] = (int32_T)emlrtIntegerCheckR2012b(d, &cb_emlrtDCI, sp);
  limits->size[1] = 2;
  emxEnsureCapacity_real_T(limits, i);
  d = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &db_emlrtDCI, sp);
  loop_ub = ((int32_T)emlrtIntegerCheckR2012b(d, &cb_emlrtDCI, sp) << 1) - 1;
  for (i = 0; i <= loop_ub; i++) {
    limits->data[i] = 0.0;
  }

  k = 1.0;
  d = obj->NumBodies;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &f_emlrtRTEI, sp);
  emxInit_real_T(&r, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 3, &eb_emlrtBCI, sp)];
    if (!e_strcmp(body->JointInternal->Type)) {
      pnum = body->JointInternal->PositionNumber;
      d = (k + pnum) - 1.0;
      if (k > d) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = limits->size[0];
        i2 = (int32_T)emlrtIntegerCheckR2012b(k, &ab_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &cb_emlrtBCI, sp) - 1;
        i2 = limits->size[0];
        i3 = (int32_T)emlrtIntegerCheckR2012b(d, &bb_emlrtDCI, sp);
        i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &db_emlrtBCI, sp) - 1;
      }

      st.site = &ve_emlrtRSI;
      b_obj = body->JointInternal;
      i3 = r->size[0] * r->size[1];
      r->size[0] = b_obj->PositionLimitsInternal->size[0];
      r->size[1] = 2;
      emxEnsureCapacity_real_T(r, i3);
      loop_ub = (b_obj->PositionLimitsInternal->size[0] << 1) - 1;
      for (i3 = 0; i3 <= loop_ub; i3++) {
        r->data[i3] = b_obj->PositionLimitsInternal->data[i3];
      }

      iv[0] = (i2 - i1) + 1;
      iv[1] = 2;
      emlrtSubAssignSizeCheckR2012b(iv, 2, *(int32_T (*)[2])r->size, 2,
        &e_emlrtECI, sp);
      for (i2 = 0; i2 < 2; i2++) {
        loop_ub = r->size[0];
        for (i3 = 0; i3 < loop_ub; i3++) {
          limits->data[(i1 + i3) + limits->size[0] * i2] = r->data[i3 + r->size
            [0] * i2];
        }
      }

      k += pnum;
    }
  }

  emxFree_real_T(&r);
}

static void inverseKinematics_stepImpl(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T tform[16],
  real_T weights[6], real_T initialGuess[3], real_T QSol[3], real_T
  *solutionInfo_Iterations, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2])
{
  static const int32_T iv[2] = { 1, 55 };

  static const int32_T iv1[2] = { 1, 55 };

  static const int32_T iv2[2] = { 1, 46 };

  static const int32_T iv3[2] = { 1, 46 };

  static const int32_T iv4[2] = { 1, 7 };

  static char_T c_u[55] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'i', 'n', 'v', 'e', 'r',
    's', 'e', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i', 'c', 's', ':', 'E', 'n',
    'd', 'E', 'f', 'f', 'e', 'c', 't', 'o', 'r', 'I', 's', 'B', 'a', 's', 'e' };

  static char_T e_u[46] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'B', 'o', 'd', 'y', 'N', 'o',
    't', 'F', 'o', 'u', 'n', 'd' };

  static char_T g_u[7] = { 'L', 'i', 'n', 'k', '_', 'E', 'E' };

  static int8_T iv5[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *b_basename;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  robotics_manip_internal_IKExtraArgs *args;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  robotics_manip_internal_RigidBody_1 *c_obj;
  real_T weightMatrix[36];
  real_T R[9];
  real_T dv[9];
  real_T x[9];
  real_T maxval[3];
  real_T absxk;
  real_T d;
  real_T d1;
  real_T d2;
  real_T ex;
  real_T scale;
  real_T t;
  int32_T b_i;
  int32_T bid;
  int32_T i;
  int32_T idx;
  char_T b_u[55];
  char_T d_u[46];
  char_T f_u[7];
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emxInit_char_T(&b_basename, 2);
  st.site = &ye_emlrtRSI;
  b_st.site = &bf_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  c_st.site = &bc_emlrtRSI;
  i = b_basename->size[0] * b_basename->size[1];
  b_basename->size[0] = 1;
  b_basename->size[1] = b_obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_basename, i);
  idx = b_obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= idx; i++) {
    b_basename->data[i] = b_obj->Base.NameInternal->data[i];
  }

  if (f_strcmp(b_basename)) {
    b_st.site = &cf_emlrtRSI;
    for (i = 0; i < 55; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 55, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 55; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 55, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    c_st.site = &sm_emlrtRSI;
    b_error(&c_st, y, getString(&c_st, b_message(&c_st, b_y, &o_emlrtMCI),
             &o_emlrtMCI), &o_emlrtMCI);
  }

  b_st.site = &df_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  c_st.site = &xc_emlrtRSI;
  bid = -2;
  d_st.site = &hc_emlrtRSI;
  i = b_basename->size[0] * b_basename->size[1];
  b_basename->size[0] = 1;
  b_basename->size[1] = b_obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(b_basename, i);
  idx = b_obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= idx; i++) {
    b_basename->data[i] = b_obj->Base.NameInternal->data[i];
  }

  if (f_strcmp(b_basename)) {
    bid = -1;
  } else {
    ex = b_obj->NumBodies;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, ex, mxDOUBLE_CLASS, (int32_T)ex,
      &c_emlrtRTEI, &c_st);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)ex - 1)) {
      d_st.site = &ic_emlrtRSI;
      c_obj = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 3, &b_emlrtBCI,
        &d_st)];
      i = b_basename->size[0] * b_basename->size[1];
      b_basename->size[0] = 1;
      b_basename->size[1] = c_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(b_basename, i);
      idx = c_obj->NameInternal->size[1] - 1;
      for (i = 0; i <= idx; i++) {
        b_basename->data[i] = c_obj->NameInternal->data[i];
      }

      if (f_strcmp(b_basename)) {
        bid = b_i;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }

  emxFree_char_T(&b_basename);
  if (bid + 1 == -1) {
    c_st.site = &yc_emlrtRSI;
    for (i = 0; i < 46; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 46; i++) {
      d_u[i] = e_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &d_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 7; i++) {
      f_u[i] = g_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&c_st, 7, m, &f_u[0]);
    emlrtAssign(&e_y, m);
    d_st.site = &xl_emlrtRSI;
    b_error(&d_st, c_y, getString(&d_st, message(&d_st, d_y, e_y, &e_emlrtMCI),
             &e_emlrtMCI), &e_emlrtMCI);
  }

  for (i = 0; i < 3; i++) {
    for (idx = 0; idx < 3; idx++) {
      R[idx + 3 * i] = tform[idx + (i << 2)];
    }
  }

  b_st.site = &ef_emlrtRSI;
  inv(&b_st, R, dv);
  for (i = 0; i < 3; i++) {
    for (idx = 0; idx < 3; idx++) {
      x[idx + 3 * i] = dv[idx + 3 * i] - R[i + 3 * idx];
    }
  }

  for (bid = 0; bid < 9; bid++) {
    R[bid] = muDoubleScalarAbs(x[bid]);
  }

  for (idx = 0; idx < 3; idx++) {
    maxval[idx] = R[3 * idx];
    for (b_i = 0; b_i < 2; b_i++) {
      if (muDoubleScalarIsNaN(R[(b_i + 3 * idx) + 1])) {
        p = false;
      } else if (muDoubleScalarIsNaN(maxval[idx])) {
        p = true;
      } else {
        p = (maxval[idx] < R[(b_i + 3 * idx) + 1]);
      }

      if (p) {
        maxval[idx] = R[(b_i + 3 * idx) + 1];
      }
    }
  }

  if (!muDoubleScalarIsNaN(maxval[0])) {
    idx = 1;
  } else {
    idx = 0;
    bid = 2;
    exitg1 = false;
    while ((!exitg1) && (bid < 4)) {
      if (!muDoubleScalarIsNaN(maxval[bid - 1])) {
        idx = bid;
        exitg1 = true;
      } else {
        bid++;
      }
    }
  }

  if (idx == 0) {
    ex = maxval[0];
  } else {
    ex = maxval[idx - 1];
    for (bid = idx + 1; bid < 4; bid++) {
      if (ex < maxval[bid - 1]) {
        ex = maxval[bid - 1];
      }
    }
  }

  guard1 = false;
  if (ex > 0.0001) {
    guard1 = true;
  } else {
    ex = 0.0;
    scale = 3.3121686421112381E-170;
    for (bid = 0; bid < 4; bid++) {
      absxk = muDoubleScalarAbs(tform[(bid << 2) + 3] - (real_T)iv5[bid]);
      if (absxk > scale) {
        t = scale / absxk;
        ex = ex * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        ex += t * t;
      }
    }

    ex = scale * muDoubleScalarSqrt(ex);
    if (ex > 1.0E-7) {
      guard1 = true;
    }
  }

  if (guard1) {
    b_st.site = &ff_emlrtRSI;
    c_st.site = &yd_emlrtRSI;
    d_warning(&c_st);
  }

  b_st.site = &gf_emlrtRSI;
  c_validateattributes(&b_st, weights);
  for (i = 0; i < 36; i++) {
    weightMatrix[i] = 0.0;
  }

  for (idx = 0; idx < 6; idx++) {
    weightMatrix[idx + 6 * idx] = weights[idx];
  }

  args = obj->Solver->ExtraArgs;
  for (i = 0; i < 36; i++) {
    args->WeightMatrix[i] = weightMatrix[i];
  }

  i = args->BodyName->size[0] * args->BodyName->size[1];
  args->BodyName->size[0] = 1;
  args->BodyName->size[1] = 7;
  emxEnsureCapacity_char_T(args->BodyName, i);
  for (i = 0; i < 7; i++) {
    args->BodyName->data[i] = g_u[i];
  }

  for (i = 0; i < 16; i++) {
    args->Tform[i] = tform[i];
  }

  st.site = &af_emlrtRSI;
  inverseKinematics_solve(moduleInstance, &st, obj, initialGuess, QSol, &d, &ex,
    &d1, &d2, solutionInfo_Status_data, solutionInfo_Status_size);
  *solutionInfo_ExitFlag = d2;
  *solutionInfo_PoseErrorNorm = d1;
  *solutionInfo_Iterations = d;
}

static boolean_T f_strcmp(emxArray_char_T *a)
{
  static char_T cv[7] = { 'L', 'i', 'n', 'k', '_', 'E', 'E' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] == 7) {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 7) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void inv(const emlrtStack *sp, real_T x[9], real_T y[9])
{
  static const int32_T iv[2] = { 1, 6 };

  static char_T b_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  real_T b_x[9];
  real_T absx11;
  real_T absx21;
  real_T absx31;
  int32_T itmp;
  int32_T p1;
  int32_T p2;
  int32_T p3;
  char_T str[14];
  char_T rfmt[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  memcpy(&b_x[0], &x[0], 9U * sizeof(real_T));
  p1 = 1;
  p2 = 3;
  p3 = 6;
  absx11 = muDoubleScalarAbs(x[0]);
  absx21 = muDoubleScalarAbs(x[1]);
  absx31 = muDoubleScalarAbs(x[2]);
  if ((absx21 > absx11) && (absx21 > absx31)) {
    p1 = 4;
    p2 = 0;
    b_x[0] = x[1];
    b_x[1] = x[0];
    b_x[3] = x[4];
    b_x[4] = x[3];
    b_x[6] = x[7];
    b_x[7] = x[6];
  } else {
    if (absx31 > absx11) {
      p1 = 7;
      p3 = 0;
      b_x[0] = x[2];
      b_x[2] = x[0];
      b_x[3] = x[5];
      b_x[5] = x[3];
      b_x[6] = x[8];
      b_x[8] = x[6];
    }
  }

  absx11 = b_x[1] / b_x[0];
  b_x[1] /= b_x[0];
  absx21 = b_x[2] / b_x[0];
  b_x[2] /= b_x[0];
  b_x[4] -= absx11 * b_x[3];
  b_x[5] -= absx21 * b_x[3];
  b_x[7] -= absx11 * b_x[6];
  b_x[8] -= absx21 * b_x[6];
  if (muDoubleScalarAbs(b_x[5]) > muDoubleScalarAbs(b_x[4])) {
    itmp = p2;
    p2 = p3;
    p3 = itmp;
    b_x[1] = absx21;
    b_x[2] = absx11;
    absx11 = b_x[4];
    b_x[4] = b_x[5];
    b_x[5] = absx11;
    absx11 = b_x[7];
    b_x[7] = b_x[8];
    b_x[8] = absx11;
  }

  absx11 = b_x[5] / b_x[4];
  b_x[5] /= b_x[4];
  b_x[8] -= absx11 * b_x[7];
  absx11 = (b_x[5] * b_x[1] - b_x[2]) / b_x[8];
  absx21 = -(b_x[1] + b_x[7] * absx11) / b_x[4];
  y[p1 - 1] = ((1.0 - b_x[3] * absx21) - b_x[6] * absx11) / b_x[0];
  y[p1] = absx21;
  y[p1 + 1] = absx11;
  absx11 = -b_x[5] / b_x[8];
  absx21 = (1.0 - b_x[7] * absx11) / b_x[4];
  y[p2] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
  y[p2 + 1] = absx21;
  y[p2 + 2] = absx11;
  absx11 = 1.0 / b_x[8];
  absx21 = -b_x[7] * absx11 / b_x[4];
  y[p3] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
  y[p3 + 1] = absx21;
  y[p3 + 2] = absx11;
  st.site = &hf_emlrtRSI;
  absx11 = b_norm(x);
  absx21 = b_norm(y);
  absx31 = 1.0 / (absx11 * absx21);
  if ((absx11 == 0.0) || (absx21 == 0.0) || (absx31 == 0.0)) {
    b_st.site = &if_emlrtRSI;
    b_warning(&b_st);
  } else {
    if (muDoubleScalarIsNaN(absx31) || (absx31 < 2.2204460492503131E-16)) {
      b_st.site = &jf_emlrtRSI;
      for (p1 = 0; p1 < 6; p1++) {
        rfmt[p1] = b_rfmt[p1];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
      emlrtAssign(&b_y, m);
      c_y = NULL;
      m = emlrtCreateDoubleScalar(absx31);
      emlrtAssign(&c_y, m);
      c_st.site = &ym_emlrtRSI;
      emlrt_marshallIn(&c_st, b_sprintf(&c_st, b_y, c_y, &p_emlrtMCI),
                       "<output of sprintf>", str);
      b_st.site = &jf_emlrtRSI;
      c_warning(&b_st, str);
    }
  }
}

static real_T b_norm(real_T x[9])
{
  real_T s;
  real_T y;
  int32_T i;
  int32_T j;
  boolean_T exitg1;
  y = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 3)) {
    s = 0.0;
    for (i = 0; i < 3; i++) {
      s += muDoubleScalarAbs(x[i + 3 * j]);
    }

    if (muDoubleScalarIsNaN(s)) {
      y = rtNaN;
      exitg1 = true;
    } else {
      if (s > y) {
        y = s;
      }

      j++;
    }
  }

  return y;
}

static void b_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 21 };

  static char_T b_msgID[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i', 'n',
    'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[21];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 21; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, 21, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &xm_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &k_emlrtMCI), &l_emlrtMCI);
}

static void c_warning(const emlrtStack *sp, char_T varargin_1[14])
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 33 };

  static const int32_T iv3[2] = { 1, 14 };

  static char_T b_msgID[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'l', 'l', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n',
    'e', 'd', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[33];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 33; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, 33, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a(sp, 14, m, &varargin_1[0]);
  emlrtAssign(&d_y, m);
  st.site = &xm_emlrtRSI;
  b_feval(&st, y, c_feval(&st, b_y, c_y, d_y, &k_emlrtMCI), &l_emlrtMCI);
}

static void d_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 65 };

  static char_T b_msgID[65] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'i', 'n', 'v', 'e', 'r',
    's', 'e', 'k', 'i', 'n', 'e', 'm', 'a', 't', 'i', 'c', 's', ':', 'H', 'o',
    'm', 'o', 'g', 'e', 'n', 'e', 'o', 'u', 's', 'T', 'r', 'a', 'n', 's', 'f',
    'o', 'r', 'm', 'I', 'n', 'v', 'a', 'l', 'i', 'd' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[65];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&msgID[0], &b_msgID[0], 65U * sizeof(char_T));
  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, 65, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &xm_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &k_emlrtMCI), &l_emlrtMCI);
}

static void c_validateattributes(const emlrtStack *sp, real_T a[6])
{
  static const int32_T iv[2] = { 1, 33 };

  static const int32_T iv1[2] = { 1, 46 };

  static const int32_T iv2[2] = { 1, 38 };

  static const int32_T iv3[2] = { 1, 7 };

  static const int32_T iv4[2] = { 1, 51 };

  static const int32_T iv5[2] = { 1, 33 };

  static const int32_T iv6[2] = { 1, 7 };

  static const int32_T iv7[2] = { 1, 46 };

  static const int32_T iv8[2] = { 1, 7 };

  static char_T k_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T f_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T m_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T g_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T l_u[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'e', 't',
    'P', 'o', 's', 'e', 'G', 'o', 'a', 'l', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T j_u[7] = { 'w', 'e', 'i', 'g', 'h', 't', 's' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  int32_T k;
  char_T i_u[51];
  char_T d_u[46];
  char_T e_u[38];
  char_T b_u[33];
  char_T h_u[7];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!muDoubleScalarIsNaN(a[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 33; k++) {
      b_u[k] = c_u[k];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 33, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = f_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 46, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 7; k++) {
      h_u[k] = j_u[k];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 7, m, &h_u[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &vl_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, message(&b_st, b_y, d_y, &f_emlrtMCI),
             &f_emlrtMCI), &f_emlrtMCI);
  }

  st.site = &fc_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!(a[k] < 0.0)) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 38; k++) {
      e_u[k] = g_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 38, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    for (k = 0; k < 51; k++) {
      i_u[k] = k_u[k];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &i_u[0]);
    emlrtAssign(&e_y, m);
    for (k = 0; k < 7; k++) {
      h_u[k] = j_u[k];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&st, 7, m, &h_u[0]);
    emlrtAssign(&g_y, m);
    b_st.site = &wl_emlrtRSI;
    b_error(&b_st, c_y, getString(&b_st, message(&b_st, e_y, g_y, &q_emlrtMCI),
             &q_emlrtMCI), &q_emlrtMCI);
  }

  st.site = &fc_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if ((!muDoubleScalarIsInf(a[k])) && (!muDoubleScalarIsNaN(a[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (k = 0; k < 33; k++) {
      b_u[k] = l_u[k];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&st, 33, m, &b_u[0]);
    emlrtAssign(&f_y, m);
    for (k = 0; k < 46; k++) {
      d_u[k] = m_u[k];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&st, 46, m, &d_u[0]);
    emlrtAssign(&h_y, m);
    for (k = 0; k < 7; k++) {
      h_u[k] = j_u[k];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&st, 7, m, &h_u[0]);
    emlrtAssign(&i_y, m);
    b_st.site = &ul_emlrtRSI;
    b_error(&b_st, f_y, getString(&b_st, message(&b_st, h_y, i_y, &g_emlrtMCI),
             &g_emlrtMCI), &g_emlrtMCI);
  }
}

static void inverseKinematics_solve(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp, inverseKinematics *obj, real_T
  initialGuess[3], real_T QSol[3], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_NumRandomRestarts, real_T *solutionInfo_PoseErrorNorm, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *b_endEffectorName;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *b_bodyIndices;
  emxArray_real_T *bodyIndices;
  emxArray_real_T *positionIndices;
  emxArray_real_T *positionMap;
  emxArray_real_T *y;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  robotics_manip_internal_RigidBody_1 *body;
  real_T qvSolRaw[3];
  real_T a;
  real_T absa;
  real_T absb;
  real_T apnd;
  real_T bid;
  real_T cdiff;
  real_T d;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T idxCount;
  real_T numPositions;
  int32_T iv[2];
  int32_T sol_Status_size[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T nm1d2;
  int32_T trueCount;
  uint32_T c_i;
  char_T sol_Status_data[14];
  boolean_T b_b[3];
  boolean_T b_y;
  boolean_T exitg1;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  for (i = 0; i < 3; i++) {
    QSol[i] = initialGuess[i];
  }

  emxInit_char_T(&b_endEffectorName, 2);
  st.site = &kf_emlrtRSI;
  RigidBodyTree_validateConfigurationWithLimits(&st, obj->RigidBodyTreeInternal,
    QSol);
  st.site = &lf_emlrtRSI;
  NLPSolverInterface_solve(moduleInstance, &st, obj->Solver, QSol, qvSolRaw, &d,
    &d1, &d2, &d3, sol_Status_data, sol_Status_size);
  *solutionInfo_ExitFlag = d3;
  *solutionInfo_PoseErrorNorm = d2;
  *solutionInfo_NumRandomRestarts = d1;
  *solutionInfo_Iterations = d;
  st.site = &mf_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  b_i = b_endEffectorName->size[0] * b_endEffectorName->size[1];
  b_endEffectorName->size[0] = 1;
  b_endEffectorName->size[1] = obj->Solver->ExtraArgs->BodyName->size[1];
  emxEnsureCapacity_char_T(b_endEffectorName, b_i);
  nm1d2 = obj->Solver->ExtraArgs->BodyName->size[1] - 1;
  for (b_i = 0; b_i <= nm1d2; b_i++) {
    b_endEffectorName->data[b_i] = obj->Solver->ExtraArgs->BodyName->data[b_i];
  }

  emxInit_real_T1(&bodyIndices, 1);
  b_i = bodyIndices->size[0];
  bid = emlrtNonNegativeCheckR2012b(b_obj->NumBodies, &ib_emlrtDCI, &st);
  bodyIndices->size[0] = (int32_T)emlrtIntegerCheckR2012b(bid, &hb_emlrtDCI, &st);
  emxEnsureCapacity_real_T1(bodyIndices, b_i);
  bid = emlrtNonNegativeCheckR2012b(b_obj->NumBodies, &ib_emlrtDCI, &st);
  nm1d2 = (int32_T)emlrtIntegerCheckR2012b(bid, &hb_emlrtDCI, &st);
  for (b_i = 0; b_i < nm1d2; b_i++) {
    bodyIndices->data[b_i] = 0.0;
  }

  b_st.site = &jl_emlrtRSI;
  bid = RigidBodyTree_validateInputBodyName(&b_st, b_obj, b_endEffectorName);
  emxFree_char_T(&b_endEffectorName);
  if (bid == 0.0) {
    b_i = bodyIndices->size[0];
    bodyIndices->size[0] = 1;
    emxEnsureCapacity_real_T1(bodyIndices, b_i);
    bodyIndices->data[0] = 0.0;
  } else {
    body = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid - 1, 0, 3,
      &kb_emlrtBCI, &st)];
    c_i = 1U;
    while (body->ParentIndex != 0.0) {
      b_i = bodyIndices->size[0];
      bodyIndices->data[emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, b_i,
        &lb_emlrtBCI, &st) - 1] = body->Index;
      b_i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &jb_emlrtDCI,
        &st) - 1;
      body = b_obj->Bodies[emlrtDynamicBoundsCheckR2012b(b_i, 0, 3, &mb_emlrtBCI,
        &st)];
      c_i++;
    }

    if (1 > (int32_T)(c_i - 1U)) {
      nm1d2 = 0;
    } else {
      b_i = bodyIndices->size[0];
      emlrtDynamicBoundsCheckR2012b(1, 1, b_i, &jb_emlrtBCI, &st);
      b_i = bodyIndices->size[0];
      nm1d2 = emlrtDynamicBoundsCheckR2012b((int32_T)(c_i - 1U), 1, b_i,
        &ib_emlrtBCI, &st);
    }

    emxInit_real_T1(&b_bodyIndices, 1);
    iv[0] = 1;
    iv[1] = nm1d2;
    b_st.site = &kl_emlrtRSI;
    indexShapeCheck(&b_st, bodyIndices->size[0], iv);
    b_i = b_bodyIndices->size[0];
    b_bodyIndices->size[0] = nm1d2 + 2;
    emxEnsureCapacity_real_T1(b_bodyIndices, b_i);
    for (b_i = 0; b_i < nm1d2; b_i++) {
      b_bodyIndices->data[b_i] = bodyIndices->data[b_i];
    }

    b_bodyIndices->data[nm1d2] = body->Index;
    b_bodyIndices->data[nm1d2 + 1] = 0.0;
    b_i = bodyIndices->size[0];
    bodyIndices->size[0] = b_bodyIndices->size[0];
    emxEnsureCapacity_real_T1(bodyIndices, b_i);
    nm1d2 = b_bodyIndices->size[0];
    for (b_i = 0; b_i < nm1d2; b_i++) {
      bodyIndices->data[b_i] = b_bodyIndices->data[b_i];
    }

    emxFree_real_T(&b_bodyIndices);
  }

  st.site = &nf_emlrtRSI;
  b_obj = obj->RigidBodyTreeInternal;
  nm1d2 = bodyIndices->size[0] - 1;
  trueCount = 0;
  for (i = 0; i <= nm1d2; i++) {
    if (bodyIndices->data[i] != 0.0) {
      trueCount++;
    }
  }

  emxInit_int32_T1(&r, 1);
  b_i = r->size[0];
  r->size[0] = trueCount;
  emxEnsureCapacity_int32_T(r, b_i);
  trueCount = 0;
  for (i = 0; i <= nm1d2; i++) {
    if (bodyIndices->data[i] != 0.0) {
      r->data[trueCount] = i + 1;
      trueCount++;
    }
  }

  emxInit_real_T(&positionMap, 2);
  trueCount = bodyIndices->size[0];
  b_i = positionMap->size[0] * positionMap->size[1];
  positionMap->size[0] = r->size[0];
  positionMap->size[1] = 2;
  emxEnsureCapacity_real_T(positionMap, b_i);
  for (b_i = 0; b_i < 2; b_i++) {
    nm1d2 = r->size[0];
    for (i1 = 0; i1 < nm1d2; i1++) {
      k = r->data[i1];
      bid = bodyIndices->data[emlrtDynamicBoundsCheckR2012b(k, 1, trueCount,
        &ob_emlrtBCI, &st) - 1];
      k = (int32_T)emlrtIntegerCheckR2012b(bid, &kb_emlrtDCI, &st);
      positionMap->data[i1 + positionMap->size[0] * b_i] = b_obj->
        PositionDoFMap[(emlrtDynamicBoundsCheckR2012b(k, 1, 4, &nb_emlrtBCI, &st)
                        + (b_i << 2)) - 1];
    }
  }

  emxFree_int32_T(&r);
  emxFree_real_T(&bodyIndices);
  emxInit_real_T(&positionIndices, 2);
  b_i = positionIndices->size[0] * positionIndices->size[1];
  positionIndices->size[0] = 1;
  bid = emlrtNonNegativeCheckR2012b(b_obj->PositionNumber, &eb_emlrtDCI, &st);
  positionIndices->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid, &fb_emlrtDCI,
    &st);
  emxEnsureCapacity_real_T(positionIndices, b_i);
  bid = emlrtNonNegativeCheckR2012b(b_obj->PositionNumber, &eb_emlrtDCI, &st);
  nm1d2 = (int32_T)emlrtIntegerCheckR2012b(bid, &fb_emlrtDCI, &st) - 1;
  for (b_i = 0; b_i <= nm1d2; b_i++) {
    positionIndices->data[b_i] = 0.0;
  }

  idxCount = 0.0;
  b_i = positionMap->size[0] - 1;
  emxInit_int32_T(&r1, 2);
  emxInit_real_T(&y, 2);
  for (i = 0; i <= b_i; i++) {
    i1 = positionMap->size[0];
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, i1, &hb_emlrtBCI, &st);
    numPositions = (positionMap->data[i + positionMap->size[0]] -
                    positionMap->data[i]) + 1.0;
    if (numPositions > 0.0) {
      if (numPositions < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (muDoubleScalarIsInf(numPositions) && (1.0 == numPositions)) {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i1);
        y->data[0] = rtNaN;
      } else {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = (int32_T)muDoubleScalarFloor(numPositions - 1.0) + 1;
        emxEnsureCapacity_real_T(y, i1);
        nm1d2 = (int32_T)muDoubleScalarFloor(numPositions - 1.0);
        for (i1 = 0; i1 <= nm1d2; i1++) {
          y->data[i1] = (real_T)i1 + 1.0;
        }
      }

      i1 = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = y->size[1];
      emxEnsureCapacity_int32_T1(r1, i1);
      nm1d2 = y->size[1] - 1;
      trueCount = positionIndices->size[1];
      for (i1 = 0; i1 <= nm1d2; i1++) {
        bid = idxCount + y->data[i1];
        k = (int32_T)emlrtIntegerCheckR2012b(bid, &mb_emlrtDCI, &st);
        r1->data[i1] = emlrtDynamicBoundsCheckR2012b(k, 1, trueCount,
          &qb_emlrtBCI, &st);
      }

      a = positionMap->data[i];
      bid = positionMap->data[i + positionMap->size[0]];
      if (muDoubleScalarIsNaN(a) || muDoubleScalarIsNaN(bid)) {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i1);
        y->data[0] = rtNaN;
      } else if (positionMap->data[i + positionMap->size[0]] < positionMap->
                 data[i]) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if ((muDoubleScalarIsInf(a) || muDoubleScalarIsInf(bid)) &&
                 (positionMap->data[i] == positionMap->data[i +
                  positionMap->size[0]])) {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i1);
        y->data[0] = rtNaN;
      } else if (muDoubleScalarFloor(a) == positionMap->data[i]) {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = (int32_T)muDoubleScalarFloor(positionMap->data[i +
          positionMap->size[0]] - positionMap->data[i]) + 1;
        emxEnsureCapacity_real_T(y, i1);
        nm1d2 = (int32_T)muDoubleScalarFloor(positionMap->data[i +
          positionMap->size[0]] - positionMap->data[i]);
        for (i1 = 0; i1 <= nm1d2; i1++) {
          y->data[i1] = positionMap->data[i] + (real_T)i1;
        }
      } else {
        b_st.site = &ll_emlrtRSI;
        bid = muDoubleScalarFloor((positionMap->data[i + positionMap->size[0]] -
          positionMap->data[i]) + 0.5);
        apnd = positionMap->data[i] + bid;
        cdiff = apnd - positionMap->data[i + positionMap->size[0]];
        absa = muDoubleScalarAbs(positionMap->data[i]);
        absb = muDoubleScalarAbs(positionMap->data[i + positionMap->size[0]]);
        if (absa > absb) {
          absb = absa;
        }

        if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * absb) {
          bid++;
          apnd = positionMap->data[i + positionMap->size[0]];
        } else if (cdiff > 0.0) {
          apnd = positionMap->data[i] + (bid - 1.0);
        } else {
          bid++;
        }

        if (bid >= 0.0) {
          trueCount = (int32_T)bid - 1;
        } else {
          trueCount = -1;
        }

        c_st.site = &ml_emlrtRSI;
        assert_pmaxsize(&c_st, !(bid > 2.147483647E+9));
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = trueCount + 1;
        emxEnsureCapacity_real_T(y, i1);
        if (trueCount + 1 > 0) {
          y->data[0] = positionMap->data[i];
          if (trueCount + 1 > 1) {
            y->data[trueCount] = apnd;
            nm1d2 = div_nzp_s32(trueCount, 2);
            i1 = nm1d2 - 2;
            for (k = 0; k <= i1; k++) {
              y->data[k + 1] = a + (real_T)(k + 1);
              y->data[(trueCount - k) - 1] = apnd - (real_T)(k + 1);
            }

            if (nm1d2 << 1 == trueCount) {
              y->data[nm1d2] = (positionMap->data[i] + apnd) / 2.0;
            } else {
              y->data[nm1d2] = positionMap->data[i] + (real_T)nm1d2;
              y->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
            }
          }
        }
      }

      i1 = r1->size[1];
      k = y->size[1];
      emlrtSubAssignSizeCheck1dR2017a(i1, k, &f_emlrtECI, &st);
      i1 = y->size[1];
      nm1d2 = i1 - 1;
      for (i1 = 0; i1 <= nm1d2; i1++) {
        positionIndices->data[r1->data[i1] - 1] = y->data[i1];
      }

      idxCount += numPositions;
    }
  }

  emxFree_real_T(&y);
  emxFree_real_T(&positionMap);
  if (1.0 > idxCount) {
    b_i = 0;
  } else {
    b_i = positionIndices->size[1];
    emlrtDynamicBoundsCheckR2012b(1, 1, b_i, &gb_emlrtBCI, &st);
    b_i = positionIndices->size[1];
    i1 = (int32_T)emlrtIntegerCheckR2012b(idxCount, &gb_emlrtDCI, &st);
    b_i = emlrtDynamicBoundsCheckR2012b(i1, 1, b_i, &fb_emlrtBCI, &st);
  }

  i1 = positionIndices->size[0] * positionIndices->size[1];
  positionIndices->size[1] = b_i;
  emxEnsureCapacity_real_T(positionIndices, i1);
  b_i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = positionIndices->size[1];
  emxEnsureCapacity_int32_T1(r1, b_i);
  nm1d2 = positionIndices->size[1] - 1;
  for (b_i = 0; b_i <= nm1d2; b_i++) {
    bid = positionIndices->data[b_i];
    i1 = (int32_T)emlrtIntegerCheckR2012b(bid, &lb_emlrtDCI, sp);
    r1->data[b_i] = emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &pb_emlrtBCI, sp);
  }

  b_i = r1->size[1];
  i1 = positionIndices->size[1];
  emlrtSubAssignSizeCheck1dR2017a(b_i, i1, &g_emlrtECI, sp);
  nm1d2 = positionIndices->size[1];
  for (b_i = 0; b_i < nm1d2; b_i++) {
    QSol[r1->data[b_i] - 1] = qvSolRaw[(int32_T)positionIndices->data[b_i] - 1];
  }

  emxFree_int32_T(&r1);
  emxFree_real_T(&positionIndices);
  st.site = &of_emlrtRSI;
  b_st.site = &nl_emlrtRSI;
  for (i = 0; i < 3; i++) {
    b_b[i] = muDoubleScalarIsNaN(QSol[i]);
  }

  b_y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if (!b_b[k]) {
      k++;
    } else {
      b_y = true;
      exitg1 = true;
    }
  }

  guard1 = false;
  if (b_y) {
    guard1 = true;
  } else {
    for (i = 0; i < 3; i++) {
      b_b[i] = muDoubleScalarIsInf(QSol[i]);
    }

    b_y = false;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 3)) {
      if (!b_b[k]) {
        k++;
      } else {
        b_y = true;
        exitg1 = true;
      }
    }

    if (b_y) {
      guard1 = true;
    }
  }

  if (guard1) {
    c_st.site = &ol_emlrtRSI;
    d_st.site = &yd_emlrtRSI;
    g_warning(&d_st);
  }

  solutionInfo_Status_size[0] = 1;
  solutionInfo_Status_size[1] = sol_Status_size[1];
  if (0 <= sol_Status_size[1] - 1) {
    memcpy(&solutionInfo_Status_data[0], &sol_Status_data[0], (uint32_T)
           (sol_Status_size[1] * (int32_T)sizeof(char_T)));
  }
}

static void eml_find(const emlrtStack *sp, boolean_T x[3], int32_T i_data[],
                     int32_T i_size[1])
{
  emlrtStack st;
  int32_T iv[2];
  int32_T idx;
  int32_T ii;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  idx = 0;
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii - 1 < 3)) {
    if (x[ii - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      if (idx >= 3) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }

  if (1 > idx) {
    idx = 0;
  }

  iv[0] = 1;
  iv[1] = idx;
  st.site = &uf_emlrtRSI;
  indexShapeCheck(&st, 3, iv);
  i_size[0] = idx;
}

static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2])
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[30];
  boolean_T c;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((matrixSize != 1) || (!(indexSize[1] != 1))) {
    c = false;
  } else {
    c = true;
  }

  st.site = &vf_emlrtRSI;
  if (c) {
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &rm_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &t_emlrtMCI),
             &t_emlrtMCI), &t_emlrtMCI);
  }
}

static void e_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 72 };

  static char_T b_msgID[72] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'C', 'o', 'n', 'f', 'i', 'g',
    'J', 'o', 'i', 'n', 't', 'L', 'i', 'm', 'i', 't', 's', 'V', 'i', 'o', 'l',
    'a', 't', 'i', 'o', 'n', 'A', 'u', 't', 'o', 'A', 'd', 'j', 'u', 's', 't',
    'e', 'd' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[72];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&msgID[0], &b_msgID[0], 72U * sizeof(char_T));
  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, 72, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &xm_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &k_emlrtMCI), &l_emlrtMCI);
}

static void NLPSolverInterface_solve(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance, const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T seed[3],
  real_T xSol[3], real_T *solutionInfo_Iterations, real_T
  *solutionInfo_RRAttempts, real_T *solutionInfo_Error, real_T
  *solutionInfo_ExitFlag, char_T solutionInfo_Status_data[], int32_T
  solutionInfo_Status_size[2])
{
  static char_T cv[14] = { 'b', 'e', 's', 't', ' ', 'a', 'v', 'a', 'i', 'l', 'a',
    'b', 'l', 'e' };

  static char_T cv1[7] = { 's', 'u', 'c', 'c', 'e', 's', 's' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_boolean_T *r1;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r3;
  emxArray_boolean_T *r4;
  emxArray_boolean_T *r5;
  emxArray_boolean_T *r6;
  emxArray_boolean_T *r7;
  emxArray_boolean_T *r8;
  emxArray_real_T *lb;
  emxArray_real_T *newseed;
  emxArray_real_T *qi;
  emxArray_real_T *r;
  emxArray_real_T *rn;
  emxArray_real_T *ub;
  rigidBodyJoint *c_obj;
  robotics_manip_internal_IKExtraArgs *args;
  robotics_manip_internal_RigidBodyTree_1 *b_obj;
  real_T b_xSol[3];
  real_T b_ub[2];
  real_T p[2];
  real_T err;
  real_T iter;
  real_T tol;
  b_robotics_core_internal_NLPSolverExitFlags exitFlag;
  b_robotics_core_internal_NLPSolverExitFlags exitFlagPrev;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T nx;
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  obj->MaxNumIterationInternal = obj->MaxNumIteration;
  obj->MaxTimeInternal = obj->MaxTime;
  for (i = 0; i < 3; i++) {
    obj->SeedInternal[i] = seed[i];
  }

  tol = obj->SolutionTolerance;
  st.site = &wf_emlrtRSI;
  b_st.site = &cg_emlrtRSI;
  tic(&b_st, &err, &iter);
  obj->TimeObj.StartTime.tv_sec = err;
  obj->TimeObj.StartTime.tv_nsec = iter;
  b_st.site = &dg_emlrtRSI;
  st.site = &xf_emlrtRSI;
  DampedBFGSwGradientProjection_solveInternal(&st, obj, xSol, &exitFlag, &err,
    &iter);
  *solutionInfo_RRAttempts = 0.0;
  *solutionInfo_Iterations = iter;
  *solutionInfo_Error = err;
  exitFlagPrev = exitFlag;
  emxInit_real_T1(&newseed, 1);
  emxInit_real_T(&qi, 2);
  emxInit_real_T1(&ub, 1);
  emxInit_real_T1(&lb, 1);
  emxInit_real_T1(&rn, 1);
  emxInit_real_T(&r, 2);
  emxInit_boolean_T(&r1, 1);
  emxInit_boolean_T(&r2, 1);
  emxInit_boolean_T(&r3, 1);
  emxInit_boolean_T(&r4, 1);
  emxInit_boolean_T(&r5, 1);
  emxInit_boolean_T(&r6, 1);
  emxInit_boolean_T(&r7, 1);
  emxInit_boolean_T(&r8, 1);
  exitg1 = false;
  while ((!exitg1) && (obj->RandomRestart && (err > tol))) {
    obj->MaxNumIterationInternal -= iter;
    st.site = &yf_emlrtRSI;
    obj->MaxTimeInternal = obj->MaxTime - SystemTimeProvider_getElapsedTime(&st,
      &obj->TimeObj);
    if (obj->MaxNumIterationInternal <= 0.0) {
      exitFlag =
        robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded;
    }

    if ((exitFlag ==
         robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded) ||
        (exitFlag == robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded))
    {
      exitFlagPrev = exitFlag;
      exitg1 = true;
    } else {
      st.site = &ag_emlrtRSI;
      args = obj->ExtraArgs;
      b_st.site = &sk_emlrtRSI;
      b_obj = args->Robot;
      b_i = newseed->size[0];
      err = emlrtNonNegativeCheckR2012b(b_obj->PositionNumber, &rb_emlrtDCI,
        &b_st);
      newseed->size[0] = (int32_T)emlrtIntegerCheckR2012b(err, &qb_emlrtDCI,
        &b_st);
      emxEnsureCapacity_real_T1(newseed, b_i);
      err = emlrtNonNegativeCheckR2012b(b_obj->PositionNumber, &rb_emlrtDCI,
        &b_st);
      nx = (int32_T)emlrtIntegerCheckR2012b(err, &qb_emlrtDCI, &b_st);
      for (b_i = 0; b_i < nx; b_i++) {
        newseed->data[b_i] = 0.0;
      }

      err = b_obj->NumBodies;
      b_i = (int32_T)err - 1;
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, err, mxDOUBLE_CLASS, (int32_T)err,
        &g_emlrtRTEI, &b_st);
      for (i = 0; i <= b_i; i++) {
        emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)i + 1U), 1, 4,
          &rb_emlrtBCI, &b_st);
        for (i1 = 0; i1 < 2; i1++) {
          p[i1] = b_obj->PositionDoFMap[i + (i1 << 2)];
        }

        if (p[0] <= p[1]) {
          c_st.site = &tk_emlrtRSI;
          c_obj = b_obj->Bodies[i]->JointInternal;
          switch ((int32_T)emlrtIntegerCheckR2012b(c_obj->PositionNumber,
                   &pb_emlrtDCI, &c_st)) {
           case 0:
            i1 = qi->size[0] * qi->size[1];
            qi->size[0] = 1;
            qi->size[1] = 1;
            emxEnsureCapacity_real_T(qi, i1);
            qi->data[0] = rtNaN;
            break;

           default:
            nx = c_obj->PositionLimitsInternal->size[0];
            i1 = ub->size[0];
            ub->size[0] = nx;
            emxEnsureCapacity_real_T1(ub, i1);
            for (i1 = 0; i1 < nx; i1++) {
              ub->data[i1] = c_obj->PositionLimitsInternal->data[i1 +
                c_obj->PositionLimitsInternal->size[0]];
            }

            nx = c_obj->PositionLimitsInternal->size[0];
            i1 = lb->size[0];
            lb->size[0] = nx;
            emxEnsureCapacity_real_T1(lb, i1);
            for (i1 = 0; i1 < nx; i1++) {
              lb->data[i1] = c_obj->PositionLimitsInternal->data[i1];
            }

            i1 = r1->size[0];
            r1->size[0] = lb->size[0];
            emxEnsureCapacity_boolean_T(r1, i1);
            nx = lb->size[0];
            for (i1 = 0; i1 < nx; i1++) {
              r1->data[i1] = muDoubleScalarIsInf(lb->data[i1]);
            }

            i1 = r2->size[0];
            r2->size[0] = lb->size[0];
            emxEnsureCapacity_boolean_T(r2, i1);
            nx = lb->size[0];
            for (i1 = 0; i1 < nx; i1++) {
              r2->data[i1] = muDoubleScalarIsNaN(lb->data[i1]);
            }

            i1 = r3->size[0];
            r3->size[0] = r1->size[0];
            emxEnsureCapacity_boolean_T(r3, i1);
            nx = r1->size[0];
            for (i1 = 0; i1 < nx; i1++) {
              r3->data[i1] = ((!r1->data[i1]) && (!r2->data[i1]));
            }

            d_st.site = &uk_emlrtRSI;
            guard1 = false;
            guard2 = false;
            guard3 = false;
            if (all(&d_st, r3)) {
              i1 = r1->size[0];
              r1->size[0] = ub->size[0];
              emxEnsureCapacity_boolean_T(r1, i1);
              nx = ub->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r1->data[i1] = muDoubleScalarIsInf(ub->data[i1]);
              }

              i1 = r2->size[0];
              r2->size[0] = ub->size[0];
              emxEnsureCapacity_boolean_T(r2, i1);
              nx = ub->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r2->data[i1] = muDoubleScalarIsNaN(ub->data[i1]);
              }

              i1 = r4->size[0];
              r4->size[0] = r1->size[0];
              emxEnsureCapacity_boolean_T(r4, i1);
              nx = r1->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r4->data[i1] = ((!r1->data[i1]) && (!r2->data[i1]));
              }

              d_st.site = &uk_emlrtRSI;
              if (all(&d_st, r4)) {
                d_st.site = &vk_emlrtRSI;
                c_rand(moduleInstance, &d_st, c_obj->PositionNumber, rn);
                i1 = ub->size[0];
                k = lb->size[0];
                emlrtSizeEqCheck1DR2012b(i1, k, &j_emlrtECI, &c_st);
                i1 = rn->size[0];
                k = ub->size[0];
                emlrtSizeEqCheck1DR2012b(i1, k, &k_emlrtECI, &c_st);
                i1 = rn->size[0];
                emxEnsureCapacity_real_T1(rn, i1);
                nx = rn->size[0];
                for (i1 = 0; i1 < nx; i1++) {
                  rn->data[i1] *= ub->data[i1] - lb->data[i1];
                }

                i1 = lb->size[0];
                k = rn->size[0];
                emlrtSizeEqCheck1DR2012b(i1, k, &l_emlrtECI, &c_st);
                i1 = qi->size[0] * qi->size[1];
                qi->size[0] = lb->size[0];
                qi->size[1] = 1;
                emxEnsureCapacity_real_T(qi, i1);
                nx = lb->size[0] - 1;
                for (i1 = 0; i1 <= nx; i1++) {
                  qi->data[i1] = lb->data[i1] + rn->data[i1];
                }
              } else {
                guard3 = true;
              }
            } else {
              guard3 = true;
            }

            if (guard3) {
              i1 = r1->size[0];
              r1->size[0] = lb->size[0];
              emxEnsureCapacity_boolean_T(r1, i1);
              nx = lb->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r1->data[i1] = muDoubleScalarIsInf(lb->data[i1]);
              }

              i1 = r2->size[0];
              r2->size[0] = lb->size[0];
              emxEnsureCapacity_boolean_T(r2, i1);
              nx = lb->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r2->data[i1] = muDoubleScalarIsNaN(lb->data[i1]);
              }

              i1 = r5->size[0];
              r5->size[0] = r1->size[0];
              emxEnsureCapacity_boolean_T(r5, i1);
              nx = r1->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r5->data[i1] = ((!r1->data[i1]) && (!r2->data[i1]));
              }

              d_st.site = &wk_emlrtRSI;
              if (all(&d_st, r5)) {
                i1 = r1->size[0];
                r1->size[0] = ub->size[0];
                emxEnsureCapacity_boolean_T(r1, i1);
                nx = ub->size[0];
                for (i1 = 0; i1 < nx; i1++) {
                  r1->data[i1] = muDoubleScalarIsInf(ub->data[i1]);
                }

                i1 = r2->size[0];
                r2->size[0] = ub->size[0];
                emxEnsureCapacity_boolean_T(r2, i1);
                nx = ub->size[0];
                for (i1 = 0; i1 < nx; i1++) {
                  r2->data[i1] = muDoubleScalarIsNaN(ub->data[i1]);
                }

                i1 = r6->size[0];
                r6->size[0] = r1->size[0];
                emxEnsureCapacity_boolean_T(r6, i1);
                nx = r1->size[0];
                for (i1 = 0; i1 < nx; i1++) {
                  r6->data[i1] = (r1->data[i1] || r2->data[i1]);
                }

                d_st.site = &wk_emlrtRSI;
                if (any(&d_st, r6)) {
                  b_ub[0] = (real_T)lb->size[0];
                  b_ub[1] = 1.0;
                  d_st.site = &xk_emlrtRSI;
                  randn(moduleInstance, &d_st, b_ub, qi);
                  nx = qi->size[0] - 1;
                  i1 = r->size[0] * r->size[1];
                  r->size[0] = qi->size[0];
                  r->size[1] = 1;
                  emxEnsureCapacity_real_T(r, i1);
                  for (k = 0; k <= nx; k++) {
                    r->data[k] = muDoubleScalarAbs(qi->data[k]);
                  }

                  i1 = lb->size[0];
                  k = r->size[0];
                  emlrtSizeEqCheck1DR2012b(i1, k, &m_emlrtECI, &c_st);
                  i1 = qi->size[0] * qi->size[1];
                  qi->size[0] = lb->size[0];
                  qi->size[1] = 1;
                  emxEnsureCapacity_real_T(qi, i1);
                  nx = lb->size[0] - 1;
                  for (i1 = 0; i1 <= nx; i1++) {
                    qi->data[i1] = lb->data[i1] + r->data[i1];
                  }
                } else {
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            }

            if (guard2) {
              i1 = r1->size[0];
              r1->size[0] = lb->size[0];
              emxEnsureCapacity_boolean_T(r1, i1);
              nx = lb->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r1->data[i1] = muDoubleScalarIsInf(lb->data[i1]);
              }

              i1 = r2->size[0];
              r2->size[0] = lb->size[0];
              emxEnsureCapacity_boolean_T(r2, i1);
              nx = lb->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r2->data[i1] = muDoubleScalarIsNaN(lb->data[i1]);
              }

              i1 = r7->size[0];
              r7->size[0] = r1->size[0];
              emxEnsureCapacity_boolean_T(r7, i1);
              nx = r1->size[0];
              for (i1 = 0; i1 < nx; i1++) {
                r7->data[i1] = (r1->data[i1] || r2->data[i1]);
              }

              d_st.site = &yk_emlrtRSI;
              if (any(&d_st, r7)) {
                i1 = r1->size[0];
                r1->size[0] = ub->size[0];
                emxEnsureCapacity_boolean_T(r1, i1);
                nx = ub->size[0];
                for (i1 = 0; i1 < nx; i1++) {
                  r1->data[i1] = muDoubleScalarIsInf(ub->data[i1]);
                }

                i1 = r2->size[0];
                r2->size[0] = ub->size[0];
                emxEnsureCapacity_boolean_T(r2, i1);
                nx = ub->size[0];
                for (i1 = 0; i1 < nx; i1++) {
                  r2->data[i1] = muDoubleScalarIsNaN(ub->data[i1]);
                }

                i1 = r8->size[0];
                r8->size[0] = r1->size[0];
                emxEnsureCapacity_boolean_T(r8, i1);
                nx = r1->size[0];
                for (i1 = 0; i1 < nx; i1++) {
                  r8->data[i1] = ((!r1->data[i1]) && (!r2->data[i1]));
                }

                d_st.site = &yk_emlrtRSI;
                if (all(&d_st, r8)) {
                  b_ub[0] = (real_T)ub->size[0];
                  b_ub[1] = 1.0;
                  d_st.site = &al_emlrtRSI;
                  randn(moduleInstance, &d_st, b_ub, qi);
                  nx = qi->size[0] - 1;
                  i1 = r->size[0] * r->size[1];
                  r->size[0] = qi->size[0];
                  r->size[1] = 1;
                  emxEnsureCapacity_real_T(r, i1);
                  for (k = 0; k <= nx; k++) {
                    r->data[k] = muDoubleScalarAbs(qi->data[k]);
                  }

                  i1 = ub->size[0];
                  k = r->size[0];
                  emlrtSizeEqCheck1DR2012b(i1, k, &n_emlrtECI, &c_st);
                  i1 = qi->size[0] * qi->size[1];
                  qi->size[0] = ub->size[0];
                  qi->size[1] = 1;
                  emxEnsureCapacity_real_T(qi, i1);
                  nx = ub->size[0] - 1;
                  for (i1 = 0; i1 <= nx; i1++) {
                    qi->data[i1] = ub->data[i1] - r->data[i1];
                  }
                } else {
                  guard1 = true;
                }
              } else {
                guard1 = true;
              }
            }

            if (guard1) {
              b_ub[0] = (real_T)ub->size[0];
              b_ub[1] = 1.0;
              d_st.site = &bl_emlrtRSI;
              randn(moduleInstance, &d_st, b_ub, qi);
            }
            break;
          }

          if (p[0] > p[1]) {
            i1 = 0;
            k = -1;
          } else {
            i1 = newseed->size[0];
            k = (int32_T)emlrtIntegerCheckR2012b(p[0], &nb_emlrtDCI, &b_st);
            i1 = emlrtDynamicBoundsCheckR2012b(k, 1, i1, &sb_emlrtBCI, &b_st) -
              1;
            k = newseed->size[0];
            nx = (int32_T)emlrtIntegerCheckR2012b(p[1], &ob_emlrtDCI, &b_st);
            k = emlrtDynamicBoundsCheckR2012b(nx, 1, k, &tb_emlrtBCI, &b_st) - 1;
          }

          nx = qi->size[0];
          emlrtSubAssignSizeCheck1dR2017a((k - i1) + 1, nx, &i_emlrtECI, &b_st);
          nx = (k - i1) + 1;
          for (k = 0; k < nx; k++) {
            newseed->data[i1 + k] = qi->data[k];
          }
        }
      }

      b_i = newseed->size[0];
      emlrtSubAssignSizeCheck1dR2017a(3, b_i, &h_emlrtECI, sp);
      for (b_i = 0; b_i < 3; b_i++) {
        obj->SeedInternal[b_i] = newseed->data[b_i];
      }

      st.site = &bg_emlrtRSI;
      DampedBFGSwGradientProjection_solveInternal(&st, obj, b_xSol, &exitFlag,
        &err, &iter);
      if (err < *solutionInfo_Error) {
        for (i = 0; i < 3; i++) {
          xSol[i] = b_xSol[i];
        }

        *solutionInfo_Error = err;
        exitFlagPrev = exitFlag;
      }

      (*solutionInfo_RRAttempts)++;
      *solutionInfo_Iterations += iter;
    }
  }

  emxFree_boolean_T(&r8);
  emxFree_boolean_T(&r7);
  emxFree_boolean_T(&r6);
  emxFree_boolean_T(&r5);
  emxFree_boolean_T(&r4);
  emxFree_boolean_T(&r3);
  emxFree_boolean_T(&r2);
  emxFree_boolean_T(&r1);
  emxFree_real_T(&r);
  emxFree_real_T(&rn);
  emxFree_real_T(&lb);
  emxFree_real_T(&ub);
  emxFree_real_T(&qi);
  emxFree_real_T(&newseed);
  *solutionInfo_ExitFlag = (real_T)exitFlagPrev;
  if (*solutionInfo_Error < tol) {
    solutionInfo_Status_size[0] = 1;
    solutionInfo_Status_size[1] = 7;
    for (b_i = 0; b_i < 7; b_i++) {
      solutionInfo_Status_data[b_i] = cv1[b_i];
    }
  } else {
    solutionInfo_Status_size[0] = 1;
    solutionInfo_Status_size[1] = 14;
    for (b_i = 0; b_i < 14; b_i++) {
      solutionInfo_Status_data[b_i] = cv[b_i];
    }
  }
}

static void SystemTimeProvider_reset(const emlrtStack *sp,
  robotics_core_internal_SystemTimeProvider *obj)
{
  emlrtStack st;
  real_T t0_tv_nsec;
  real_T t0_tv_sec;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cg_emlrtRSI;
  tic(&st, &t0_tv_sec, &t0_tv_nsec);
  obj->StartTime.tv_sec = t0_tv_sec;
  obj->StartTime.tv_nsec = t0_tv_nsec;
  st.site = &dg_emlrtRSI;
}

static void tic(const emlrtStack *sp, real_T *tstart_tv_sec, real_T
                *tstart_tv_nsec)
{
  emlrtStack st;
  emlrtTimespec expl_temp;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &eg_emlrtRSI;
  expl_temp = getTime(&st);
  *tstart_tv_sec = expl_temp.tv_sec;
  *tstart_tv_nsec = expl_temp.tv_nsec;
}

static emlrtTimespec getTime(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 29 };

  static const int32_T iv1[2] = { 1, 29 };

  static const int32_T iv2[2] = { 1, 26 };

  static char_T c_u[29] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'P', 'O', 'S', 'I', 'X', 'C', 'a', 'l', 'l', 'F', 'a',
    'i', 'l', 'e', 'd' };

  static char_T cv[26] = { 'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c', 'k', 'G',
    'e', 't', 't', 'i', 'm', 'e', 'M', 'o', 'n', 'o', 't', 'o', 'n', 'i', 'c' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emlrtTimespec t;
  const mxArray *propValues[1];
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *y;
  int32_T i;
  int32_T status;
  const char_T *propClasses[1] = { "coder.internal.string" };

  const char_T *propNames[1] = { "Value" };

  char_T b_u[29];
  char_T d_u[26];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  status = emlrtClockGettimeMonotonic(&t);
  b_st.site = &gg_emlrtRSI;
  if (status != 0) {
    for (i = 0; i < 29; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 29, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 29; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 29, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m1 = NULL;
    emlrtAssign(&c_y, emlrtCreateClassInstance("coder.internal.string"));
    m1 = NULL;
    for (i = 0; i < 26; i++) {
      d_u[i] = cv[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 26, m, &d_u[0]);
    emlrtAssign(&d_y, m);
    emlrtAssign(&m1, d_y);
    propValues[0] = m1;
    emlrtSetAllProperties(&b_st, &c_y, 0, 1, propNames, propClasses, propValues);
    emlrtAssign(&c_y, emlrtConvertInstanceToRedirectSource(&b_st, c_y, 0,
      "coder.internal.string"));
    e_y = NULL;
    m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)emlrtMxGetData(m) = status;
    emlrtAssign(&e_y, m);
    c_st.site = &qm_emlrtRSI;
    b_error(&c_st, y, getString(&c_st, d_message(&c_st, b_y, c_y, e_y,
              &u_emlrtMCI), &u_emlrtMCI), &u_emlrtMCI);
  }

  return t;
}

static void DampedBFGSwGradientProjection_solveInternal(const emlrtStack *sp,
  robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T xSol[3],
  b_robotics_core_internal_NLPSolverExitFlags *exitFlag, real_T *err, real_T
  *iter)
{
  static real_T f_y[9] = { 1.4901161193847656E-8, 0.0, 0.0, 0.0,
    1.4901161193847656E-8, 0.0, 0.0, 0.0, 1.4901161193847656E-8 };

  static char_T cv[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i', 'm', 'a',
    'g', 'r', 'e', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_boolean_T *activeSet;
  emxArray_boolean_T *b_activeSet;
  emxArray_boolean_T *b_bIn;
  emxArray_boolean_T *c_activeSet;
  emxArray_int32_T *ii;
  emxArray_int32_T *inactiveConstraintIndices;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_real_T *A;
  emxArray_real_T *B;
  emxArray_real_T *alpha;
  emxArray_real_T *bIn;
  emxArray_real_T *b_A;
  emxArray_real_T *b_alpha;
  emxArray_real_T *b_b;
  emxArray_real_T *b_grad;
  emxArray_real_T *b_y;
  emxArray_real_T *c_A;
  emxArray_real_T *c_alpha;
  emxArray_real_T *c_bIn;
  emxArray_real_T *c_y;
  emxArray_real_T *d_A;
  emxArray_real_T *d_alpha;
  emxArray_real_T *d_y;
  emxArray_real_T *e_A;
  emxArray_real_T *f_A;
  emxArray_real_T *g_A;
  emxArray_real_T *grad;
  emxArray_real_T *gradNew;
  emxArray_real_T *unusedU1;
  emxArray_real_T *y;
  robotics_core_internal_DampedBFGSwGradientProjection *b_obj;
  robotics_manip_internal_IKExtraArgs *args;
  robotics_manip_internal_IKExtraArgs *r;
  robotics_manip_internal_IKExtraArgs *r6;
  robotics_manip_internal_IKExtraArgs *r7;
  real_T unusedU0[36];
  real_T H[9];
  real_T V[9];
  real_T a[9];
  real_T b_V[9];
  real_T Hg[3];
  real_T sNew[3];
  real_T x[3];
  real_T b_cost;
  real_T b_costNew;
  real_T b_gamma;
  real_T beta;
  real_T c_costNew;
  real_T cost;
  real_T costNew;
  real_T d;
  real_T e_y;
  real_T lambda;
  real_T m;
  real_T sigma;
  int32_T iv[2];
  int32_T b_i;
  int32_T end;
  int32_T exitg1;
  int32_T exitg2;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T idxl;
  int32_T loop_ub;
  int32_T unnamed_idx_0;
  boolean_T flag;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (i = 0; i < 3; i++) {
    x[i] = obj->SeedInternal[i];
  }

  emxInit_real_T(&unusedU1, 2);
  emxInit_real_T1(&grad, 1);
  st.site = &hg_emlrtRSI;
  SystemTimeProvider_reset(&st, &obj->TimeObjInternal);
  st.site = &ig_emlrtRSI;
  IKHelpers_computeCost(&st, x, obj->ExtraArgs, &cost, unusedU0, unusedU1, &r);
  b_cost = cost;
  obj->ExtraArgs = r;
  st.site = &jg_emlrtRSI;
  args = obj->ExtraArgs;
  b_i = grad->size[0];
  grad->size[0] = args->GradTemp->size[0];
  emxEnsureCapacity_real_T1(grad, b_i);
  loop_ub = args->GradTemp->size[0];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    grad->data[b_i] = args->GradTemp->data[b_i];
  }

  eye(H);
  emxInit_boolean_T(&activeSet, 1);
  emxInit_real_T(&A, 2);
  emxInit_real_T1(&alpha, 1);
  emxInit_real_T(&B, 2);
  emxInit_int32_T1(&ii, 1);
  if (obj->ConstraintsOn) {
    b_i = B->size[0] * B->size[1];
    B->size[0] = obj->ConstraintMatrix->size[0];
    B->size[1] = obj->ConstraintMatrix->size[1];
    emxEnsureCapacity_real_T(B, b_i);
    loop_ub = obj->ConstraintMatrix->size[0] * obj->ConstraintMatrix->size[1] -
      1;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      B->data[b_i] = obj->ConstraintMatrix->data[b_i];
    }

    st.site = &gh_emlrtRSI;
    dynamic_size_checks(&st, B, B->size[0]);
    st.site = &fh_emlrtRSI;
    b_mtimes(B, x, alpha);
    b_i = alpha->size[0];
    i1 = obj->ConstraintBound->size[0];
    emlrtSizeEqCheck1DR2012b(b_i, i1, &o_emlrtECI, sp);
    b_i = activeSet->size[0];
    activeSet->size[0] = alpha->size[0];
    emxEnsureCapacity_boolean_T(activeSet, b_i);
    loop_ub = alpha->size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      activeSet->data[b_i] = (alpha->data[b_i] >= obj->ConstraintBound->data[b_i]);
    }

    end = activeSet->size[0] - 1;
    unnamed_idx_0 = 0;
    for (i = 0; i <= end; i++) {
      if (activeSet->data[i]) {
        unnamed_idx_0++;
      }
    }

    b_i = ii->size[0];
    ii->size[0] = unnamed_idx_0;
    emxEnsureCapacity_int32_T(ii, b_i);
    unnamed_idx_0 = 0;
    for (i = 0; i <= end; i++) {
      if (activeSet->data[i]) {
        ii->data[unnamed_idx_0] = i + 1;
        unnamed_idx_0++;
      }
    }

    unnamed_idx_0 = obj->ConstraintMatrix->size[1];
    loop_ub = obj->ConstraintMatrix->size[0];
    b_i = A->size[0] * A->size[1];
    A->size[0] = loop_ub;
    A->size[1] = ii->size[0];
    emxEnsureCapacity_real_T(A, b_i);
    end = ii->size[0];
    for (b_i = 0; b_i < end; b_i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        i2 = ii->data[b_i];
        A->data[i1 + A->size[0] * b_i] = obj->ConstraintMatrix->data[i1 +
          obj->ConstraintMatrix->size[0] * (emlrtDynamicBoundsCheckR2012b(i2, 1,
          unnamed_idx_0, &yb_emlrtBCI, sp) - 1)];
      }
    }
  } else {
    unnamed_idx_0 = obj->ConstraintBound->size[0];
    b_i = activeSet->size[0];
    activeSet->size[0] = unnamed_idx_0;
    emxEnsureCapacity_boolean_T(activeSet, b_i);
    for (b_i = 0; b_i < unnamed_idx_0; b_i++) {
      activeSet->data[b_i] = false;
    }

    A->size[0] = 3;
    A->size[1] = 0;
  }

  b_i = A->size[1] - 1;
  emxInit_real_T(&y, 2);
  emxInit_real_T(&b_y, 2);
  emxInit_real_T1(&b_A, 1);
  emxInit_real_T1(&c_A, 1);
  emxInit_real_T(&d_A, 2);
  emxInit_real_T1(&e_A, 1);
  for (idxl = 0; idxl <= b_i; idxl++) {
    i1 = A->size[1];
    emlrtDynamicBoundsCheckR2012b(idxl + 1, 1, i1, &ub_emlrtBCI, sp);
    i1 = A->size[0];
    loop_ub = A->size[0];
    i2 = b_A->size[0];
    b_A->size[0] = loop_ub;
    emxEnsureCapacity_real_T1(b_A, i2);
    for (i2 = 0; i2 < loop_ub; i2++) {
      b_A->data[i2] = A->data[i2 + A->size[0] * idxl];
    }

    st.site = &gh_emlrtRSI;
    b_dynamic_size_checks(&st, b_A, i1);
    i1 = A->size[0];
    loop_ub = A->size[0];
    i2 = c_A->size[0];
    c_A->size[0] = loop_ub;
    emxEnsureCapacity_real_T1(c_A, i2);
    for (i2 = 0; i2 < loop_ub; i2++) {
      c_A->data[i2] = A->data[i2 + A->size[0] * idxl];
    }

    st.site = &gh_emlrtRSI;
    c_dynamic_size_checks(&st, c_A, i1);
    loop_ub = A->size[0];
    i1 = d_A->size[0] * d_A->size[1];
    d_A->size[0] = 1;
    d_A->size[1] = loop_ub;
    emxEnsureCapacity_real_T(d_A, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      d_A->data[i1] = A->data[i1 + A->size[0] * idxl];
    }

    loop_ub = A->size[0];
    i1 = e_A->size[0];
    e_A->size[0] = loop_ub;
    emxEnsureCapacity_real_T1(e_A, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      e_A->data[i1] = A->data[i1 + A->size[0] * idxl];
    }

    sigma = 0.0;
    for (i1 = 0; i1 < 3; i1++) {
      sNew[i1] = 0.0;
      for (i2 = 0; i2 < 3; i2++) {
        beta = sNew[i1] + d_A->data[i2] * H[i2 + 3 * i1];
        sNew[i1] = beta;
      }

      sigma += sNew[i1] * e_A->data[i1];
    }

    sigma = 1.0 / sigma;
    loop_ub = A->size[0];
    end = A->size[0];
    i1 = y->size[0] * y->size[1];
    y->size[0] = loop_ub;
    y->size[1] = end;
    emxEnsureCapacity_real_T(y, i1);
    for (i1 = 0; i1 < end; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        y->data[i2 + y->size[0] * i1] = A->data[i2 + A->size[0] * idxl] *
          A->data[i1 + A->size[0] * idxl];
      }
    }

    st.site = &gh_emlrtRSI;
    d_dynamic_size_checks(&st, y, y->size[0]);
    for (i1 = 0; i1 < 9; i1++) {
      a[i1] = sigma * H[i1];
    }

    st.site = &fh_emlrtRSI;
    c_mtimes(a, y, b_y);
    st.site = &gh_emlrtRSI;
    e_dynamic_size_checks(&st, b_y->size[1]);
    for (i1 = 0; i1 < 3; i1++) {
      for (i2 = 0; i2 < 3; i2++) {
        d = 0.0;
        for (unnamed_idx_0 = 0; unnamed_idx_0 < 3; unnamed_idx_0++) {
          d += b_y->data[i1 + 3 * unnamed_idx_0] * H[unnamed_idx_0 + 3 * i2];
        }

        a[i1 + 3 * i2] = H[i1 + 3 * i2] - d;
      }
    }

    memcpy(&H[0], &a[0], 9U * sizeof(real_T));
  }

  emxFree_real_T(&e_A);
  emxFree_real_T(&d_A);
  emxFree_real_T(&c_A);
  emxFree_real_T(&b_A);
  for (i = 0; i < 3; i++) {
    xSol[i] = x[i];
  }

  d = obj->MaxNumIterationInternal;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &h_emlrtRTEI, sp);
  i = 0;
  emxInit_real_T1(&bIn, 1);
  emxInit_int32_T1(&inactiveConstraintIndices, 1);
  emxInit_real_T1(&gradNew, 1);
  emxInit_int32_T1(&r1, 1);
  emxInit_int32_T1(&r2, 1);
  emxInit_int32_T1(&r3, 1);
  emxInit_int32_T1(&r4, 1);
  emxInit_int32_T1(&r5, 1);
  emxInit_real_T(&c_y, 2);
  emxInit_real_T(&b_b, 2);
  emxInit_real_T(&d_y, 2);
  emxInit_real_T(&f_A, 2);
  emxInit_boolean_T(&b_activeSet, 1);
  emxInit_real_T1(&b_alpha, 1);
  emxInit_boolean_T(&c_activeSet, 1);
  emxInit_real_T(&g_A, 2);
  emxInit_boolean_T(&b_bIn, 1);
  emxInit_real_T(&c_alpha, 2);
  emxInit_real_T(&b_grad, 2);
  emxInit_real_T1(&c_bIn, 1);
  emxInit_real_T(&d_alpha, 2);
  do {
    exitg2 = 0;
    if (i <= (int32_T)d - 1) {
      st.site = &kg_emlrtRSI;
      b_obj = obj;
      b_st.site = &kg_emlrtRSI;
      sigma = SystemTimeProvider_getElapsedTime(&b_st, &obj->TimeObjInternal);
      flag = (sigma > b_obj->MaxTimeInternal);
      if (flag) {
        *exitFlag = robotics_core_internal_NLPSolverExitFlags_TimeLimitExceeded;
        st.site = &lg_emlrtRSI;
        *err = IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
        *iter = (real_T)i + 1.0;
        exitg2 = 1;
      } else {
        if ((A->size[0] == 0) || (A->size[1] == 0)) {
          b_i = alpha->size[0];
          alpha->size[0] = 1;
          emxEnsureCapacity_real_T1(alpha, b_i);
          alpha->data[0] = 0.0;
        } else {
          st.site = &gh_emlrtRSI;
          f_dynamic_size_checks(&st, A, A, A->size[0], A->size[0]);
          st.site = &fh_emlrtRSI;
          d_mtimes(A, A, y);
          b_i = f_A->size[0] * f_A->size[1];
          f_A->size[0] = A->size[1];
          f_A->size[1] = A->size[0];
          emxEnsureCapacity_real_T(f_A, b_i);
          loop_ub = A->size[0];
          for (b_i = 0; b_i < loop_ub; b_i++) {
            end = A->size[1];
            for (i1 = 0; i1 < end; i1++) {
              f_A->data[i1 + f_A->size[0] * b_i] = A->data[b_i + A->size[0] * i1];
            }
          }

          st.site = &mg_emlrtRSI;
          mldivide(&st, y, f_A, B);
          st.site = &gh_emlrtRSI;
          g_dynamic_size_checks(&st, B, grad, B->size[1], grad->size[0]);
          st.site = &fh_emlrtRSI;
          e_mtimes(B, grad, alpha);
        }

        st.site = &gh_emlrtRSI;
        h_dynamic_size_checks(&st, grad, grad->size[0]);
        for (b_i = 0; b_i < 3; b_i++) {
          Hg[b_i] = 0.0;
          for (i1 = 0; i1 < 3; i1++) {
            m = Hg[b_i] + H[b_i + 3 * i1] * grad->data[i1];
            Hg[b_i] = m;
          }
        }

        st.site = &ng_emlrtRSI;
        if (DampedBFGSwGradientProjection_atLocalMinimum(&st, obj, Hg, alpha)) {
          *exitFlag =
            robotics_core_internal_NLPSolverExitFlags_LocalMinimumFound;
          st.site = &og_emlrtRSI;
          *err = IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
          *iter = (real_T)i + 1.0;
          exitg2 = 1;
        } else {
          guard1 = false;
          guard2 = false;
          guard3 = false;
          if (obj->ConstraintsOn && ((A->size[0] != 0) && (A->size[1] != 0))) {
            st.site = &gh_emlrtRSI;
            f_dynamic_size_checks(&st, A, A, A->size[0], A->size[0]);
            st.site = &fh_emlrtRSI;
            d_mtimes(A, A, y);
            st.site = &pg_emlrtRSI;
            b_inv(&st, y, B);
            st.site = &qg_emlrtRSI;
            diag(&st, B, gradNew);
            st.site = &qg_emlrtRSI;
            d_sqrt(&st, gradNew);
            if (alpha->size[0] != gradNew->size[0]) {
              st.site = &rl_emlrtRSI;
              b_error(&st, b_emlrt_marshallOut(&st, cv), getString(&st,
                       b_message(&st, b_emlrt_marshallOut(&st, cv), &v_emlrtMCI),
                       &v_emlrtMCI), &v_emlrtMCI);
            }

            b_i = b_alpha->size[0];
            b_alpha->size[0] = alpha->size[0];
            emxEnsureCapacity_real_T1(b_alpha, b_i);
            loop_ub = alpha->size[0];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              b_alpha->data[b_i] = alpha->data[b_i] / gradNew->data[b_i];
            }

            st.site = &hh_emlrtRSI;
            maximum(&st, b_alpha, &sigma, &idxl);
            if (c_norm(Hg) < 0.5 * sigma) {
              st.site = &sf_emlrtRSI;
              b_eml_find(&st, activeSet, ii);
              b_i = alpha->size[0];
              alpha->size[0] = ii->size[0];
              emxEnsureCapacity_real_T1(alpha, b_i);
              loop_ub = ii->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                alpha->data[b_i] = (real_T)ii->data[b_i];
              }

              b_i = alpha->size[0];
              emlrtDynamicBoundsCheckR2012b(idxl, 1, b_i, &vb_emlrtBCI, sp);
              b_i = activeSet->size[0];
              i1 = (int32_T)alpha->data[idxl - 1];
              activeSet->data[emlrtDynamicBoundsCheckR2012b(i1, 1, b_i,
                &ac_emlrtBCI, sp) - 1] = false;
              end = activeSet->size[0] - 1;
              unnamed_idx_0 = 0;
              for (loop_ub = 0; loop_ub <= end; loop_ub++) {
                if (activeSet->data[loop_ub]) {
                  unnamed_idx_0++;
                }
              }

              b_i = r3->size[0];
              r3->size[0] = unnamed_idx_0;
              emxEnsureCapacity_int32_T(r3, b_i);
              unnamed_idx_0 = 0;
              for (loop_ub = 0; loop_ub <= end; loop_ub++) {
                if (activeSet->data[loop_ub]) {
                  r3->data[unnamed_idx_0] = loop_ub + 1;
                  unnamed_idx_0++;
                }
              }

              unnamed_idx_0 = obj->ConstraintMatrix->size[1];
              loop_ub = obj->ConstraintMatrix->size[0];
              b_i = A->size[0] * A->size[1];
              A->size[0] = loop_ub;
              A->size[1] = r3->size[0];
              emxEnsureCapacity_real_T(A, b_i);
              end = r3->size[0];
              for (b_i = 0; b_i < end; b_i++) {
                for (i1 = 0; i1 < loop_ub; i1++) {
                  i2 = r3->data[b_i];
                  A->data[i1 + A->size[0] * b_i] = obj->ConstraintMatrix->
                    data[i1 + obj->ConstraintMatrix->size[0] *
                    (emlrtDynamicBoundsCheckR2012b(i2, 1, unnamed_idx_0,
                      &cc_emlrtBCI, sp) - 1)];
                }
              }

              st.site = &gh_emlrtRSI;
              f_dynamic_size_checks(&st, A, A, A->size[0], A->size[0]);
              st.site = &fh_emlrtRSI;
              d_mtimes(A, A, y);
              b_i = g_A->size[0] * g_A->size[1];
              g_A->size[0] = A->size[1];
              g_A->size[1] = A->size[0];
              emxEnsureCapacity_real_T(g_A, b_i);
              loop_ub = A->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                end = A->size[1];
                for (i1 = 0; i1 < end; i1++) {
                  g_A->data[i1 + g_A->size[0] * b_i] = A->data[b_i + A->size[0] *
                    i1];
                }
              }

              st.site = &rg_emlrtRSI;
              mldivide(&st, y, g_A, b_b);
              st.site = &gh_emlrtRSI;
              f_dynamic_size_checks(&st, A, b_b, A->size[1], b_b->size[0]);
              st.site = &fh_emlrtRSI;
              f_mtimes(A, b_b, B);
              for (b_i = 0; b_i < 2; b_i++) {
                iv[b_i] = 3;
              }

              emlrtSizeEqCheckNDR2012b(iv, *(int32_T (*)[2])B->size, &p_emlrtECI,
                sp);
              eye(V);
              for (b_i = 0; b_i < 9; b_i++) {
                sigma = V[b_i] - B->data[b_i];
                V[b_i] = sigma;
              }

              beta = alpha->data[idxl - 1];
              b_i = obj->ConstraintMatrix->size[1];
              unnamed_idx_0 = emlrtDynamicBoundsCheckR2012b((int32_T)beta, 1,
                b_i, &wb_emlrtBCI, sp);
              loop_ub = obj->ConstraintMatrix->size[0];
              b_i = alpha->size[0];
              alpha->size[0] = loop_ub;
              emxEnsureCapacity_real_T1(alpha, b_i);
              for (b_i = 0; b_i < loop_ub; b_i++) {
                alpha->data[b_i] = obj->ConstraintMatrix->data[b_i +
                  obj->ConstraintMatrix->size[0] * (unnamed_idx_0 - 1)];
              }

              st.site = &gh_emlrtRSI;
              b_dynamic_size_checks(&st, alpha, alpha->size[0]);
              st.site = &gh_emlrtRSI;
              c_dynamic_size_checks(&st, alpha, alpha->size[0]);
              b_i = c_alpha->size[0] * c_alpha->size[1];
              c_alpha->size[0] = 1;
              c_alpha->size[1] = alpha->size[0];
              emxEnsureCapacity_real_T(c_alpha, b_i);
              loop_ub = alpha->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                c_alpha->data[b_i] = alpha->data[b_i];
              }

              beta = 0.0;
              for (b_i = 0; b_i < 3; b_i++) {
                sNew[b_i] = 0.0;
                for (i1 = 0; i1 < 3; i1++) {
                  sigma = sNew[b_i] + c_alpha->data[i1] * V[i1 + 3 * b_i];
                  sNew[b_i] = sigma;
                }

                beta += sNew[b_i] * alpha->data[b_i];
              }

              sigma = 1.0 / beta;
              b_i = y->size[0] * y->size[1];
              y->size[0] = alpha->size[0];
              y->size[1] = alpha->size[0];
              emxEnsureCapacity_real_T(y, b_i);
              loop_ub = alpha->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                end = alpha->size[0];
                for (i1 = 0; i1 < end; i1++) {
                  y->data[i1 + y->size[0] * b_i] = alpha->data[i1] * alpha->
                    data[b_i];
                }
              }

              st.site = &gh_emlrtRSI;
              d_dynamic_size_checks(&st, y, y->size[0]);
              for (b_i = 0; b_i < 9; b_i++) {
                a[b_i] = sigma * V[b_i];
              }

              st.site = &fh_emlrtRSI;
              c_mtimes(a, y, b_y);
              st.site = &gh_emlrtRSI;
              e_dynamic_size_checks(&st, b_y->size[1]);
              for (b_i = 0; b_i < 3; b_i++) {
                for (i1 = 0; i1 < 3; i1++) {
                  m = 0.0;
                  for (i2 = 0; i2 < 3; i2++) {
                    m += b_y->data[b_i + 3 * i2] * V[i2 + 3 * i1];
                  }

                  H[b_i + 3 * i1] += m;
                }
              }

              i++;
            } else {
              guard3 = true;
            }
          } else {
            guard3 = true;
          }

          if (guard3) {
            for (b_i = 0; b_i < 3; b_i++) {
              Hg[b_i] = -Hg[b_i];
            }

            idxl = -1;
            if (obj->ConstraintsOn) {
              b_i = b_activeSet->size[0];
              b_activeSet->size[0] = activeSet->size[0];
              emxEnsureCapacity_boolean_T(b_activeSet, b_i);
              loop_ub = activeSet->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                b_activeSet->data[b_i] = !activeSet->data[b_i];
              }

              st.site = &sg_emlrtRSI;
              if (any(&st, b_activeSet)) {
                end = activeSet->size[0] - 1;
                unnamed_idx_0 = 0;
                for (loop_ub = 0; loop_ub <= end; loop_ub++) {
                  if (!activeSet->data[loop_ub]) {
                    unnamed_idx_0++;
                  }
                }

                b_i = r1->size[0];
                r1->size[0] = unnamed_idx_0;
                emxEnsureCapacity_int32_T(r1, b_i);
                unnamed_idx_0 = 0;
                for (loop_ub = 0; loop_ub <= end; loop_ub++) {
                  if (!activeSet->data[loop_ub]) {
                    r1->data[unnamed_idx_0] = loop_ub + 1;
                    unnamed_idx_0++;
                  }
                }

                unnamed_idx_0 = obj->ConstraintBound->size[0];
                b_i = bIn->size[0];
                bIn->size[0] = r1->size[0];
                emxEnsureCapacity_real_T1(bIn, b_i);
                loop_ub = r1->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  i1 = r1->data[b_i];
                  bIn->data[b_i] = obj->ConstraintBound->
                    data[emlrtDynamicBoundsCheckR2012b(i1, 1, unnamed_idx_0,
                    &bc_emlrtBCI, sp) - 1];
                }

                end = activeSet->size[0] - 1;
                unnamed_idx_0 = 0;
                for (loop_ub = 0; loop_ub <= end; loop_ub++) {
                  if (!activeSet->data[loop_ub]) {
                    unnamed_idx_0++;
                  }
                }

                b_i = r2->size[0];
                r2->size[0] = unnamed_idx_0;
                emxEnsureCapacity_int32_T(r2, b_i);
                unnamed_idx_0 = 0;
                for (loop_ub = 0; loop_ub <= end; loop_ub++) {
                  if (!activeSet->data[loop_ub]) {
                    r2->data[unnamed_idx_0] = loop_ub + 1;
                    unnamed_idx_0++;
                  }
                }

                unnamed_idx_0 = obj->ConstraintMatrix->size[1];
                loop_ub = obj->ConstraintMatrix->size[0];
                b_i = B->size[0] * B->size[1];
                B->size[0] = loop_ub;
                B->size[1] = r2->size[0];
                emxEnsureCapacity_real_T(B, b_i);
                end = r2->size[0];
                for (b_i = 0; b_i < end; b_i++) {
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    i2 = r2->data[b_i];
                    B->data[i1 + B->size[0] * b_i] = obj->ConstraintMatrix->
                      data[i1 + obj->ConstraintMatrix->size[0] *
                      (emlrtDynamicBoundsCheckR2012b(i2, 1, unnamed_idx_0,
                        &dc_emlrtBCI, sp) - 1)];
                  }
                }

                b_i = c_activeSet->size[0];
                c_activeSet->size[0] = activeSet->size[0];
                emxEnsureCapacity_boolean_T(c_activeSet, b_i);
                loop_ub = activeSet->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  c_activeSet->data[b_i] = !activeSet->data[b_i];
                }

                st.site = &sf_emlrtRSI;
                b_eml_find(&st, c_activeSet, ii);
                b_i = inactiveConstraintIndices->size[0];
                inactiveConstraintIndices->size[0] = ii->size[0];
                emxEnsureCapacity_int32_T(inactiveConstraintIndices, b_i);
                loop_ub = ii->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  inactiveConstraintIndices->data[b_i] = ii->data[b_i];
                }

                st.site = &gh_emlrtRSI;
                dynamic_size_checks(&st, B, B->size[0]);
                st.site = &fh_emlrtRSI;
                b_mtimes(B, x, alpha);
                b_i = bIn->size[0];
                i1 = alpha->size[0];
                emlrtSizeEqCheck1DR2012b(b_i, i1, &q_emlrtECI, sp);
                st.site = &gh_emlrtRSI;
                dynamic_size_checks(&st, B, B->size[0]);
                st.site = &fh_emlrtRSI;
                b_mtimes(B, Hg, gradNew);
                b_i = bIn->size[0];
                emxEnsureCapacity_real_T1(bIn, b_i);
                loop_ub = bIn->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  bIn->data[b_i] -= alpha->data[b_i];
                }

                if (bIn->size[0] != gradNew->size[0]) {
                  st.site = &rl_emlrtRSI;
                  b_error(&st, b_emlrt_marshallOut(&st, cv), getString(&st,
                           b_message(&st, b_emlrt_marshallOut(&st, cv),
                                     &v_emlrtMCI), &v_emlrtMCI), &v_emlrtMCI);
                }

                b_i = bIn->size[0];
                emxEnsureCapacity_real_T1(bIn, b_i);
                loop_ub = bIn->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  bIn->data[b_i] /= gradNew->data[b_i];
                }

                b_i = b_bIn->size[0];
                b_bIn->size[0] = bIn->size[0];
                emxEnsureCapacity_boolean_T(b_bIn, b_i);
                loop_ub = bIn->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  b_bIn->data[b_i] = (bIn->data[b_i] > 0.0);
                }

                st.site = &sf_emlrtRSI;
                b_eml_find(&st, b_bIn, ii);
                b_i = alpha->size[0];
                alpha->size[0] = ii->size[0];
                emxEnsureCapacity_real_T1(alpha, b_i);
                loop_ub = ii->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  alpha->data[b_i] = (real_T)ii->data[b_i];
                }

                if (alpha->size[0] != 0) {
                  end = bIn->size[0] - 1;
                  unnamed_idx_0 = 0;
                  for (loop_ub = 0; loop_ub <= end; loop_ub++) {
                    if (bIn->data[loop_ub] > 0.0) {
                      unnamed_idx_0++;
                    }
                  }

                  b_i = r4->size[0];
                  r4->size[0] = unnamed_idx_0;
                  emxEnsureCapacity_int32_T(r4, b_i);
                  unnamed_idx_0 = 0;
                  for (loop_ub = 0; loop_ub <= end; loop_ub++) {
                    if (bIn->data[loop_ub] > 0.0) {
                      r4->data[unnamed_idx_0] = loop_ub + 1;
                      unnamed_idx_0++;
                    }
                  }

                  unnamed_idx_0 = bIn->size[0];
                  loop_ub = r4->size[0];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    i1 = r4->data[b_i];
                    emlrtDynamicBoundsCheckR2012b(i1, 1, unnamed_idx_0,
                      &gc_emlrtBCI, sp);
                  }

                  b_i = c_bIn->size[0];
                  c_bIn->size[0] = r4->size[0];
                  emxEnsureCapacity_real_T1(c_bIn, b_i);
                  loop_ub = r4->size[0];
                  for (b_i = 0; b_i < loop_ub; b_i++) {
                    c_bIn->data[b_i] = bIn->data[r4->data[b_i] - 1];
                  }

                  st.site = &ih_emlrtRSI;
                  minimum(&st, c_bIn, &lambda, &idxl);
                  b_i = inactiveConstraintIndices->size[0];
                  i1 = alpha->size[0];
                  i1 = (int32_T)alpha->data[emlrtDynamicBoundsCheckR2012b(idxl,
                    1, i1, &hc_emlrtBCI, sp) - 1];
                  idxl = inactiveConstraintIndices->
                    data[emlrtDynamicBoundsCheckR2012b(i1, 1, b_i, &hc_emlrtBCI,
                    sp) - 1];
                } else {
                  lambda = 0.0;
                }
              } else {
                lambda = 0.0;
              }
            } else {
              lambda = 0.0;
            }

            if (lambda > 0.0) {
              b_gamma = minimum2(1.0, lambda);
            } else {
              b_gamma = 1.0;
            }

            beta = obj->ArmijoRuleBeta;
            sigma = obj->ArmijoRuleSigma;
            for (b_i = 0; b_i < 3; b_i++) {
              sNew[b_i] = x[b_i] + b_gamma * Hg[b_i];
            }

            st.site = &tg_emlrtRSI;
            IKHelpers_computeCost(&st, sNew, obj->ExtraArgs, &b_costNew,
                                  unusedU0, unusedU1, &r6);
            costNew = b_costNew;
            obj->ExtraArgs = r6;
            m = 0.0;
            do {
              exitg1 = 0;
              b_i = c_y->size[0] * c_y->size[1];
              c_y->size[0] = 1;
              c_y->size[1] = grad->size[0];
              emxEnsureCapacity_real_T(c_y, b_i);
              loop_ub = grad->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                c_y->data[b_i] = -sigma * grad->data[b_i];
              }

              st.site = &gh_emlrtRSI;
              i_dynamic_size_checks(&st, c_y, c_y->size[1]);
              e_y = 0.0;
              for (b_i = 0; b_i < 3; b_i++) {
                e_y += c_y->data[b_i] * (b_gamma * Hg[b_i]);
              }

              if (b_cost - costNew < e_y) {
                st.site = &ug_emlrtRSI;
                flag = (b_gamma < obj->StepTolerance);
                if (flag) {
                  *exitFlag =
                    robotics_core_internal_NLPSolverExitFlags_StepSizeBelowMinimum;
                  st.site = &vg_emlrtRSI;
                  *err = IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
                  *iter = (real_T)i + 1.0;
                  exitg1 = 1;
                } else {
                  b_gamma *= beta;
                  m++;
                  for (b_i = 0; b_i < 3; b_i++) {
                    sNew[b_i] = x[b_i] + b_gamma * Hg[b_i];
                  }

                  st.site = &wg_emlrtRSI;
                  IKHelpers_computeCost(&st, sNew, obj->ExtraArgs, &c_costNew,
                                        unusedU0, unusedU1, &r7);
                  costNew = c_costNew;
                  obj->ExtraArgs = r7;
                }
              } else {
                for (loop_ub = 0; loop_ub < 3; loop_ub++) {
                  xSol[loop_ub] = x[loop_ub] + b_gamma * Hg[loop_ub];
                }

                st.site = &xg_emlrtRSI;
                args = obj->ExtraArgs;
                b_i = gradNew->size[0];
                gradNew->size[0] = args->GradTemp->size[0];
                emxEnsureCapacity_real_T1(gradNew, b_i);
                loop_ub = args->GradTemp->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  gradNew->data[b_i] = args->GradTemp->data[b_i];
                }

                exitg1 = 2;
              }
            } while (exitg1 == 0);

            if (exitg1 == 1) {
              exitg2 = 1;
            } else if (m == 0.0) {
              m = 2.2204460492503131E-16;
              st.site = &yg_emlrtRSI;
              b_sqrt(&st, &m);
              if (muDoubleScalarAbs(b_gamma - lambda) < 1.4901161193847656E-8) {
                b_i = obj->ConstraintMatrix->size[1];
                unnamed_idx_0 = emlrtDynamicBoundsCheckR2012b(idxl, 1, b_i,
                  &xb_emlrtBCI, sp);
                loop_ub = obj->ConstraintMatrix->size[0];
                b_i = alpha->size[0];
                alpha->size[0] = loop_ub;
                emxEnsureCapacity_real_T1(alpha, b_i);
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  alpha->data[b_i] = obj->ConstraintMatrix->data[b_i +
                    obj->ConstraintMatrix->size[0] * (unnamed_idx_0 - 1)];
                }

                b_i = activeSet->size[0];
                activeSet->data[emlrtDynamicBoundsCheckR2012b(idxl, 1, b_i,
                  &ec_emlrtBCI, sp) - 1] = true;
                end = activeSet->size[0] - 1;
                unnamed_idx_0 = 0;
                for (loop_ub = 0; loop_ub <= end; loop_ub++) {
                  if (activeSet->data[loop_ub]) {
                    unnamed_idx_0++;
                  }
                }

                b_i = r5->size[0];
                r5->size[0] = unnamed_idx_0;
                emxEnsureCapacity_int32_T(r5, b_i);
                unnamed_idx_0 = 0;
                for (loop_ub = 0; loop_ub <= end; loop_ub++) {
                  if (activeSet->data[loop_ub]) {
                    r5->data[unnamed_idx_0] = loop_ub + 1;
                    unnamed_idx_0++;
                  }
                }

                unnamed_idx_0 = obj->ConstraintMatrix->size[1];
                loop_ub = obj->ConstraintMatrix->size[0];
                b_i = A->size[0] * A->size[1];
                A->size[0] = loop_ub;
                A->size[1] = r5->size[0];
                emxEnsureCapacity_real_T(A, b_i);
                end = r5->size[0];
                for (b_i = 0; b_i < end; b_i++) {
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    i2 = r5->data[b_i];
                    A->data[i1 + A->size[0] * b_i] = obj->ConstraintMatrix->
                      data[i1 + obj->ConstraintMatrix->size[0] *
                      (emlrtDynamicBoundsCheckR2012b(i2, 1, unnamed_idx_0,
                        &fc_emlrtBCI, sp) - 1)];
                  }
                }

                st.site = &gh_emlrtRSI;
                b_dynamic_size_checks(&st, alpha, alpha->size[0]);
                st.site = &gh_emlrtRSI;
                c_dynamic_size_checks(&st, alpha, alpha->size[0]);
                b_i = y->size[0] * y->size[1];
                y->size[0] = alpha->size[0];
                y->size[1] = alpha->size[0];
                emxEnsureCapacity_real_T(y, b_i);
                loop_ub = alpha->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  end = alpha->size[0];
                  for (i1 = 0; i1 < end; i1++) {
                    y->data[i1 + y->size[0] * b_i] = alpha->data[i1] *
                      alpha->data[b_i];
                  }
                }

                st.site = &gh_emlrtRSI;
                j_dynamic_size_checks(&st, y, y->size[1]);
                st.site = &fh_emlrtRSI;
                g_mtimes(y, H, d_y);
                st.site = &gh_emlrtRSI;
                k_dynamic_size_checks(&st, d_y->size[0]);
                b_i = d_alpha->size[0] * d_alpha->size[1];
                d_alpha->size[0] = 1;
                d_alpha->size[1] = alpha->size[0];
                emxEnsureCapacity_real_T(d_alpha, b_i);
                loop_ub = alpha->size[0];
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  d_alpha->data[b_i] = alpha->data[b_i];
                }

                beta = 0.0;
                for (b_i = 0; b_i < 3; b_i++) {
                  sNew[b_i] = 0.0;
                  for (i1 = 0; i1 < 3; i1++) {
                    sigma = sNew[b_i] + d_alpha->data[i1] * H[i1 + 3 * b_i];
                    sNew[b_i] = sigma;
                  }

                  beta += sNew[b_i] * alpha->data[b_i];
                }

                sigma = 1.0 / beta;
                for (b_i = 0; b_i < 3; b_i++) {
                  for (i1 = 0; i1 < 3; i1++) {
                    a[b_i + 3 * i1] = 0.0;
                    for (i2 = 0; i2 < 3; i2++) {
                      a[b_i + 3 * i1] += H[b_i + 3 * i2] * d_y->data[i2 + 3 * i1];
                    }
                  }
                }

                for (b_i = 0; b_i < 9; b_i++) {
                  H[b_i] -= sigma * a[b_i];
                }

                guard1 = true;
              } else {
                guard2 = true;
              }
            } else {
              guard2 = true;
            }
          }

          if (guard2) {
            b_i = gradNew->size[0];
            i1 = grad->size[0];
            emlrtSizeEqCheck1DR2012b(b_i, i1, &r_emlrtECI, sp);
            b_i = grad->size[0];
            grad->size[0] = gradNew->size[0];
            emxEnsureCapacity_real_T1(grad, b_i);
            loop_ub = gradNew->size[0];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              grad->data[b_i] = gradNew->data[b_i] - grad->data[b_i];
            }

            st.site = &gh_emlrtRSI;
            l_dynamic_size_checks(&st, grad, grad->size[0]);
            b_i = c_y->size[0] * c_y->size[1];
            c_y->size[0] = 1;
            c_y->size[1] = grad->size[0];
            emxEnsureCapacity_real_T(c_y, b_i);
            loop_ub = grad->size[0];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              c_y->data[b_i] = 0.2 * grad->data[b_i];
            }

            st.site = &gh_emlrtRSI;
            m_dynamic_size_checks(&st, c_y, c_y->size[1]);
            st.site = &gh_emlrtRSI;
            c_dynamic_size_checks(&st, grad, grad->size[0]);
            m = 0.0;
            for (b_i = 0; b_i < 3; b_i++) {
              m += Hg[b_i] * grad->data[b_i];
            }

            e_y = 0.0;
            for (b_i = 0; b_i < 3; b_i++) {
              sNew[b_i] = 0.0;
              for (i1 = 0; i1 < 3; i1++) {
                beta = sNew[b_i] + c_y->data[i1] * H[i1 + 3 * b_i];
                sNew[b_i] = beta;
              }

              e_y += sNew[b_i] * grad->data[b_i];
            }

            if (m < e_y) {
              b_i = c_y->size[0] * c_y->size[1];
              c_y->size[0] = 1;
              c_y->size[1] = grad->size[0];
              emxEnsureCapacity_real_T(c_y, b_i);
              loop_ub = grad->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                c_y->data[b_i] = 0.8 * grad->data[b_i];
              }

              st.site = &gh_emlrtRSI;
              m_dynamic_size_checks(&st, c_y, c_y->size[1]);
              st.site = &gh_emlrtRSI;
              c_dynamic_size_checks(&st, grad, grad->size[0]);
              st.site = &gh_emlrtRSI;
              b_dynamic_size_checks(&st, grad, grad->size[0]);
              st.site = &gh_emlrtRSI;
              c_dynamic_size_checks(&st, grad, grad->size[0]);
              st.site = &gh_emlrtRSI;
              l_dynamic_size_checks(&st, grad, grad->size[0]);
              e_y = 0.0;
              for (b_i = 0; b_i < 3; b_i++) {
                sNew[b_i] = 0.0;
                for (i1 = 0; i1 < 3; i1++) {
                  beta = sNew[b_i] + c_y->data[i1] * H[i1 + 3 * b_i];
                  sNew[b_i] = beta;
                }

                e_y += sNew[b_i] * grad->data[b_i];
              }

              b_i = b_grad->size[0] * b_grad->size[1];
              b_grad->size[0] = 1;
              b_grad->size[1] = grad->size[0];
              emxEnsureCapacity_real_T(b_grad, b_i);
              loop_ub = grad->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                b_grad->data[b_i] = grad->data[b_i];
              }

              beta = 0.0;
              m = 0.0;
              for (b_i = 0; b_i < 3; b_i++) {
                sNew[b_i] = 0.0;
                for (i1 = 0; i1 < 3; i1++) {
                  sigma = sNew[b_i] + b_grad->data[i1] * H[i1 + 3 * b_i];
                  sNew[b_i] = sigma;
                }

                beta += sNew[b_i] * grad->data[b_i];
                m += Hg[b_i] * grad->data[b_i];
              }

              sigma = e_y / (beta - m);
            } else {
              sigma = 1.0;
            }

            st.site = &gh_emlrtRSI;
            h_dynamic_size_checks(&st, grad, grad->size[0]);
            for (b_i = 0; b_i < 3; b_i++) {
              m = 0.0;
              for (i1 = 0; i1 < 3; i1++) {
                m += (1.0 - sigma) * H[b_i + 3 * i1] * grad->data[i1];
              }

              sNew[b_i] = sigma * Hg[b_i] + m;
            }

            st.site = &gh_emlrtRSI;
            l_dynamic_size_checks(&st, grad, grad->size[0]);
            beta = 0.0;
            for (b_i = 0; b_i < 3; b_i++) {
              beta += sNew[b_i] * grad->data[b_i];
            }

            b_i = b_y->size[0] * b_y->size[1];
            b_y->size[0] = 3;
            b_y->size[1] = grad->size[0];
            emxEnsureCapacity_real_T(b_y, b_i);
            loop_ub = grad->size[0];
            for (b_i = 0; b_i < loop_ub; b_i++) {
              for (i1 = 0; i1 < 3; i1++) {
                m = sNew[i1] * grad->data[b_i];
                b_y->data[i1 + 3 * b_i] = m / beta;
              }
            }

            for (b_i = 0; b_i < 2; b_i++) {
              iv[b_i] = 3;
            }

            emlrtSizeEqCheckNDR2012b(iv, *(int32_T (*)[2])b_y->size, &s_emlrtECI,
              sp);
            eye(V);
            for (b_i = 0; b_i < 9; b_i++) {
              sigma = V[b_i] - b_y->data[b_i];
              V[b_i] = sigma;
            }

            for (b_i = 0; b_i < 3; b_i++) {
              for (i1 = 0; i1 < 3; i1++) {
                a[b_i + 3 * i1] = 0.0;
                for (i2 = 0; i2 < 3; i2++) {
                  a[b_i + 3 * i1] += V[b_i + 3 * i2] * H[i2 + 3 * i1];
                }
              }

              for (i1 = 0; i1 < 3; i1++) {
                b_V[b_i + 3 * i1] = 0.0;
                for (i2 = 0; i2 < 3; i2++) {
                  b_V[b_i + 3 * i1] += a[b_i + 3 * i2] * V[i1 + 3 * i2];
                }
              }
            }

            for (b_i = 0; b_i < 3; b_i++) {
              for (i1 = 0; i1 < 3; i1++) {
                V[i1 + 3 * b_i] = sNew[i1] * sNew[b_i] / beta;
              }
            }

            for (b_i = 0; b_i < 9; b_i++) {
              sigma = b_V[b_i] + V[b_i];
              a[b_i] = sigma + f_y[b_i];
              H[b_i] = sigma;
            }

            st.site = &ah_emlrtRSI;
            if (!isPositiveDefinite(&st, a)) {
              *exitFlag =
                c_robotics_core_internal_NLPSolverExitFlags_HessianNotPositiveSe;
              st.site = &bh_emlrtRSI;
              *err = IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
              *iter = (real_T)i + 1.0;
              exitg2 = 1;
            } else {
              guard1 = true;
            }
          }

          if (guard1) {
            st.site = &ch_emlrtRSI;
            if (DampedBFGSwGradientProjection_searchDirectionInvalid(&st, obj,
                 xSol)) {
              for (loop_ub = 0; loop_ub < 3; loop_ub++) {
                xSol[loop_ub] = x[loop_ub];
              }

              *exitFlag =
                robotics_core_internal_NLPSolverExitFlags_SearchDirectionInvalid;
              st.site = &dh_emlrtRSI;
              *err = IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
              *iter = (real_T)i + 1.0;
              exitg2 = 1;
            } else {
              for (loop_ub = 0; loop_ub < 3; loop_ub++) {
                x[loop_ub] = xSol[loop_ub];
              }

              b_i = grad->size[0];
              grad->size[0] = gradNew->size[0];
              emxEnsureCapacity_real_T1(grad, b_i);
              loop_ub = gradNew->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                grad->data[b_i] = gradNew->data[b_i];
              }

              b_cost = costNew;
              i++;
            }
          }
        }
      }
    } else {
      *exitFlag =
        robotics_core_internal_NLPSolverExitFlags_IterationLimitExceeded;
      st.site = &eh_emlrtRSI;
      *err = IKHelpers_evaluateSolution(&st, obj->ExtraArgs);
      *iter = obj->MaxNumIterationInternal;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  emxFree_real_T(&d_alpha);
  emxFree_real_T(&c_bIn);
  emxFree_real_T(&b_grad);
  emxFree_real_T(&c_alpha);
  emxFree_boolean_T(&b_bIn);
  emxFree_real_T(&g_A);
  emxFree_boolean_T(&c_activeSet);
  emxFree_real_T(&b_alpha);
  emxFree_boolean_T(&b_activeSet);
  emxFree_real_T(&f_A);
  emxFree_real_T(&d_y);
  emxFree_int32_T(&ii);
  emxFree_real_T(&b_b);
  emxFree_real_T(&c_y);
  emxFree_real_T(&b_y);
  emxFree_real_T(&y);
  emxFree_int32_T(&r5);
  emxFree_int32_T(&r4);
  emxFree_int32_T(&r3);
  emxFree_int32_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_real_T(&gradNew);
  emxFree_int32_T(&inactiveConstraintIndices);
  emxFree_real_T(&bIn);
  emxFree_real_T(&B);
  emxFree_real_T(&alpha);
  emxFree_real_T(&A);
  emxFree_boolean_T(&activeSet);
  emxFree_real_T(&grad);
  emxFree_real_T(&unusedU1);
}

static void IKHelpers_computeCost(const emlrtStack *sp, real_T x[3],
  robotics_manip_internal_IKExtraArgs *args, real_T *cost, real_T W[36],
  emxArray_real_T *Jac, robotics_manip_internal_IKExtraArgs **b_args)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *bodyName;
  emxArray_real_T *J;
  emxArray_real_T *b_y;
  robotics_manip_internal_RigidBodyTree_1 *treeInternal;
  real_T T_data[16];
  real_T Td[16];
  real_T b_Td[9];
  real_T e[6];
  real_T y[6];
  real_T v[4];
  real_T alpha1;
  real_T beta1;
  int32_T T_size[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&bodyName, 2);
  *b_args = args;
  treeInternal = (*b_args)->Robot;
  i = bodyName->size[0] * bodyName->size[1];
  bodyName->size[0] = 1;
  bodyName->size[1] = (*b_args)->BodyName->size[1];
  emxEnsureCapacity_char_T(bodyName, i);
  loop_ub = (*b_args)->BodyName->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bodyName->data[i] = (*b_args)->BodyName->data[i];
  }

  for (i = 0; i < 16; i++) {
    Td[i] = (*b_args)->Tform[i];
  }

  for (i = 0; i < 36; i++) {
    W[i] = (*b_args)->WeightMatrix[i];
  }

  emxInit_real_T(&J, 2);
  st.site = &jh_emlrtRSI;
  RigidBodyTree_efficientFKAndJacobianForIK(&st, treeInternal, x, bodyName,
    T_data, T_size, J);
  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  Jac->size[1] = J->size[1];
  emxEnsureCapacity_real_T(Jac, i);
  loop_ub = 6 * J->size[1] - 1;
  emxFree_char_T(&bodyName);
  for (i = 0; i <= loop_ub; i++) {
    Jac->data[i] = -J->data[i];
  }

  emxFree_real_T(&J);
  st.site = &kh_emlrtRSI;
  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[0], &jc_emlrtBCI, &st);
  }

  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[1], &kc_emlrtBCI, &st);
  }

  emlrtDynamicBoundsCheckR2012b(4, 1, T_size[1], &ic_emlrtBCI, &st);
  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, T_size[0], &lc_emlrtBCI, &st);
  }

  for (i = 0; i < 3; i++) {
    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_Td[i + 3 * loop_ub] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        b_Td[i + 3 * loop_ub] += Td[i + (i1 << 2)] * T_data[loop_ub + T_size[0] *
          i1];
      }
    }
  }

  b_st.site = &di_emlrtRSI;
  rotm2axang(&b_st, b_Td, v);
  for (i = 0; i < 3; i++) {
    e[i] = v[3] * v[i];
    e[i + 3] = Td[i + 12] - T_data[i + T_size[0] * 3];
  }

  i = (*b_args)->ErrTemp->size[0];
  (*b_args)->ErrTemp->size[0] = 6;
  emxEnsureCapacity_real_T1((*b_args)->ErrTemp, i);
  for (i = 0; i < 6; i++) {
    (*b_args)->ErrTemp->data[i] = e[i];
  }

  for (i = 0; i < 6; i++) {
    y[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      alpha1 = y[i] + 0.5 * e[loop_ub] * W[loop_ub + 6 * i];
      y[i] = alpha1;
    }
  }

  alpha1 = 0.0;
  for (i = 0; i < 6; i++) {
    alpha1 += y[i] * e[i];
  }

  (*b_args)->CostTemp = alpha1;
  for (i = 0; i < 6; i++) {
    y[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      alpha1 = y[i] + e[loop_ub] * W[loop_ub + 6 * i];
      y[i] = alpha1;
    }
  }

  emxInit_real_T(&b_y, 2);
  st.site = &fh_emlrtRSI;
  if (Jac->size[1] == 0) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)Jac->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)1;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)1;
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = Jac->size[1];
    emxEnsureCapacity_real_T(b_y, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &y[0], &lda_t,
          &Jac->data[0], &ldb_t, &beta1, &b_y->data[0], &ldc_t);
  }

  i = (*b_args)->GradTemp->size[0];
  (*b_args)->GradTemp->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T1((*b_args)->GradTemp, i);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    (*b_args)->GradTemp->data[i] = b_y->data[i];
  }

  emxFree_real_T(&b_y);
  alpha1 = (*b_args)->CostTemp;
  *cost = alpha1;
}

static void RigidBodyTree_efficientFKAndJacobianForIK(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T qv[3], emxArray_char_T
  *body1Name, real_T T_data[], int32_T T_size[2], emxArray_real_T *Jac)
{
  static int8_T iv[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *body2Name;
  emxArray_real_T *JacSlice;
  emxArray_real_T *ancestorIndices1;
  emxArray_real_T *ancestorIndices2;
  emxArray_real_T *b_Jac;
  emxArray_real_T *kinematicPathIndices;
  emxArray_real_T *y;
  rigidBodyJoint *joint;
  robotics_manip_internal_RigidBody_1 *body1;
  robotics_manip_internal_RigidBody_1 *body2;
  real_T R[36];
  real_T T1[16];
  real_T T1j[16];
  real_T Tc2p[16];
  real_T Tj[16];
  real_T Tj1[16];
  real_T b_R[9];
  real_T c_R[9];
  real_T dv[9];
  real_T qv_data[3];
  real_T qidx[2];
  real_T bid1;
  real_T bid2;
  int32_T iv1[2];
  int32_T qv_size[1];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T jointSign;
  int32_T loop_ub;
  int32_T minPathLength;
  boolean_T exitg1;
  boolean_T nextBodyIsParent;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emxInit_char_T(&body2Name, 2);
  st.site = &qh_emlrtRSI;
  i = body2Name->size[0] * body2Name->size[1];
  body2Name->size[0] = 1;
  body2Name->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(body2Name, i);
  loop_ub = obj->Base.NameInternal->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    body2Name->data[i] = obj->Base.NameInternal->data[i];
  }

  st.site = &ph_emlrtRSI;
  bid1 = RigidBodyTree_validateInputBodyName(&st, obj, body1Name);
  st.site = &oh_emlrtRSI;
  bid2 = RigidBodyTree_validateInputBodyName(&st, obj, body2Name);
  emxFree_char_T(&body2Name);
  if (bid1 == 0.0) {
    body1 = &obj->Base;
  } else {
    body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid1 - 1, 0, 3,
      &uc_emlrtBCI, sp)];
  }

  if (bid2 == 0.0) {
    body2 = &obj->Base;
  } else {
    body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b((int32_T)bid2 - 1, 0, 3,
      &vc_emlrtBCI, sp)];
  }

  emxInit_real_T(&ancestorIndices1, 2);
  emxInit_real_T(&ancestorIndices2, 2);
  st.site = &nh_emlrtRSI;
  b_st.site = &rh_emlrtRSI;
  RigidBodyTree_ancestorIndices(&b_st, obj, body1, ancestorIndices1);
  b_st.site = &sh_emlrtRSI;
  RigidBodyTree_ancestorIndices(&b_st, obj, body2, ancestorIndices2);
  minPathLength = (int32_T)muDoubleScalarMin((real_T)ancestorIndices1->size[1],
    (real_T)ancestorIndices2->size[1]);
  b_i = 1;
  exitg1 = false;
  while ((!exitg1) && (b_i - 1 <= minPathLength - 2)) {
    i = ancestorIndices1->size[1];
    i1 = ancestorIndices1->size[1] - b_i;
    i2 = ancestorIndices2->size[1];
    i3 = ancestorIndices2->size[1] - b_i;
    if (ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b(i1, 1, i,
         &wc_emlrtBCI, &st) - 1] != ancestorIndices2->
        data[emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &xc_emlrtBCI, &st) - 1]) {
      minPathLength = b_i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  i = ancestorIndices1->size[1];
  i1 = (ancestorIndices1->size[1] - minPathLength) + 1;
  bid1 = ancestorIndices1->data[emlrtDynamicBoundsCheckR2012b(i1, 1, i,
    &yc_emlrtBCI, &st) - 1];
  i = ancestorIndices1->size[1] - minPathLength;
  if (1 > i) {
    loop_ub = -1;
  } else {
    i1 = ancestorIndices1->size[1];
    loop_ub = emlrtDynamicBoundsCheckR2012b(i, 1, i1, &sc_emlrtBCI, &st) - 1;
  }

  i = ancestorIndices2->size[1] - minPathLength;
  if (1 > i) {
    i = 0;
    i1 = 1;
    i2 = -1;
  } else {
    i1 = ancestorIndices2->size[1];
    i = emlrtDynamicBoundsCheckR2012b(i, 1, i1, &tc_emlrtBCI, &st) - 1;
    i1 = -1;
    i2 = 0;
  }

  emxInit_real_T(&kinematicPathIndices, 2);
  i3 = kinematicPathIndices->size[0] * kinematicPathIndices->size[1];
  kinematicPathIndices->size[0] = 1;
  b_st.site = &nh_emlrtRSI;
  kinematicPathIndices->size[1] = (loop_ub + div_s32_floor(&b_st, i2 - i, i1)) +
    3;
  emxEnsureCapacity_real_T(kinematicPathIndices, i3);
  for (i3 = 0; i3 <= loop_ub; i3++) {
    kinematicPathIndices->data[i3] = ancestorIndices1->data[i3];
  }

  emxFree_real_T(&ancestorIndices1);
  kinematicPathIndices->data[loop_ub + 1] = bid1;
  b_st.site = &an_emlrtRSI;
  minPathLength = div_s32_floor(&b_st, i2 - i, i1);
  for (i2 = 0; i2 <= minPathLength; i2++) {
    kinematicPathIndices->data[(i2 + loop_ub) + 2] = ancestorIndices2->data[i +
      i1 * i2];
  }

  emxFree_real_T(&ancestorIndices2);
  for (i = 0; i < 16; i++) {
    T1[i] = 0.0;
  }

  for (minPathLength = 0; minPathLength < 4; minPathLength++) {
    T1[minPathLength + (minPathLength << 2)] = 1.0;
  }

  i = Jac->size[0] * Jac->size[1];
  Jac->size[0] = 6;
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &ac_emlrtDCI, sp);
  Jac->size[1] = (int32_T)emlrtIntegerCheckR2012b(bid1, &yb_emlrtDCI, sp);
  emxEnsureCapacity_real_T(Jac, i);
  bid1 = emlrtNonNegativeCheckR2012b(obj->PositionNumber, &ac_emlrtDCI, sp);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(bid1, &yb_emlrtDCI, sp) - 1;
  for (i = 0; i <= loop_ub; i++) {
    Jac->data[i] = 0.0;
  }

  i = kinematicPathIndices->size[1] - 2;
  emxInit_real_T(&JacSlice, 2);
  emxInit_real_T(&y, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1,
         &ad_emlrtBCI, sp) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
        i1, &dd_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &bc_emlrtDCI, sp) - 1;
      body1 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 3, &cd_emlrtBCI,
        sp)];
    } else {
      body1 = &obj->Base;
    }

    i1 = kinematicPathIndices->size[1];
    if (kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(b_i + 2, 1, i1,
         &bd_emlrtBCI, sp) - 1] != 0.0) {
      i1 = kinematicPathIndices->size[1];
      bid1 = kinematicPathIndices->data[emlrtDynamicBoundsCheckR2012b(b_i + 2, 1,
        i1, &fd_emlrtBCI, sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(bid1, &cc_emlrtDCI, sp) - 1;
      body2 = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 3, &ed_emlrtBCI,
        sp)];
    } else {
      body2 = &obj->Base;
    }

    nextBodyIsParent = (body2->Index == body1->ParentIndex);
    if (nextBodyIsParent) {
      body2 = body1;
      jointSign = 1;
    } else {
      jointSign = -1;
    }

    joint = body2->JointInternal;
    if (e_strcmp(joint->Type)) {
      st.site = &mh_emlrtRSI;
      rigidBodyJoint_transformBodyToParent(&st, joint, Tc2p);
    } else {
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &xb_emlrtDCI, sp);
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 4, &rc_emlrtBCI, sp);
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->PositionDoFMap[(minPathLength + (i1 << 2)) - 1];
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &wb_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 3, &qc_emlrtBCI, sp) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &vb_emlrtDCI, sp);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 3, &pc_emlrtBCI, sp) - 1;
      }

      qv_size[0] = (i2 - i1) + 1;
      loop_ub = i2 - i1;
      for (i2 = 0; i2 <= loop_ub; i2++) {
        qv_data[i2] = qv[i1 + i2];
      }

      st.site = &lh_emlrtRSI;
      b_rigidBodyJoint_transformBodyToParent(&st, joint, qv_data, qv_size, Tc2p);
      i1 = (int32_T)emlrtIntegerCheckR2012b(body2->Index, &ub_emlrtDCI, sp);
      minPathLength = emlrtDynamicBoundsCheckR2012b(i1, 1, 4, &oc_emlrtBCI, sp);
      for (i1 = 0; i1 < 2; i1++) {
        qidx[i1] = obj->VelocityDoFMap[(minPathLength + (i1 << 2)) - 1];
      }

      if (nextBodyIsParent) {
        for (i1 = 0; i1 < 16; i1++) {
          Tj[i1] = joint->ChildToJointTransform[i1];
        }
      } else {
        for (i1 = 0; i1 < 16; i1++) {
          Tj1[i1] = joint->JointToParentTransform[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            b_R[i2 + 3 * i1] = Tj1[i1 + (i2 << 2)];
          }
        }

        for (i1 = 0; i1 < 9; i1++) {
          c_R[i1] = -b_R[i1];
        }

        for (i1 = 0; i1 < 3; i1++) {
          qv_data[i1] = 0.0;
          for (i2 = 0; i2 < 3; i2++) {
            Tj[i2 + (i1 << 2)] = b_R[i2 + 3 * i1];
            qv_data[i1] += c_R[i1 + 3 * i2] * Tj1[i2 + 12];
          }

          Tj[i1 + 12] = qv_data[i1];
        }

        for (i1 = 0; i1 < 4; i1++) {
          Tj[(i1 << 2) + 3] = (real_T)iv[i1];
        }
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          T1j[i1 + (i2 << 2)] = 0.0;
          for (i3 = 0; i3 < 4; i3++) {
            T1j[i1 + (i2 << 2)] += Tj[i1 + (i3 << 2)] * T1[i3 + (i2 << 2)];
          }
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          b_R[i2 + 3 * i1] = T1j[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 < 9; i1++) {
        c_R[i1] = -b_R[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        qv_data[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          Tj1[i2 + (i1 << 2)] = b_R[i2 + 3 * i1];
          qv_data[i1] += c_R[i1 + 3 * i2] * T1j[i2 + 12];
        }

        Tj1[i1 + 12] = qv_data[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        Tj1[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          b_R[i2 + 3 * i1] = Tj1[i2 + (i1 << 2)];
        }
      }

      i1 = JacSlice->size[0] * JacSlice->size[1];
      JacSlice->size[0] = 6;
      JacSlice->size[1] = joint->MotionSubspace->size[1];
      emxEnsureCapacity_real_T(JacSlice, i1);
      loop_ub = 6 * joint->MotionSubspace->size[1] - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        JacSlice->data[i1] = joint->MotionSubspace->data[i1];
      }

      c_R[0] = 0.0;
      c_R[3] = -Tj1[14];
      c_R[6] = Tj1[13];
      c_R[1] = Tj1[14];
      c_R[4] = 0.0;
      c_R[7] = -Tj1[12];
      c_R[2] = -Tj1[13];
      c_R[5] = Tj1[12];
      c_R[8] = 0.0;
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          dv[i1 + 3 * i2] = 0.0;
          for (i3 = 0; i3 < 3; i3++) {
            dv[i1 + 3 * i2] += c_R[i1 + 3 * i3] * b_R[i3 + 3 * i2];
          }

          R[i2 + 6 * i1] = b_R[i2 + 3 * i1];
          R[i2 + 6 * (i1 + 3)] = 0.0;
        }
      }

      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          R[(i2 + 6 * i1) + 3] = dv[i2 + 3 * i1];
          R[(i2 + 6 * (i1 + 3)) + 3] = b_R[i2 + 3 * i1];
        }
      }

      st.site = &fh_emlrtRSI;
      mtimes(R, JacSlice, y);
      i1 = JacSlice->size[0] * JacSlice->size[1];
      JacSlice->size[0] = 6;
      JacSlice->size[1] = y->size[1];
      emxEnsureCapacity_real_T(JacSlice, i1);
      loop_ub = 6 * y->size[1] - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        JacSlice->data[i1] = y->data[i1] * (real_T)jointSign;
      }

      if (qidx[0] > qidx[1]) {
        i1 = 0;
        i2 = -1;
      } else {
        i1 = Jac->size[1];
        i2 = (int32_T)emlrtIntegerCheckR2012b(qidx[0], &tb_emlrtDCI, sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &nc_emlrtBCI, sp) - 1;
        i2 = Jac->size[1];
        i3 = (int32_T)emlrtIntegerCheckR2012b(qidx[1], &sb_emlrtDCI, sp);
        i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &mc_emlrtBCI, sp) - 1;
      }

      iv1[0] = 6;
      iv1[1] = (i2 - i1) + 1;
      emlrtSubAssignSizeCheckR2012b(iv1, 2, *(int32_T (*)[2])JacSlice->size, 2,
        &t_emlrtECI, sp);
      loop_ub = JacSlice->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (i3 = 0; i3 < 6; i3++) {
          Jac->data[i3 + 6 * (i1 + i2)] = JacSlice->data[i3 + 6 * i2];
        }
      }
    }

    if (nextBodyIsParent) {
      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          Tj1[i1 + (i2 << 2)] = 0.0;
          for (i3 = 0; i3 < 4; i3++) {
            Tj1[i1 + (i2 << 2)] += Tc2p[i1 + (i3 << 2)] * T1[i3 + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &Tj1[0], sizeof(real_T) << 4);
    } else {
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          b_R[i2 + 3 * i1] = Tc2p[i1 + (i2 << 2)];
        }
      }

      for (i1 = 0; i1 < 9; i1++) {
        c_R[i1] = -b_R[i1];
      }

      for (i1 = 0; i1 < 3; i1++) {
        qv_data[i1] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          Tj[i2 + (i1 << 2)] = b_R[i2 + 3 * i1];
          qv_data[i1] += c_R[i1 + 3 * i2] * Tc2p[i2 + 12];
        }

        Tj[i1 + 12] = qv_data[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        Tj[(i1 << 2) + 3] = (real_T)iv[i1];
      }

      for (i1 = 0; i1 < 4; i1++) {
        for (i2 = 0; i2 < 4; i2++) {
          Tj1[i1 + (i2 << 2)] = 0.0;
          for (i3 = 0; i3 < 4; i3++) {
            Tj1[i1 + (i2 << 2)] += Tj[i1 + (i3 << 2)] * T1[i3 + (i2 << 2)];
          }
        }
      }

      memcpy(&T1[0], &Tj1[0], sizeof(real_T) << 4);
    }
  }

  emxFree_real_T(&y);
  emxFree_real_T(&JacSlice);
  emxFree_real_T(&kinematicPathIndices);
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      R[i1 + 6 * i] = T1[i1 + (i << 2)];
      R[i1 + 6 * (i + 3)] = 0.0;
      R[(i1 + 6 * i) + 3] = 0.0;
      R[(i1 + 6 * (i + 3)) + 3] = T1[i1 + (i << 2)];
    }
  }

  emxInit_real_T(&b_Jac, 2);
  i = b_Jac->size[0] * b_Jac->size[1];
  b_Jac->size[0] = 6;
  b_Jac->size[1] = Jac->size[1];
  emxEnsureCapacity_real_T(b_Jac, i);
  loop_ub = Jac->size[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < 6; i1++) {
      b_Jac->data[i1 + 6 * i] = Jac->data[i1 + 6 * i];
    }
  }

  st.site = &fh_emlrtRSI;
  mtimes(R, b_Jac, Jac);
  T_size[0] = 4;
  T_size[1] = 4;
  emxFree_real_T(&b_Jac);
  memcpy(&T_data[0], &T1[0], sizeof(real_T) << 4);
}

static void RigidBodyTree_ancestorIndices(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj,
  robotics_manip_internal_RigidBody_1 *body, emxArray_real_T *indices)
{
  real_T d;
  int32_T i;
  int32_T loop_ub;
  uint32_T b_i;
  i = indices->size[0] * indices->size[1];
  indices->size[0] = 1;
  d = obj->NumBodies + 1.0;
  d = emlrtNonNegativeCheckR2012b(d, &ec_emlrtDCI, sp);
  indices->size[1] = (int32_T)emlrtIntegerCheckR2012b(d, &dc_emlrtDCI, sp);
  emxEnsureCapacity_real_T(indices, i);
  d = obj->NumBodies + 1.0;
  d = emlrtNonNegativeCheckR2012b(d, &ec_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(d, &dc_emlrtDCI, sp) - 1;
  for (i = 0; i <= loop_ub; i++) {
    indices->data[i] = 0.0;
  }

  b_i = 2U;
  i = indices->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &id_emlrtBCI, sp);
  indices->data[0] = body->Index;
  while (body->ParentIndex > 0.0) {
    i = (int32_T)emlrtIntegerCheckR2012b(body->ParentIndex, &fc_emlrtDCI, sp) -
      1;
    body = obj->Bodies[emlrtDynamicBoundsCheckR2012b(i, 0, 3, &jd_emlrtBCI, sp)];
    i = indices->size[1];
    indices->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i, &ld_emlrtBCI,
      sp) - 1] = body->Index;
    b_i++;
  }

  if (body->Index > 0.0) {
    i = indices->size[1];
    indices->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, i, &kd_emlrtBCI,
      sp) - 1] = body->ParentIndex;
    b_i++;
  }

  i = indices->size[1];
  emlrtDynamicBoundsCheckR2012b(1, 1, i, &hd_emlrtBCI, sp);
  i = indices->size[1];
  emlrtDynamicBoundsCheckR2012b((int32_T)((real_T)b_i - 1.0), 1, i, &gd_emlrtBCI,
    sp);
  i = indices->size[0] * indices->size[1];
  indices->size[1] = (int32_T)(b_i - 1U);
  emxEnsureCapacity_real_T(indices, i);
}

static void rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T T[16])
{
  static int8_T iv[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  real_T a[16];
  real_T b_a[16];
  real_T b_b[16];
  real_T c_b[16];
  real_T b_I[9];
  real_T dv[9];
  real_T b_v[4];
  real_T v[3];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  for (i = 0; i < 16; i++) {
    a[i] = obj->JointToParentTransform[i];
  }

  emxInit_char_T(&switch_expression, 2);
  st.site = &th_emlrtRSI;
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = obj->Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = obj->Type->data[i];
  }

  if (e_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (b_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_b[loop_ub + (loop_ub << 2)] = 1.0;
    }
    break;

   case 1:
    b_st.site = &uh_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    b_st.site = &vh_emlrtRSI;
    c_st.site = &xh_emlrtRSI;
    for (i = 0; i < 3; i++) {
      b_v[i] = v[i];
    }

    b_v[3] = 0.0;
    d_st.site = &yh_emlrtRSI;
    normalizeRows(&d_st, *(real_T (*)[3])&b_v[0], v);
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    cat(v[0] * v[0] * 0.0 + 1.0, v[1] * v[0] * 0.0 - v[2] * 0.0, v[2] * v[0] *
        0.0 + v[1] * 0.0, v[0] * v[1] * 0.0 + v[2] * 0.0, v[1] * v[1] * 0.0 +
        1.0, v[2] * v[1] * 0.0 - v[0] * 0.0, v[0] * v[2] * 0.0 - v[1] * 0.0, v[1]
        * v[2] * 0.0 + v[0] * 0.0, v[2] * v[2] * 0.0 + 1.0, b_I);
    permute(b_I, dv);
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = dv[loop_ub + 3 * i];
      }
    }

    b_b[15] = 1.0;
    break;

   default:
    b_st.site = &wh_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    for (i = 0; i < 9; i++) {
      b_I[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_I[loop_ub + 3 * loop_ub] = 1.0;
    }

    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = b_I[loop_ub + 3 * i];
      }

      b_b[i + 12] = v[i] * 0.0;
    }

    for (i = 0; i < 4; i++) {
      b_b[(i << 2) + 3] = (real_T)iv[i];
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    c_b[i] = obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 4; i++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_a[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        b_a[i + (loop_ub << 2)] += a[i + (i1 << 2)] * b_b[i1 + (loop_ub << 2)];
      }
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      T[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        T[i + (loop_ub << 2)] += b_a[i + (i1 << 2)] * c_b[i1 + (loop_ub << 2)];
      }
    }
  }
}

static void normalizeRows(const emlrtStack *sp, real_T matrix[3], real_T
  normRowMatrix[3])
{
  emlrtStack st;
  real_T z1[3];
  real_T y;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 3; k++) {
    z1[k] = matrix[k] * matrix[k];
  }

  y = z1[0];
  for (k = 0; k < 2; k++) {
    y += z1[k + 1];
  }

  st.site = &ai_emlrtRSI;
  b_sqrt(&st, &y);
  y = 1.0 / y;
  for (k = 0; k < 3; k++) {
    normRowMatrix[k] = matrix[k] * y;
  }
}

static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9])
{
  y[0] = varargin_1;
  y[1] = varargin_2;
  y[2] = varargin_3;
  y[3] = varargin_4;
  y[4] = varargin_5;
  y[5] = varargin_6;
  y[6] = varargin_7;
  y[7] = varargin_8;
  y[8] = varargin_9;
}

static void permute(real_T a[9], real_T b_b[9])
{
  int32_T b_k;
  int32_T k;
  for (k = 0; k < 3; k++) {
    for (b_k = 0; b_k < 3; b_k++) {
      b_b[k + 3 * b_k] = a[b_k + 3 * k];
    }
  }
}

static void b_rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T q_data[], int32_T q_size[1], real_T T[16])
{
  static const int32_T iv[2] = { 1, 39 };

  static const int32_T iv1[2] = { 1, 15 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 39 };

  static const int32_T iv5[2] = { 1, 15 };

  static const int32_T iv6[2] = { 1, 45 };

  static const int32_T iv7[2] = { 1, 34 };

  static const int32_T iv8[2] = { 1, 48 };

  static const int32_T iv9[2] = { 1, 5 };

  static char_T k_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T g_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T e_u[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  static char_T i_u[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'a', 'x', 'a',
    'n', 'g', '2', 'r', 'o', 't', 'm', ':', 'i', 'n', 'c', 'o', 'r', 'r', 'e',
    'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T f_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T m_u[5] = { 'a', 'x', 'a', 'n', 'g' };

  static int8_T iv4[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *m;
  const mxArray *y;
  real_T a[16];
  real_T b_a[16];
  real_T b_b[16];
  real_T c_b[16];
  real_T b_I[9];
  real_T dv[9];
  real_T result_data[4];
  real_T v[3];
  real_T cth;
  real_T sth;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  char_T j_u[48];
  char_T d_u[45];
  char_T b_u[39];
  char_T h_u[34];
  char_T c_u[15];
  char_T l_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  for (i = 0; i < 16; i++) {
    a[i] = obj->JointToParentTransform[i];
  }

  emxInit_char_T(&switch_expression, 2);
  st.site = &th_emlrtRSI;
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = obj->Type->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    switch_expression->data[i] = obj->Type->data[i];
  }

  if (e_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (b_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_b[loop_ub + (loop_ub << 2)] = 1.0;
    }
    break;

   case 1:
    b_st.site = &uh_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    if ((q_size[0] == 1) || (q_size[0] == 0)) {
    } else {
      for (i = 0; i < 39; i++) {
        b_u[i] = e_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&st, 39, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 39; i++) {
        b_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&st, 39, m, &b_u[0]);
      emlrtAssign(&d_y, m);
      b_st.site = &pm_emlrtRSI;
      b_error(&b_st, y, getString(&b_st, b_message(&b_st, d_y, &w_emlrtMCI),
               &w_emlrtMCI), &w_emlrtMCI);
    }

    if (q_size[0] != 0) {
      loop_ub = 1;
    } else {
      loop_ub = 0;
    }

    for (i = 0; i < 3; i++) {
      result_data[i] = v[i];
    }

    if (0 <= loop_ub - 1) {
      memcpy(&result_data[3], &q_data[0], (uint32_T)(loop_ub * (int32_T)sizeof
              (real_T)));
    }

    b_st.site = &vh_emlrtRSI;
    c_st.site = &xh_emlrtRSI;
    d_st.site = &bi_emlrtRSI;
    e_st.site = &ci_emlrtRSI;
    f_st.site = &fc_emlrtRSI;
    if (loop_ub + 3 != 4) {
      for (i = 0; i < 34; i++) {
        h_u[i] = i_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv7[0]);
      emlrtInitCharArrayR2013a(&f_st, 34, m, &h_u[0]);
      emlrtAssign(&g_y, m);
      for (i = 0; i < 48; i++) {
        j_u[i] = k_u[i];
      }

      h_y = NULL;
      m = emlrtCreateCharArray(2, &iv8[0]);
      emlrtInitCharArrayR2013a(&f_st, 48, m, &j_u[0]);
      emlrtAssign(&h_y, m);
      for (i = 0; i < 5; i++) {
        l_u[i] = m_u[i];
      }

      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv9[0]);
      emlrtInitCharArrayR2013a(&f_st, 5, m, &l_u[0]);
      emlrtAssign(&i_y, m);
      j_y = NULL;
      m = emlrtCreateDoubleScalar(4.0);
      emlrtAssign(&j_y, m);
      g_st.site = &om_emlrtRSI;
      b_error(&g_st, g_y, getString(&g_st, d_message(&g_st, h_y, i_y, j_y,
                &x_emlrtMCI), &x_emlrtMCI), &x_emlrtMCI);
    }

    d_st.site = &yh_emlrtRSI;
    normalizeRows(&d_st, *(real_T (*)[3])&result_data[0], v);
    emlrtDynamicBoundsCheckR2012b(4, 1, loop_ub + 3, &md_emlrtBCI, &c_st);
    cth = muDoubleScalarCos(result_data[3]);
    sth = muDoubleScalarSin(result_data[3]);
    for (i = 0; i < 16; i++) {
      b_b[i] = 0.0;
    }

    cat(v[0] * v[0] * (1.0 - cth) + cth, v[1] * v[0] * (1.0 - cth) - v[2] * sth,
        v[2] * v[0] * (1.0 - cth) + v[1] * sth, v[0] * v[1] * (1.0 - cth) + v[2]
        * sth, v[1] * v[1] * (1.0 - cth) + cth, v[2] * v[1] * (1.0 - cth) - v[0]
        * sth, v[0] * v[2] * (1.0 - cth) - v[1] * sth, v[1] * v[2] * (1.0 - cth)
        + v[0] * sth, v[2] * v[2] * (1.0 - cth) + cth, b_I);
    permute(b_I, dv);
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = dv[loop_ub + 3 * i];
      }
    }

    b_b[15] = 1.0;
    break;

   default:
    b_st.site = &wh_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    b_st.site = &gh_emlrtRSI;
    if (1 != q_size[0]) {
      if (q_size[0] == 1) {
        for (i = 0; i < 45; i++) {
          d_u[i] = g_u[i];
        }

        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv2[0]);
        emlrtInitCharArrayR2013a(&b_st, 45, m, &d_u[0]);
        emlrtAssign(&c_y, m);
        for (i = 0; i < 45; i++) {
          d_u[i] = g_u[i];
        }

        f_y = NULL;
        m = emlrtCreateCharArray(2, &iv6[0]);
        emlrtInitCharArrayR2013a(&b_st, 45, m, &d_u[0]);
        emlrtAssign(&f_y, m);
        c_st.site = &em_emlrtRSI;
        b_error(&c_st, c_y, getString(&c_st, b_message(&c_st, f_y, &ab_emlrtMCI),
                 &ab_emlrtMCI), &ab_emlrtMCI);
      } else {
        for (i = 0; i < 15; i++) {
          c_u[i] = f_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&b_st, 15, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        for (i = 0; i < 15; i++) {
          c_u[i] = f_u[i];
        }

        e_y = NULL;
        m = emlrtCreateCharArray(2, &iv5[0]);
        emlrtInitCharArrayR2013a(&b_st, 15, m, &c_u[0]);
        emlrtAssign(&e_y, m);
        c_st.site = &fm_emlrtRSI;
        b_error(&c_st, b_y, getString(&c_st, b_message(&c_st, e_y, &y_emlrtMCI),
                 &y_emlrtMCI), &y_emlrtMCI);
      }
    }

    for (i = 0; i < 9; i++) {
      b_I[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_I[loop_ub + 3 * loop_ub] = 1.0;
    }

    cth = q_data[0];
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b_b[loop_ub + (i << 2)] = b_I[loop_ub + 3 * i];
      }

      b_b[i + 12] = v[i] * cth;
    }

    for (i = 0; i < 4; i++) {
      b_b[(i << 2) + 3] = (real_T)iv4[i];
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    c_b[i] = obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 4; i++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_a[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        b_a[i + (loop_ub << 2)] += a[i + (i1 << 2)] * b_b[i1 + (loop_ub << 2)];
      }
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      T[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        T[i + (loop_ub << 2)] += b_a[i + (i1 << 2)] * c_b[i1 + (loop_ub << 2)];
      }
    }
  }
}

static void mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  if (B->size[1] == 0) {
    C->size[0] = 6;
    C->size[1] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)6;
    i = C->size[0] * C->size[1];
    C->size[0] = 6;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B->
          data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void rotm2axang(const emlrtStack *sp, real_T R[9], real_T axang[4])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  creal_T b_u;
  creal_T v;
  real_T U[9];
  real_T V[9];
  real_T b_I[9];
  real_T b_v[3];
  real_T vspecial_data[3];
  real_T ci;
  real_T q;
  int32_T iv[3];
  int32_T vspecial_size[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T ii_size_idx_1;
  int32_T iy;
  int32_T k;
  boolean_T x[3];
  boolean_T b_b;
  boolean_T b_x;
  boolean_T exitg1;
  boolean_T p;
  boolean_T rEQ0;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_u.re = 0.5 * (((R[0] + R[4]) + R[8]) - 1.0);
  if (!(muDoubleScalarAbs(b_u.re) > 1.0)) {
    ci = b_u.re;
    b_u.re = muDoubleScalarAcos(ci);
  } else {
    v.re = b_u.re + 1.0;
    v.im = 0.0;
    c_sqrt(&v);
    ci = b_u.re;
    b_u.re = 1.0 - ci;
    b_u.im = 0.0;
    c_sqrt(&b_u);
    if ((-v.im == 0.0) && (b_u.im == 0.0)) {
    } else {
      ci = v.re * b_u.im + -v.im * b_u.re;
      if ((muDoubleScalarIsInf(ci) || muDoubleScalarIsNaN(ci)) &&
          (!muDoubleScalarIsNaN(v.re)) && (!muDoubleScalarIsNaN(-v.im)) &&
          (!muDoubleScalarIsNaN(b_u.re)) && (!muDoubleScalarIsNaN(b_u.im))) {
        ci = v.re;
        q = -v.im;
        rescale(&ci, &q);
        ci = b_u.re;
        q = b_u.im;
        rescale(&ci, &q);
      }
    }

    ci = b_u.re;
    b_u.re = 2.0 * muDoubleScalarAtan2(ci, v.re);
  }

  ci = 2.0 * muDoubleScalarSin(b_u.re);
  b_v[0] = (R[5] - R[7]) / ci;
  b_v[1] = (R[6] - R[2]) / ci;
  b_v[2] = (R[1] - R[3]) / ci;
  if (muDoubleScalarIsNaN(b_u.re) || muDoubleScalarIsInf(b_u.re)) {
    ci = rtNaN;
  } else if (b_u.re == 0.0) {
    ci = 0.0;
  } else {
    ci = muDoubleScalarRem(b_u.re, 3.1415926535897931);
    rEQ0 = (ci == 0.0);
    if (!rEQ0) {
      q = muDoubleScalarAbs(b_u.re / 3.1415926535897931);
      rEQ0 = !(muDoubleScalarAbs(q - muDoubleScalarFloor(q + 0.5)) >
               2.2204460492503131E-16 * q);
    }

    if (rEQ0) {
      ci = 0.0;
    } else {
      if (b_u.re < 0.0) {
        ci += 3.1415926535897931;
      }
    }
  }

  rEQ0 = (ci == 0.0);
  for (i = 0; i < 3; i++) {
    x[i] = (b_v[i] == 0.0);
  }

  b_b = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if (!x[k]) {
      b_b = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  b_x = (rEQ0 || b_b);
  if (!((!rEQ0) && (!b_b))) {
    vspecial_size[0] = 3;
    vspecial_size[1] = (int32_T)b_x;
    iy = 3 * (int32_T)b_x - 1;
    for (i = 0; i <= iy; i++) {
      vspecial_data[i] = 0.0;
    }

    if (rEQ0 || b_b) {
      iy = 1;
      ii_size_idx_1 = 1;
    } else {
      iy = 0;
      ii_size_idx_1 = 0;
    }

    i = (rEQ0 || b_b) - 1;
    for (b_i = 0; b_i <= i; b_i++) {
      emlrtDynamicBoundsCheckR2012b(1, 1, iy * ii_size_idx_1, &od_emlrtBCI, sp);
      for (k = 0; k < 9; k++) {
        b_I[k] = 0.0;
      }

      for (k = 0; k < 3; k++) {
        b_I[k + 3 * k] = 1.0;
      }

      st.site = &fi_emlrtRSI;
      p = true;
      for (k = 0; k < 9; k++) {
        ci = b_I[k] - R[k];
        if (p && ((!muDoubleScalarIsInf(ci)) && (!muDoubleScalarIsNaN(ci)))) {
          p = true;
        } else {
          p = false;
        }

        b_I[k] = ci;
      }

      if (p) {
        b_st.site = &gi_emlrtRSI;
        c_st.site = &ii_emlrtRSI;
        xzsvdc(&c_st, b_I, U, vspecial_data, V);
      } else {
        b_st.site = &hi_emlrtRSI;
        for (k = 0; k < 9; k++) {
          b_I[k] = 0.0;
        }

        c_st.site = &ii_emlrtRSI;
        xzsvdc(&c_st, b_I, U, vspecial_data, V);
        for (k = 0; k < 9; k++) {
          V[k] = rtNaN;
        }
      }

      emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)b_x, &nd_emlrtBCI, sp);
      for (k = 0; k < 3; k++) {
        vspecial_data[k] = V[k + 6];
      }
    }

    iy = 0;
    for (b_i = 0; b_i < 1; b_i++) {
      if (rEQ0 || b_b) {
        iy++;
      }
    }

    iv[0] = 1;
    iv[1] = 3;
    iv[2] = iy;
    emlrtSubAssignSizeCheckR2012b(iv, 3, vspecial_size, 2, &u_emlrtECI, sp);
    iy = 0;
    for (b_i = 0; b_i < 1; b_i++) {
      if (rEQ0 || b_b) {
        iy++;
      }
    }

    for (i = 0; i < iy; i++) {
      for (k = 0; k < 3; k++) {
        b_v[k] = vspecial_data[k + 3 * i];
      }
    }
  }

  for (i1 = 0; i1 < 3; i1++) {
    vspecial_data[i1] = b_v[i1];
  }

  st.site = &ei_emlrtRSI;
  normalizeRows(&st, vspecial_data, b_v);
  iy = -1;
  for (ii_size_idx_1 = 0; ii_size_idx_1 < 3; ii_size_idx_1++) {
    iy++;
    axang[iy] = b_v[ii_size_idx_1];
  }

  axang[iy + 1] = b_u.re;
}

static void xzsvdc(const emlrtStack *sp, real_T A[9], real_T U[9], real_T b_S[3],
                   real_T V[9])
{
  static char_T cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L', 'A',
    'B', ':', 's', 'v', 'd', '_', 'N', 'o', 'C', 'o', 'n', 'v', 'e', 'r', 'g',
    'e', 'n', 'c', 'e' };

  emlrtStack st;
  real_T e[3];
  real_T s[3];
  real_T work[3];
  real_T b_b;
  real_T f;
  real_T nrm;
  real_T rt;
  real_T scale;
  real_T sm;
  real_T snorm;
  real_T sqds;
  int32_T exitg2;
  int32_T i;
  int32_T ii;
  int32_T m;
  int32_T q;
  int32_T qp1;
  int32_T qq;
  int32_T qs;
  boolean_T apply_transform;
  boolean_T exitg1;
  boolean_T exitg3;
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 3; i++) {
    s[i] = 0.0;
    e[i] = 0.0;
    work[i] = 0.0;
  }

  for (i = 0; i < 9; i++) {
    U[i] = 0.0;
    V[i] = 0.0;
  }

  for (q = 0; q < 2; q++) {
    qp1 = q + 2;
    qq = (q + 3 * q) + 1;
    apply_transform = false;
    nrm = xnrm2(3 - q, A, qq);
    if (nrm > 0.0) {
      apply_transform = true;
      if (A[qq - 1] < 0.0) {
        nrm = -nrm;
      }

      s[q] = nrm;
      if (muDoubleScalarAbs(s[q]) >= 1.0020841800044864E-292) {
        xscal(3 - q, 1.0 / s[q], A, qq);
      } else {
        i = qq - q;
        for (qs = qq; qs <= i + 2; qs++) {
          A[qs - 1] /= s[q];
        }
      }

      A[qq - 1]++;
      s[q] = -s[q];
    } else {
      s[q] = 0.0;
    }

    for (qs = qp1; qs < 4; qs++) {
      i = (q + 3 * (qs - 1)) + 1;
      if (apply_transform) {
        xaxpy(3 - q, -(xdotc(3 - q, A, qq, A, i) / A[q + 3 * q]), qq, A, i);
      }

      e[qs - 1] = A[i - 1];
    }

    memcpy(&U[q + q * 3], &A[q + q * 3], (uint32_T)((((q * 3 - q) - q * 3) + 3) *
            (int32_T)sizeof(real_T)));
    if (q + 1 <= 1) {
      nrm = b_xnrm2(e, 2);
      if (nrm == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[1] < 0.0) {
          nrm = -nrm;
        }

        e[0] = nrm;
        if (muDoubleScalarAbs(nrm) >= 1.0020841800044864E-292) {
          b_xscal(1.0 / nrm, e, 2);
        } else {
          for (qs = qp1; qs < 4; qs++) {
            e[qs - 1] /= nrm;
          }
        }

        e[1]++;
        e[0] = -e[0];
        for (ii = qp1; ii < 4; ii++) {
          work[ii - 1] = 0.0;
        }

        for (qs = qp1; qs < 4; qs++) {
          b_xaxpy(2, e[qs - 1], A, 3 * (qs - 1) + 2, work, 2);
        }

        for (qs = qp1; qs < 4; qs++) {
          c_xaxpy(2, -e[qs - 1] / e[1], work, 2, A, 3 * (qs - 1) + 2);
        }
      }

      for (ii = qp1; ii < 4; ii++) {
        V[ii - 1] = e[ii - 1];
      }
    }
  }

  m = 1;
  s[2] = A[8];
  e[1] = A[7];
  e[2] = 0.0;
  for (ii = 0; ii < 3; ii++) {
    U[ii + 6] = 0.0;
  }

  U[8] = 1.0;
  for (q = 1; q >= 0; q--) {
    qq = q + 3 * q;
    if (s[q] != 0.0) {
      for (qs = q + 2; qs < 4; qs++) {
        i = (q + 3 * (qs - 1)) + 1;
        xaxpy(3 - q, -(xdotc(3 - q, U, qq + 1, U, i) / U[qq]), qq + 1, U, i);
      }

      for (ii = q + 1; ii < 4; ii++) {
        U[(ii + 3 * q) - 1] = -U[(ii + 3 * q) - 1];
      }

      U[qq]++;
      i = q - 1;
      for (ii = 0; ii <= i; ii++) {
        U[3 * q] = 0.0;
      }
    } else {
      for (ii = 0; ii < 3; ii++) {
        U[ii + 3 * q] = 0.0;
      }

      U[qq] = 1.0;
    }
  }

  for (q = 2; q >= 0; q--) {
    if ((q + 1 <= 1) && (e[0] != 0.0)) {
      for (qs = 0; qs < 2; qs++) {
        i = 3 * (qs + 1) + 2;
        xaxpy(2, -(xdotc(2, V, 2, V, i) / V[1]), 2, V, i);
      }
    }

    for (ii = 0; ii < 3; ii++) {
      V[ii + 3 * q] = 0.0;
    }

    V[q + 3 * q] = 1.0;
  }

  for (q = 0; q < 3; q++) {
    if (s[q] != 0.0) {
      rt = muDoubleScalarAbs(s[q]);
      nrm = s[q] / rt;
      s[q] = rt;
      if (q + 1 < 3) {
        e[q] /= nrm;
      }

      c_xscal(nrm, U, 3 * q + 1);
    }

    if ((q + 1 < 3) && (e[q] != 0.0)) {
      rt = muDoubleScalarAbs(e[q]);
      nrm = rt / e[q];
      e[q] = rt;
      s[q + 1] *= nrm;
      c_xscal(nrm, V, 3 * (q + 1) + 1);
    }
  }

  qp1 = 0;
  snorm = 0.0;
  for (ii = 0; ii < 3; ii++) {
    snorm = muDoubleScalarMax(snorm, muDoubleScalarMax(muDoubleScalarAbs(s[ii]),
      muDoubleScalarAbs(e[ii])));
  }

  exitg1 = false;
  while ((!exitg1) && (m + 2 > 0)) {
    if (qp1 >= 75) {
      st.site = &ql_emlrtRSI;
      b_error(&st, emlrt_marshallOut(&st, cv), getString(&st, b_message(&st,
                emlrt_marshallOut(&st, cv), &bb_emlrtMCI), &bb_emlrtMCI),
              &bb_emlrtMCI);
      exitg1 = true;
    } else {
      ii = m;
      do {
        exitg2 = 0;
        q = ii + 1;
        if (ii + 1 == 0) {
          exitg2 = 1;
        } else {
          nrm = muDoubleScalarAbs(e[ii]);
          if ((nrm <= 2.2204460492503131E-16 * (muDoubleScalarAbs(s[ii]) +
                muDoubleScalarAbs(s[ii + 1]))) || (nrm <=
               1.0020841800044864E-292) || ((qp1 > 20) && (nrm <=
                2.2204460492503131E-16 * snorm))) {
            e[ii] = 0.0;
            exitg2 = 1;
          } else {
            ii--;
          }
        }
      } while (exitg2 == 0);

      if (ii + 1 == m + 1) {
        i = 4;
      } else {
        qs = m + 2;
        i = m + 2;
        exitg3 = false;
        while ((!exitg3) && (i >= ii + 1)) {
          qs = i;
          if (i == ii + 1) {
            exitg3 = true;
          } else {
            nrm = 0.0;
            if (i < m + 2) {
              nrm = muDoubleScalarAbs(e[i - 1]);
            }

            if (i > ii + 2) {
              nrm += muDoubleScalarAbs(e[i - 2]);
            }

            rt = muDoubleScalarAbs(s[i - 1]);
            if ((rt <= 2.2204460492503131E-16 * nrm) || (rt <=
                 1.0020841800044864E-292)) {
              s[i - 1] = 0.0;
              exitg3 = true;
            } else {
              i--;
            }
          }
        }

        if (qs == ii + 1) {
          i = 3;
        } else if (qs == m + 2) {
          i = 1;
        } else {
          i = 2;
          q = qs;
        }
      }

      switch (i) {
       case 1:
        f = e[m];
        e[m] = 0.0;
        for (qs = m + 1; qs >= q + 1; qs--) {
          nrm = e[0];
          rt = s[qs - 1];
          st.site = &ni_emlrtRSI;
          xrotg(&rt, &f, &b_b, &sm);
          s[qs - 1] = rt;
          if (qs > q + 1) {
            f = -sm * e[0];
            nrm = e[0] * b_b;
          }

          xrot(V, 3 * (qs - 1) + 1, 3 * (m + 1) + 1, b_b, sm);
          e[0] = nrm;
        }
        break;

       case 2:
        f = e[q - 1];
        e[q - 1] = 0.0;
        for (qs = q + 1; qs <= m + 2; qs++) {
          rt = s[qs - 1];
          st.site = &mi_emlrtRSI;
          xrotg(&rt, &f, &b_b, &sm);
          s[qs - 1] = rt;
          f = -sm * e[qs - 1];
          e[qs - 1] *= b_b;
          xrot(U, 3 * (qs - 1) + 1, 3 * (q - 1) + 1, b_b, sm);
        }
        break;

       case 3:
        scale = muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax
          (muDoubleScalarMax(muDoubleScalarAbs(s[m + 1]), muDoubleScalarAbs(s[m])),
           muDoubleScalarAbs(e[m])), muDoubleScalarAbs(s[q])), muDoubleScalarAbs
          (e[q]));
        sm = s[m + 1] / scale;
        nrm = s[m] / scale;
        rt = e[m] / scale;
        sqds = s[q] / scale;
        b_b = ((nrm + sm) * (nrm - sm) + rt * rt) / 2.0;
        nrm = sm * rt;
        nrm *= nrm;
        if ((b_b != 0.0) || (nrm != 0.0)) {
          rt = b_b * b_b + nrm;
          st.site = &li_emlrtRSI;
          b_sqrt(&st, &rt);
          if (b_b < 0.0) {
            rt = -rt;
          }

          rt = nrm / (b_b + rt);
        } else {
          rt = 0.0;
        }

        f = (sqds + sm) * (sqds - sm) + rt;
        nrm = sqds * (e[q] / scale);
        for (qs = q + 1; qs <= m + 1; qs++) {
          st.site = &ki_emlrtRSI;
          xrotg(&f, &nrm, &b_b, &sm);
          if (qs > q + 1) {
            e[0] = f;
          }

          f = b_b * s[qs - 1] + sm * e[qs - 1];
          e[qs - 1] = b_b * e[qs - 1] - sm * s[qs - 1];
          nrm = sm * s[qs];
          s[qs] *= b_b;
          xrot(V, 3 * (qs - 1) + 1, 3 * qs + 1, b_b, sm);
          st.site = &ji_emlrtRSI;
          xrotg(&f, &nrm, &b_b, &sm);
          s[qs - 1] = f;
          f = b_b * e[qs - 1] + sm * s[qs];
          s[qs] = -sm * e[qs - 1] + b_b * s[qs];
          nrm = sm * e[qs];
          e[qs] *= b_b;
          xrot(U, 3 * (qs - 1) + 1, 3 * qs + 1, b_b, sm);
        }

        e[m] = f;
        qp1++;
        break;

       default:
        if (s[q] < 0.0) {
          s[q] = -s[q];
          c_xscal(-1.0, V, 3 * q + 1);
        }

        qp1 = q + 1;
        while ((q + 1 < 3) && (s[q] < s[qp1])) {
          rt = s[q];
          s[q] = s[qp1];
          s[qp1] = rt;
          xswap(V, 3 * q + 1, 3 * (q + 1) + 1);
          xswap(U, 3 * q + 1, 3 * (q + 1) + 1);
          q = qp1;
          qp1++;
        }

        qp1 = 0;
        m--;
        break;
      }
    }
  }

  for (qs = 0; qs < 3; qs++) {
    b_S[qs] = s[qs];
  }
}

static real_T xnrm2(int32_T n, real_T x[9], int32_T ix0)
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T k;
  int32_T kend;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  kend = ix0 + n;
  for (k = ix0; k < kend; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static real_T xdotc(int32_T n, real_T x[9], int32_T ix0, real_T y[9], int32_T
                    iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < n; k++) {
    d += x[ix] * y[iy];
    ix++;
    iy++;
  }

  return d;
}

static real_T b_xnrm2(real_T x[3], int32_T ix0)
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = ix0; k <= ix0 + 1; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static void dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 3) {
    if ((a->size[0] == 1) && (a->size[1] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &em_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &fm_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &y_emlrtMCI),
               &y_emlrtMCI), &y_emlrtMCI);
    }
  }
}

static void b_mtimes(emxArray_real_T *A, real_T B[3], emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    i = C->size[0];
    C->size[0] = A->size[1];
    emxEnsureCapacity_real_T1(C, i);
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)A->size[1];
    i = C->size[0];
    C->size[0] = A->size[1];
    emxEnsureCapacity_real_T1(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void b_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 3) {
    if (a->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &em_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &fm_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &y_emlrtMCI),
               &y_emlrtMCI), &y_emlrtMCI);
    }
  }
}

static void c_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (3 != innerDimB) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &em_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &fm_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &y_emlrtMCI),
               &y_emlrtMCI), &y_emlrtMCI);
    }
  }
}

static void d_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (3 != innerDimB) {
    if ((b_b->size[0] == 1) && (b_b->size[1] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &em_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &fm_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &y_emlrtMCI),
               &y_emlrtMCI), &y_emlrtMCI);
    }
  }
}

static void c_mtimes(real_T A[9], emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((B->size[0] == 0) || (B->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = 3;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = 3 * B->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)3;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)3;
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)3;
    i = C->size[0] * C->size[1];
    C->size[0] = 3;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B->
          data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void e_dynamic_size_checks(const emlrtStack *sp, int32_T innerDimA)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 15 };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 3) {
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &fm_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &y_emlrtMCI), &y_emlrtMCI),
            &y_emlrtMCI);
  }
}

static real_T SystemTimeProvider_getElapsedTime(const emlrtStack *sp,
  robotics_core_internal_SystemTimeProvider *obj)
{
  static const int32_T iv[2] = { 1, 66 };

  static const int32_T iv1[2] = { 1, 66 };

  static char_T c_u[66] = { 's', 'h', 'a', 'r', 'e', 'd', '_', 'r', 'o', 'b',
    'o', 't', 'i', 'c', 's', ':', 'r', 'o', 'b', 'o', 't', 'u', 't', 'i', 'l',
    's', ':', 't', 'i', 'm', 'e', 'p', 'r', 'o', 'v', 'i', 'd', 'e', 'r', ':',
    'T', 'i', 'm', 'e', 'P', 'r', 'o', 'v', 'i', 'd', 'e', 'r', 'N', 'o', 't',
    'I', 'n', 'i', 't', 'i', 'a', 'l', 'i', 'z', 'e', 'd' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  char_T b_u[66];
  boolean_T valid;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pi_emlrtRSI;
  valid = (obj->StartTime.tv_sec > 0.0);
  if (!valid) {
    memcpy(&b_u[0], &c_u[0], 66U * sizeof(char_T));
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 66, m, &b_u[0]);
    emlrtAssign(&y, m);
    memcpy(&b_u[0], &c_u[0], 66U * sizeof(char_T));
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 66, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &pi_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &cb_emlrtMCI),
             &cb_emlrtMCI), &cb_emlrtMCI);
  }

  st.site = &qi_emlrtRSI;
  return toc(&st, obj->StartTime.tv_sec, obj->StartTime.tv_nsec);
}

static real_T toc(const emlrtStack *sp, real_T tstart_tv_sec, real_T
                  tstart_tv_nsec)
{
  emlrtStack st;
  emlrtTimespec expl_temp;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ri_emlrtRSI;
  expl_temp = getTime(&st);
  return (expl_temp.tv_sec - tstart_tv_sec) + (expl_temp.tv_nsec -
    tstart_tv_nsec) / 1.0E+9;
}

static real_T IKHelpers_evaluateSolution(const emlrtStack *sp,
  robotics_manip_internal_IKExtraArgs *args)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *b_b;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  real_T a[36];
  real_T y[6];
  real_T absxk;
  real_T en;
  real_T scale;
  real_T t;
  int32_T i;
  int32_T loop_ub;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (i = 0; i < 36; i++) {
    a[i] = args->WeightMatrix[i];
  }

  emxInit_real_T1(&b_b, 1);
  i = b_b->size[0];
  b_b->size[0] = args->ErrTemp->size[0];
  emxEnsureCapacity_real_T1(b_b, i);
  loop_ub = args->ErrTemp->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_b->data[i] = args->ErrTemp->data[i];
  }

  st.site = &gh_emlrtRSI;
  if (6 != b_b->size[0]) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&st, 45, m, &c_u[0]);
      emlrtAssign(&c_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&st, 45, m, &c_u[0]);
      emlrtAssign(&e_y, m);
      b_st.site = &em_emlrtRSI;
      b_error(&b_st, c_y, getString(&b_st, b_message(&b_st, e_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&st, 15, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&st, 15, m, &b_u[0]);
      emlrtAssign(&d_y, m);
      b_st.site = &fm_emlrtRSI;
      b_error(&b_st, b_y, getString(&b_st, b_message(&b_st, d_y, &y_emlrtMCI),
               &y_emlrtMCI), &y_emlrtMCI);
    }
  }

  for (i = 0; i < 6; i++) {
    y[i] = 0.0;
    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      scale = y[i] + a[i + 6 * loop_ub] * b_b->data[loop_ub];
      y[i] = scale;
    }
  }

  emxFree_real_T(&b_b);
  en = 0.0;
  scale = 3.3121686421112381E-170;
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    absxk = muDoubleScalarAbs(y[loop_ub]);
    if (absxk > scale) {
      t = scale / absxk;
      en = en * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      en += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(en);
}

static void f_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  emxArray_real_T *b_b, int32_T innerDimA, int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((b_b->size[0] == 1) &&
         (b_b->size[1] == 1))) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &em_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &fm_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &y_emlrtMCI),
               &y_emlrtMCI), &y_emlrtMCI);
    }
  }
}

static void d_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) || (B->size[1]
       == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = A->size[1] * B->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[0];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[1];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void mldivide(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T
                     *B, emxArray_real_T *Y)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 15 };

  static const int32_T iv2[2] = { 1, 6 };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i', 'm',
    'a', 'g', 'r', 'e', 'e' };

  static char_T b_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  ptrdiff_t INFO;
  ptrdiff_t LDA;
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_ptrdiff_t *jpvt_t;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  real_T tol;
  int32_T c_B[2];
  int32_T b_i;
  int32_T b_ma;
  int32_T b_na;
  int32_T i;
  int32_T j;
  int32_T loop_ub;
  int32_T ma;
  int32_T na;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  char_T b_u[15];
  char_T str[14];
  char_T rfmt[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (B->size[0] != A->size[0]) {
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &nm_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &db_emlrtMCI),
             &db_emlrtMCI), &db_emlrtMCI);
  }

  st.site = &si_emlrtRSI;
  emxInit_real_T(&b_A, 2);
  emxInit_real_T1(&tau, 1);
  emxInit_int32_T(&jpvt, 2);
  emxInit_ptrdiff_t(&jpvt_t, 1);
  emxInit_real_T(&b_B, 2);
  if ((A->size[0] == 0) || (A->size[1] == 0) || ((B->size[0] == 0) || (B->size[1]
        == 0))) {
    unnamed_idx_0 = (uint32_T)A->size[1];
    unnamed_idx_1 = (uint32_T)B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = (int32_T)unnamed_idx_0;
    Y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity_real_T(Y, i);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1 - 1;
    for (i = 0; i <= loop_ub; i++) {
      Y->data[i] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    b_st.site = &ti_emlrtRSI;
    c_st.site = &wi_emlrtRSI;
    ma = A->size[0];
    na = A->size[1];
    b_na = B->size[0];
    i = muIntScalarMin_sint32(ma, na);
    b_na = muIntScalarMin_sint32(b_na, i);
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    loop_ub = A->size[0] * A->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_A->data[i] = A->data[i];
    }

    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[0];
    b_B->size[1] = B->size[1];
    emxEnsureCapacity_real_T(b_B, i);
    loop_ub = B->size[0] * B->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_B->data[i] = B->data[i];
    }

    d_st.site = &xi_emlrtRSI;
    repmat((ptrdiff_t)0.0, b_na, jpvt_t);
    b_ma = jpvt_t->size[0];
    i = jpvt_t->size[0];
    jpvt_t->size[0] = b_ma;
    emxEnsureCapacity_ptrdiff_t(jpvt_t, i);
    info_t = (ptrdiff_t)b_na;
    LDA = (ptrdiff_t)b_A->size[0];
    INFO = LAPACKE_dgetrf_work(102, info_t, info_t, &b_A->data[0], LDA,
      &jpvt_t->data[0]);
    b_na = (int32_T)INFO;
    if (b_na < 0) {
      for (i = 0; i < 2; i++) {
        c_B[i] = b_B->size[i];
      }

      i = b_B->size[0] * b_B->size[1];
      b_B->size[0] = c_B[0];
      b_B->size[1] = c_B[1];
      emxEnsureCapacity_real_T(b_B, i);
      loop_ub = c_B[0] * c_B[1];
      for (i = 0; i < loop_ub; i++) {
        b_B->data[i] = rtNaN;
      }
    } else {
      LAPACKE_dgetrs_work(102, 'N', info_t, (ptrdiff_t)B->size[1], &b_A->data[0],
                          LDA, &jpvt_t->data[0], &b_B->data[0], (ptrdiff_t)
                          b_B->size[0]);
    }

    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_B->size[0];
    Y->size[1] = b_B->size[1];
    emxEnsureCapacity_real_T(Y, i);
    loop_ub = b_B->size[0] * b_B->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      Y->data[i] = b_B->data[i];
    }

    if (((A->size[0] != 1) || (A->size[1] != 1)) && (b_na > 0)) {
      c_st.site = &vi_emlrtRSI;
      d_st.site = &lj_emlrtRSI;
      b_warning(&d_st);
    }
  } else {
    b_st.site = &ui_emlrtRSI;
    c_st.site = &mj_emlrtRSI;
    ma = A->size[0];
    na = A->size[1] - 1;
    i = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = A->size[1];
    emxEnsureCapacity_int32_T1(jpvt, i);
    loop_ub = A->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      jpvt->data[i] = 0;
    }

    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    loop_ub = A->size[0] * A->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_A->data[i] = A->data[i];
    }

    b_ma = b_A->size[0];
    b_na = b_A->size[1];
    b_na = muIntScalarMin_sint32(b_ma, b_na);
    i = tau->size[0];
    tau->size[0] = b_na;
    emxEnsureCapacity_real_T1(tau, i);
    i = jpvt_t->size[0];
    jpvt_t->size[0] = A->size[1];
    emxEnsureCapacity_ptrdiff_t(jpvt_t, i);
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      jpvt_t->data[i] = (ptrdiff_t)0;
    }

    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)A->size[0], (ptrdiff_t)A->size[1],
      &b_A->data[0], (ptrdiff_t)b_A->size[0], &jpvt_t->data[0], &tau->data[0]);
    if ((int32_T)info_t != 0) {
      for (j = 0; j <= na; j++) {
        for (b_i = 0; b_i < ma; b_i++) {
          b_A->data[j * b_ma + b_i] = rtNaN;
        }
      }

      i = na + 1;
      b_ma = muIntScalarMin_sint32(ma, i) - 1;
      for (loop_ub = 0; loop_ub <= b_ma; loop_ub++) {
        tau->data[loop_ub] = rtNaN;
      }

      for (loop_ub = b_ma + 2; loop_ub <= b_na; loop_ub++) {
        tau->data[loop_ub - 1] = 0.0;
      }

      for (loop_ub = 0; loop_ub <= na; loop_ub++) {
        jpvt->data[loop_ub] = loop_ub + 1;
      }
    } else {
      for (loop_ub = 0; loop_ub <= na; loop_ub++) {
        jpvt->data[loop_ub] = (int32_T)jpvt_t->data[loop_ub];
      }
    }

    c_st.site = &nj_emlrtRSI;
    na = 0;
    if (b_A->size[0] < b_A->size[1]) {
      b_ma = b_A->size[0];
      b_na = b_A->size[1];
    } else {
      b_ma = b_A->size[1];
      b_na = b_A->size[0];
    }

    tol = muDoubleScalarMin(1.4901161193847656E-8, 2.2204460492503131E-15 *
      (real_T)b_na) * muDoubleScalarAbs(b_A->data[0]);
    while ((na < b_ma) && (!(muDoubleScalarAbs(b_A->data[na + b_A->size[0] * na])
             <= tol))) {
      na++;
    }

    if (na < b_ma) {
      d_st.site = &ck_emlrtRSI;
      for (i = 0; i < 6; i++) {
        rfmt[i] = b_rfmt[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&d_st, 6, m, &rfmt[0]);
      emlrtAssign(&c_y, m);
      d_y = NULL;
      m = emlrtCreateDoubleScalar(tol);
      emlrtAssign(&d_y, m);
      e_st.site = &ym_emlrtRSI;
      emlrt_marshallIn(&e_st, b_sprintf(&e_st, c_y, d_y, &p_emlrtMCI),
                       "<output of sprintf>", str);
      d_st.site = &dk_emlrtRSI;
      f_warning(&d_st, na, str);
    }

    c_st.site = &oj_emlrtRSI;
    ma = B->size[1] - 1;
    b_ma = b_A->size[1];
    b_na = B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_ma;
    Y->size[1] = b_na;
    emxEnsureCapacity_real_T(Y, i);
    loop_ub = b_ma * b_na - 1;
    for (i = 0; i <= loop_ub; i++) {
      Y->data[i] = 0.0;
    }

    d_st.site = &ek_emlrtRSI;
    e_st.site = &fk_emlrtRSI;
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[0];
    b_B->size[1] = B->size[1];
    emxEnsureCapacity_real_T(b_B, i);
    loop_ub = B->size[0] * B->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_B->data[i] = B->data[i];
    }

    if (b_A->size[0] < b_A->size[1]) {
      b_na = b_A->size[0];
    } else {
      b_na = b_A->size[1];
    }

    info_t = (ptrdiff_t)b_B->size[0];
    info_t = LAPACKE_dormqr(102, 'L', 'T', info_t, (ptrdiff_t)b_B->size[1],
      (ptrdiff_t)b_na, &b_A->data[0], (ptrdiff_t)b_A->size[0], &tau->data[0],
      &b_B->data[0], info_t);
    if ((int32_T)info_t != 0) {
      for (i = 0; i < 2; i++) {
        c_B[i] = b_B->size[i];
      }

      i = b_B->size[0] * b_B->size[1];
      b_B->size[0] = c_B[0];
      b_B->size[1] = c_B[1];
      emxEnsureCapacity_real_T(b_B, i);
      loop_ub = c_B[0] * c_B[1];
      for (i = 0; i < loop_ub; i++) {
        b_B->data[i] = rtNaN;
      }
    }

    for (loop_ub = 0; loop_ub <= ma; loop_ub++) {
      for (b_i = 0; b_i < na; b_i++) {
        Y->data[(jpvt->data[b_i] + Y->size[0] * loop_ub) - 1] = b_B->data[b_i +
          b_B->size[0] * loop_ub];
      }

      for (j = na; j >= 1; j--) {
        Y->data[(jpvt->data[j - 1] + Y->size[0] * loop_ub) - 1] /= b_A->data[(j
          + b_A->size[0] * (j - 1)) - 1];
        i = j - 2;
        for (b_i = 0; b_i <= i; b_i++) {
          Y->data[(jpvt->data[b_i] + Y->size[0] * loop_ub) - 1] -= Y->data
            [(jpvt->data[j - 1] + Y->size[0] * loop_ub) - 1] * b_A->data[b_i +
            b_A->size[0] * (j - 1)];
        }
      }
    }
  }

  emxFree_real_T(&b_B);
  emxFree_ptrdiff_t(&jpvt_t);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
}

static void repmat(ptrdiff_t a, int32_T varargin_1, emxArray_ptrdiff_t *b_b)
{
  emlrtStack st;
  int32_T i;
  st.site = &yi_emlrtRSI;
  i = b_b->size[0];
  b_b->size[0] = varargin_1;
  emxEnsureCapacity_ptrdiff_t(b_b, i);
  for (i = 0; i < varargin_1; i++) {
    b_b->data[i] = a;
  }
}

static void assert_pmaxsize(const emlrtStack *sp, boolean_T p)
{
  static const int32_T iv[2] = { 1, 21 };

  static const int32_T iv1[2] = { 1, 21 };

  static char_T c_u[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[21];
  st.prev = sp;
  st.tls = sp->tls;
  if (!p) {
    for (i = 0; i < 21; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 21, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 21; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 21, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &mm_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &fb_emlrtMCI),
             &fb_emlrtMCI), &fb_emlrtMCI);
  }
}

static void f_warning(const emlrtStack *sp, int32_T varargin_1, char_T
                      varargin_2[14])
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 32 };

  static const int32_T iv3[2] = { 1, 14 };

  static char_T b_msgID[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e', 'n',
    't', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[32];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 32; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, 32, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = varargin_1;
  emlrtAssign(&d_y, m);
  e_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a(sp, 14, m, &varargin_2[0]);
  emlrtAssign(&e_y, m);
  st.site = &xm_emlrtRSI;
  b_feval(&st, y, d_feval(&st, b_y, c_y, d_y, e_y, &k_emlrtMCI), &l_emlrtMCI);
}

static void g_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  emxArray_real_T *b_b, int32_T innerDimA, int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b_b->size[0] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &em_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &fm_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &y_emlrtMCI),
               &y_emlrtMCI), &y_emlrtMCI);
    }
  }
}

static void e_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    i = C->size[0];
    C->size[0] = A->size[0];
    emxEnsureCapacity_real_T1(C, i);
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0];
    C->size[0] = A->size[0];
    emxEnsureCapacity_real_T1(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void h_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (3 != innerDimB) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &em_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &fm_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &y_emlrtMCI),
               &y_emlrtMCI), &y_emlrtMCI);
    }
  }
}

static boolean_T DampedBFGSwGradientProjection_atLocalMinimum(const emlrtStack
  *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj, real_T Hg[3],
  emxArray_real_T *alpha)
{
  emlrtStack st;
  emxArray_boolean_T *b_alpha;
  int32_T i;
  int32_T loop_ub;
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_boolean_T(&b_alpha, 1);
  if (c_norm(Hg) < obj->GradientTolerance) {
    i = b_alpha->size[0];
    b_alpha->size[0] = alpha->size[0];
    emxEnsureCapacity_boolean_T(b_alpha, i);
    loop_ub = alpha->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_alpha->data[i] = (alpha->data[i] <= 0.0);
    }

    st.site = &gk_emlrtRSI;
    if (all(&st, b_alpha)) {
      flag = true;
    } else {
      flag = false;
    }
  } else {
    flag = false;
  }

  emxFree_boolean_T(&b_alpha);
  return flag;
}

static real_T c_norm(real_T x[3])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 3; k++) {
    absxk = muDoubleScalarAbs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static boolean_T all(const emlrtStack *sp, emxArray_boolean_T *x)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static char_T c_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  int32_T ix;
  char_T b_u[51];
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &im_emlrtRSI;
    b_error(&st, b_y, getString(&st, b_message(&st, c_y, &hb_emlrtMCI),
             &hb_emlrtMCI), &hb_emlrtMCI);
  }

  y = true;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x->size[0])) {
    if (!x->data[ix]) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

static void b_inv(const emlrtStack *sp, emxArray_real_T *x, emxArray_real_T *y)
{
  static const int32_T iv[2] = { 1, 19 };

  static const int32_T iv1[2] = { 1, 19 };

  static const int32_T iv2[2] = { 1, 6 };

  static char_T c_u[19] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 's', 'q', 'u', 'a', 'r', 'e' };

  static char_T b_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  ptrdiff_t info_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_int32_T *ipiv;
  emxArray_int32_T *p;
  emxArray_ptrdiff_t *ipiv_t;
  emxArray_real_T *A;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  real_T n1x;
  real_T n1xinv;
  real_T rc;
  int32_T b_A[2];
  int32_T b_n;
  int32_T i;
  int32_T k;
  int32_T n;
  int32_T yk;
  char_T b_u[19];
  char_T str[14];
  char_T rfmt[6];
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (x->size[0] != x->size[1]) {
    for (i = 0; i < 19; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 19, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 19; i++) {
      b_u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 19, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &lm_emlrtRSI;
    b_error(&st, b_y, getString(&st, b_message(&st, c_y, &ib_emlrtMCI),
             &ib_emlrtMCI), &ib_emlrtMCI);
  }

  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, i);
    yk = x->size[0] * x->size[1] - 1;
    for (i = 0; i <= yk; i++) {
      y->data[i] = x->data[i];
    }
  } else {
    st.site = &hk_emlrtRSI;
    n = x->size[0];
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, i);
    yk = x->size[0] * x->size[1] - 1;
    for (i = 0; i <= yk; i++) {
      y->data[i] = 0.0;
    }

    emxInit_real_T(&A, 2);
    b_st.site = &jk_emlrtRSI;
    i = A->size[0] * A->size[1];
    A->size[0] = x->size[0];
    A->size[1] = x->size[1];
    emxEnsureCapacity_real_T(A, i);
    yk = x->size[0] * x->size[1] - 1;
    for (i = 0; i <= yk; i++) {
      A->data[i] = x->data[i];
    }

    emxInit_int32_T(&ipiv, 2);
    emxInit_ptrdiff_t(&ipiv_t, 1);
    c_st.site = &bj_emlrtRSI;
    repmat((ptrdiff_t)0.0, muIntScalarMin_sint32(n, n), ipiv_t);
    yk = ipiv_t->size[0];
    i = ipiv_t->size[0];
    ipiv_t->size[0] = yk;
    emxEnsureCapacity_ptrdiff_t(ipiv_t, i);
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)x->size[0], (ptrdiff_t)x->size
      [0], &A->data[0], (ptrdiff_t)x->size[0], &ipiv_t->data[0]);
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T1(ipiv, i);
    if ((int32_T)info_t < 0) {
      for (i = 0; i < 2; i++) {
        b_A[i] = A->size[i];
      }

      i = A->size[0] * A->size[1];
      A->size[0] = b_A[0];
      A->size[1] = b_A[1];
      emxEnsureCapacity_real_T(A, i);
      yk = b_A[0] * b_A[1];
      for (i = 0; i < yk; i++) {
        A->data[i] = rtNaN;
      }

      i = ipiv->size[1];
      for (k = 0; k < i; k++) {
        ipiv->data[k] = k + 1;
      }
    } else {
      i = ipiv->size[1];
      for (k = 0; k < i; k++) {
        ipiv->data[k] = (int32_T)ipiv_t->data[k];
      }
    }

    emxFree_ptrdiff_t(&ipiv_t);
    emxInit_int32_T(&p, 2);
    b_st.site = &kk_emlrtRSI;
    c_st.site = &dj_emlrtRSI;
    d_st.site = &ej_emlrtRSI;
    e_st.site = &fj_emlrtRSI;
    assert_pmaxsize(&e_st, true);
    b_n = x->size[0];
    i = p->size[0] * p->size[1];
    p->size[0] = 1;
    p->size[1] = b_n;
    emxEnsureCapacity_int32_T1(p, i);
    p->data[0] = 1;
    yk = 1;
    for (k = 2; k <= b_n; k++) {
      yk++;
      p->data[k - 1] = yk;
    }

    i = ipiv->size[1] - 1;
    for (k = 0; k <= i; k++) {
      if (ipiv->data[k] > k + 1) {
        yk = p->data[ipiv->data[k] - 1];
        p->data[ipiv->data[k] - 1] = p->data[k];
        p->data[k] = yk;
      }
    }

    emxFree_int32_T(&ipiv);
    for (k = 0; k < n; k++) {
      yk = p->data[k] - 1;
      y->data[k + y->size[0] * (p->data[k] - 1)] = 1.0;
      for (b_n = k + 1; b_n <= n; b_n++) {
        if (y->data[(b_n + y->size[0] * yk) - 1] != 0.0) {
          for (i = b_n + 1; i <= n; i++) {
            y->data[(i + y->size[0] * yk) - 1] -= y->data[(b_n + y->size[0] * yk)
              - 1] * A->data[(i + A->size[0] * (b_n - 1)) - 1];
          }
        }
      }
    }

    emxFree_int32_T(&p);
    b_st.site = &lk_emlrtRSI;
    n1x = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'L';
    info_t = (ptrdiff_t)x->size[0];
    n_t = (ptrdiff_t)x->size[0];
    lda_t = (ptrdiff_t)x->size[0];
    ldb_t = (ptrdiff_t)x->size[0];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &n1x, &A->data[0],
          &lda_t, &y->data[0], &ldb_t);
    st.site = &ik_emlrtRSI;
    n1x = d_norm(x);
    n1xinv = d_norm(y);
    rc = 1.0 / (n1x * n1xinv);
    emxFree_real_T(&A);
    if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
      b_st.site = &if_emlrtRSI;
      b_warning(&b_st);
    } else {
      if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
        b_st.site = &jf_emlrtRSI;
        for (i = 0; i < 6; i++) {
          rfmt[i] = b_rfmt[i];
        }

        d_y = NULL;
        m = emlrtCreateCharArray(2, &iv2[0]);
        emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
        emlrtAssign(&d_y, m);
        e_y = NULL;
        m = emlrtCreateDoubleScalar(rc);
        emlrtAssign(&e_y, m);
        c_st.site = &ym_emlrtRSI;
        emlrt_marshallIn(&c_st, b_sprintf(&c_st, d_y, e_y, &p_emlrtMCI),
                         "<output of sprintf>", str);
        b_st.site = &jf_emlrtRSI;
        c_warning(&b_st, str);
      }
    }
  }
}

static real_T d_norm(emxArray_real_T *x)
{
  real_T s;
  real_T y;
  int32_T b_i;
  int32_T i;
  int32_T j;
  boolean_T exitg1;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y = 0.0;
  } else if ((x->size[0] == 1) || (x->size[1] == 1)) {
    y = 0.0;
    i = x->size[0] * x->size[1] - 1;
    for (j = 0; j <= i; j++) {
      y += muDoubleScalarAbs(x->data[j]);
    }
  } else {
    y = 0.0;
    j = 0;
    exitg1 = false;
    while ((!exitg1) && (j <= x->size[1] - 1)) {
      s = 0.0;
      i = x->size[0] - 1;
      for (b_i = 0; b_i <= i; b_i++) {
        s += muDoubleScalarAbs(x->data[b_i + x->size[0] * j]);
      }

      if (muDoubleScalarIsNaN(s)) {
        y = rtNaN;
        exitg1 = true;
      } else {
        if (s > y) {
          y = s;
        }

        j++;
      }
    }
  }

  return y;
}

static void diag(const emlrtStack *sp, emxArray_real_T *v, emxArray_real_T *d)
{
  static const int32_T iv[2] = { 1, 39 };

  static const int32_T iv1[2] = { 1, 39 };

  static char_T c_u[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'd', 'i', 'a', 'g', '_', 'v', 'a', 'r', 's', 'i', 'z',
    'e', 'd', 'M', 'a', 't', 'r', 'i', 'x', 'V', 'e', 'c', 't', 'o', 'r' };

  emlrtStack st;
  const mxArray *b_m;
  const mxArray *b_y;
  const mxArray *y;
  int32_T m;
  int32_T n;
  char_T b_u[39];
  st.prev = sp;
  st.tls = sp->tls;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    n = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity_real_T1(d, n);
    d->data[0] = v->data[0];
  } else {
    if (!((v->size[0] != 1) && (v->size[1] != 1))) {
      for (n = 0; n < 39; n++) {
        b_u[n] = c_u[n];
      }

      y = NULL;
      b_m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(sp, 39, b_m, &b_u[0]);
      emlrtAssign(&y, b_m);
      for (n = 0; n < 39; n++) {
        b_u[n] = c_u[n];
      }

      b_y = NULL;
      b_m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(sp, 39, b_m, &b_u[0]);
      emlrtAssign(&b_y, b_m);
      st.site = &km_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, b_y, &jb_emlrtMCI),
               &jb_emlrtMCI), &jb_emlrtMCI);
    }

    m = v->size[0];
    n = v->size[1];
    if (0 < v->size[1]) {
      m = muIntScalarMin_sint32(m, n);
    } else {
      m = 0;
    }

    n = d->size[0];
    d->size[0] = m;
    emxEnsureCapacity_real_T1(d, n);
    for (n = 0; n < m; n++) {
      d->data[n] = v->data[n + v->size[0] * n];
    }
  }
}

static void maximum(const emlrtStack *sp, emxArray_real_T *x, real_T *ex,
                    int32_T *idx)
{
  static const int32_T iv[2] = { 1, 36 };

  static const int32_T iv1[2] = { 1, 39 };

  static const int32_T iv2[2] = { 1, 36 };

  static const int32_T iv3[2] = { 1, 39 };

  static char_T e_u[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_',
    'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  static char_T d_u[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T b_idx;
  int32_T k;
  int32_T n;
  char_T c_u[39];
  char_T b_u[36];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (n = 0; n < 36; n++) {
      b_u[n] = d_u[n];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 36, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (n = 0; n < 36; n++) {
      b_u[n] = d_u[n];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 36, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &hm_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, c_y, &kb_emlrtMCI),
             &kb_emlrtMCI), &kb_emlrtMCI);
  }

  if (!(x->size[0] >= 1)) {
    for (n = 0; n < 39; n++) {
      c_u[n] = e_u[n];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 39, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (n = 0; n < 39; n++) {
      c_u[n] = e_u[n];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(sp, 39, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    st.site = &gm_emlrtRSI;
    b_error(&st, b_y, getString(&st, b_message(&st, d_y, &lb_emlrtMCI),
             &lb_emlrtMCI), &lb_emlrtMCI);
  }

  n = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      *ex = x->data[0];
      *idx = 1;
    } else if ((x->data[0] < x->data[1]) || (muDoubleScalarIsNaN(x->data[0]) &&
                (!muDoubleScalarIsNaN(x->data[1])))) {
      *ex = x->data[1];
      *idx = 2;
    } else {
      *ex = x->data[0];
      *idx = 1;
    }
  } else {
    if (!muDoubleScalarIsNaN(x->data[0])) {
      *idx = 1;
    } else {
      *idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= x->size[0])) {
        if (!muDoubleScalarIsNaN(x->data[k - 1])) {
          *idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (*idx == 0) {
      *ex = x->data[0];
      *idx = 1;
    } else {
      *ex = x->data[*idx - 1];
      b_idx = *idx;
      for (k = *idx + 1; k <= n; k++) {
        if (*ex < x->data[k - 1]) {
          *ex = x->data[k - 1];
          b_idx = k;
        }
      }

      *idx = b_idx;
    }
  }
}

static void b_eml_find(const emlrtStack *sp, emxArray_boolean_T *x,
  emxArray_int32_T *i)
{
  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 30 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv[2];
  int32_T idx;
  int32_T ii;
  int32_T nx;
  char_T b_u[30];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  nx = x->size[0];
  idx = 0;
  ii = i->size[0];
  i->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(i, ii);
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii - 1 <= nx - 1)) {
    if (x->data[ii - 1]) {
      idx++;
      i->data[idx - 1] = ii;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }

  if (!(idx <= x->size[0])) {
    for (ii = 0; ii < 30; ii++) {
      b_u[ii] = c_u[ii];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (ii = 0; ii < 30; ii++) {
      b_u[ii] = c_u[ii];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &jm_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &nb_emlrtMCI),
             &nb_emlrtMCI), &nb_emlrtMCI);
  }

  if (x->size[0] == 1) {
    if (idx == 0) {
      i->size[0] = 0;
    }
  } else {
    if (1 > idx) {
      idx = 0;
    }

    iv[0] = 1;
    iv[1] = idx;
    st.site = &uf_emlrtRSI;
    indexShapeCheck(&st, i->size[0], iv);
    ii = i->size[0];
    i->size[0] = idx;
    emxEnsureCapacity_int32_T(i, ii);
  }
}

static void f_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) || (B->size[1]
       == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = A->size[0] * B->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static boolean_T any(const emlrtStack *sp, emxArray_boolean_T *x)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static char_T c_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  int32_T ix;
  char_T b_u[51];
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (ix = 0; ix < 51; ix++) {
      b_u[ix] = c_u[ix];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &im_emlrtRSI;
    b_error(&st, b_y, getString(&st, b_message(&st, c_y, &hb_emlrtMCI),
             &hb_emlrtMCI), &hb_emlrtMCI);
  }

  y = false;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x->size[0])) {
    if (!x->data[ix]) {
      ix++;
    } else {
      y = true;
      exitg1 = true;
    }
  }

  return y;
}

static void minimum(const emlrtStack *sp, emxArray_real_T *x, real_T *ex,
                    int32_T *idx)
{
  static const int32_T iv[2] = { 1, 36 };

  static const int32_T iv1[2] = { 1, 39 };

  static const int32_T iv2[2] = { 1, 36 };

  static const int32_T iv3[2] = { 1, 39 };

  static char_T e_u[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_',
    'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  static char_T d_u[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T b_idx;
  int32_T k;
  int32_T n;
  char_T c_u[39];
  char_T b_u[36];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    for (n = 0; n < 36; n++) {
      b_u[n] = d_u[n];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 36, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (n = 0; n < 36; n++) {
      b_u[n] = d_u[n];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 36, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &hm_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, c_y, &kb_emlrtMCI),
             &kb_emlrtMCI), &kb_emlrtMCI);
  }

  if (!(x->size[0] >= 1)) {
    for (n = 0; n < 39; n++) {
      c_u[n] = e_u[n];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 39, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (n = 0; n < 39; n++) {
      c_u[n] = e_u[n];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(sp, 39, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    st.site = &gm_emlrtRSI;
    b_error(&st, b_y, getString(&st, b_message(&st, d_y, &lb_emlrtMCI),
             &lb_emlrtMCI), &lb_emlrtMCI);
  }

  n = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      *ex = x->data[0];
      *idx = 1;
    } else if ((x->data[0] > x->data[1]) || (muDoubleScalarIsNaN(x->data[0]) &&
                (!muDoubleScalarIsNaN(x->data[1])))) {
      *ex = x->data[1];
      *idx = 2;
    } else {
      *ex = x->data[0];
      *idx = 1;
    }
  } else {
    if (!muDoubleScalarIsNaN(x->data[0])) {
      *idx = 1;
    } else {
      *idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= x->size[0])) {
        if (!muDoubleScalarIsNaN(x->data[k - 1])) {
          *idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (*idx == 0) {
      *ex = x->data[0];
      *idx = 1;
    } else {
      *ex = x->data[*idx - 1];
      b_idx = *idx;
      for (k = *idx + 1; k <= n; k++) {
        if (*ex > x->data[k - 1]) {
          *ex = x->data[k - 1];
          b_idx = k;
        }
      }

      *idx = b_idx;
    }
  }
}

static void i_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 3) {
    if (a->size[1] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &em_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &fm_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &y_emlrtMCI),
               &y_emlrtMCI), &y_emlrtMCI);
    }
  }
}

static void j_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 3) {
    if ((a->size[0] == 1) && (a->size[1] == 1)) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &em_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &fm_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &y_emlrtMCI),
               &y_emlrtMCI), &y_emlrtMCI);
    }
  }
}

static void g_mtimes(emxArray_real_T *A, real_T B[9], emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = 3;
    emxEnsureCapacity_real_T(C, i);
    loop_ub = A->size[0] * 3 - 1;
    for (i = 0; i <= loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)3;
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = 3;
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void k_dynamic_size_checks(const emlrtStack *sp, int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 15 };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (3 != innerDimB) {
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 15; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &fm_emlrtRSI;
    b_error(&st, y, getString(&st, b_message(&st, b_y, &y_emlrtMCI), &y_emlrtMCI),
            &y_emlrtMCI);
  }
}

static void l_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b_b,
  int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (3 != innerDimB) {
    if (b_b->size[0] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &em_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &fm_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &y_emlrtMCI),
               &y_emlrtMCI), &y_emlrtMCI);
    }
  }
}

static void m_dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *a,
  int32_T innerDimA)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T e_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T c_u[45];
  char_T b_u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != 3) {
    if (a->size[1] == 1) {
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        c_u[i] = e_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(sp, 45, m, &c_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &em_emlrtRSI;
      b_error(&st, b_y, getString(&st, b_message(&st, d_y, &ab_emlrtMCI),
               &ab_emlrtMCI), &ab_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        b_u[i] = d_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &fm_emlrtRSI;
      b_error(&st, y, getString(&st, b_message(&st, c_y, &y_emlrtMCI),
               &y_emlrtMCI), &y_emlrtMCI);
    }
  }
}

static boolean_T isPositiveDefinite(const emlrtStack *sp, real_T B[9])
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T A_data[9];
  int32_T info;
  int32_T jmax;
  char_T b_u[30];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mk_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &nk_emlrtRSI;
  memcpy(&A_data[0], &B[0], 9U * sizeof(real_T));
  info_t = LAPACKE_dpotrf_work(102, 'L', (ptrdiff_t)3, &A_data[0], (ptrdiff_t)3);
  info = (int32_T)info_t;
  if (info == 0) {
    jmax = 4;
  } else {
    jmax = info;
  }

  if (!(jmax - 1 <= 3)) {
    for (jmax = 0; jmax < 30; jmax++) {
      b_u[jmax] = c_u[jmax];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (jmax = 0; jmax < 30; jmax++) {
      b_u[jmax] = c_u[jmax];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &dm_emlrtRSI;
    b_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &ob_emlrtMCI),
             &ob_emlrtMCI), &ob_emlrtMCI);
  }

  return info == 0;
}

static boolean_T DampedBFGSwGradientProjection_searchDirectionInvalid(const
  emlrtStack *sp, robotics_core_internal_DampedBFGSwGradientProjection *obj,
  real_T xNew[3])
{
  emlrtStack st;
  emxArray_boolean_T *r1;
  emxArray_real_T *a;
  emxArray_real_T *r;
  real_T d;
  int32_T i;
  int32_T loop_ub;
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  emxInit_real_T(&a, 2);
  emxInit_real_T1(&r, 1);
  emxInit_boolean_T(&r1, 1);
  if (obj->ConstraintsOn) {
    i = a->size[0] * a->size[1];
    a->size[0] = obj->ConstraintMatrix->size[0];
    a->size[1] = obj->ConstraintMatrix->size[1];
    emxEnsureCapacity_real_T(a, i);
    loop_ub = obj->ConstraintMatrix->size[0] * obj->ConstraintMatrix->size[1] -
      1;
    for (i = 0; i <= loop_ub; i++) {
      a->data[i] = obj->ConstraintMatrix->data[i];
    }

    st.site = &gh_emlrtRSI;
    dynamic_size_checks(&st, a, a->size[0]);
    st.site = &fh_emlrtRSI;
    b_mtimes(a, xNew, r);
    i = r->size[0];
    loop_ub = obj->ConstraintBound->size[0];
    emlrtSizeEqCheck1DR2012b(i, loop_ub, &v_emlrtECI, sp);
    d = 2.2204460492503131E-16;
    st.site = &rk_emlrtRSI;
    b_sqrt(&st, &d);
    i = r1->size[0];
    r1->size[0] = r->size[0];
    emxEnsureCapacity_boolean_T(r1, i);
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      r1->data[i] = (r->data[i] - obj->ConstraintBound->data[i] >
                     1.4901161193847656E-8);
    }

    st.site = &rk_emlrtRSI;
    if (any(&st, r1)) {
      flag = true;
    } else {
      flag = false;
    }
  } else {
    flag = false;
  }

  emxFree_boolean_T(&r1);
  emxFree_real_T(&r);
  emxFree_real_T(&a);
  return flag;
}

static void c_rand(InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance, const
                   emlrtStack *sp, real_T varargin_1, emxArray_real_T *r)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ub_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &vb_emlrtRSI;
  i = r->size[0];
  r->size[0] = (int32_T)emlrtNonNegativeCheckR2012b(varargin_1, &gc_emlrtDCI,
    &b_st);
  emxEnsureCapacity_real_T1(r, i);
  i = (int32_T)varargin_1 - 1;
  for (k = 0; k <= i; k++) {
    c_st.site = &wb_emlrtRSI;
    d = eml_rand_mt19937ar(&c_st, moduleInstance->c_state);
    r->data[k] = d;
  }
}

static void randn(InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance, const
                  emlrtStack *sp, real_T varargin_1[2], emxArray_real_T *r)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cl_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &dl_emlrtRSI;
  c_st.site = &vb_emlrtRSI;
  i = r->size[0] * r->size[1];
  r->size[0] = (int32_T)varargin_1[0];
  r->size[1] = 1;
  emxEnsureCapacity_real_T(r, i);
  i = r->size[0] - 1;
  for (k = 0; k <= i; k++) {
    d_st.site = &el_emlrtRSI;
    d = b_eml_rand_mt19937ar(&d_st, moduleInstance->c_state);
    r->data[k] = d;
  }
}

static void g_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 7 };

  static const int32_T iv1[2] = { 1, 7 };

  static const int32_T iv2[2] = { 1, 55 };

  static char_T b_msgID[55] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', 't', 'r', 'e', 'e', ':', 'I', 'n', 'v', 'a', 'l', 'i',
    'd', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'R', 'e', 's', 'u', 'l', 't' };

  static char_T c_u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T d_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T msgID[55];
  char_T b_u[7];
  st.prev = sp;
  st.tls = sp->tls;
  for (i = 0; i < 55; i++) {
    msgID[i] = b_msgID[i];
  }

  for (i = 0; i < 7; i++) {
    b_u[i] = c_u[i];
  }

  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&y, m);
  for (i = 0; i < 7; i++) {
    b_u[i] = d_u[i];
  }

  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, 55, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &xm_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &k_emlrtMCI), &l_emlrtMCI);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T b_u
  [30])
{
  static const int32_T iv[2] = { 1, 30 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 30, m, &b_u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  c_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId, y);
  emlrtDestroyArray(&b_u);
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T
  b_u[15])
{
  static const int32_T iv[2] = { 1, 15 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 15, m, &b_u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *c,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "getString", true,
    location);
}

static void b_error(const emlrtStack *sp, const mxArray *c, const mxArray *d,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = c;
  pArrays[1] = d;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *c,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "message", true, location);
}

static const mxArray *c_message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  pArrays[2] = e;
  pArrays[3] = f;
  return emlrtCallMATLABR2012b(sp, 1, &m, 4, pArrays, "message", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "feval", true, location);
}

static void b_feval(const emlrtStack *sp, const mxArray *c, const mxArray *d,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = c;
  pArrays[1] = d;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

static const mxArray *d_message(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  pArrays[2] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m, 3, pArrays, "message", true, location);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "sprintf", true, location);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  pArrays[2] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m, 3, pArrays, "feval", true, location);
}

static const mxArray *d_feval(const emlrtStack *sp, const mxArray *c, const
  mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = c;
  pArrays[1] = d;
  pArrays[2] = e;
  pArrays[3] = f;
  return emlrtCallMATLABR2012b(sp, 1, &m, 4, pArrays, "feval", true, location);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

static void b_sqrt(const emlrtStack *sp, real_T *x)
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T e_u[4] = { 's', 'q', 'r', 't' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[30];
  char_T d_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 4, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &sl_emlrtRSI;
    b_error(&st, y, getString(&st, message(&st, b_y, c_y, &b_emlrtMCI),
             &b_emlrtMCI), &b_emlrtMCI);
  }

  *x = muDoubleScalarSqrt(*x);
}

static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625])
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 37 };

  static char_T d_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T r;
  int32_T exitg1;
  int32_T i;
  uint32_T b_u[2];
  char_T c_u[37];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    genrand_uint32_vector(e_state, b_u);
    r = 1.1102230246251565E-16 * ((real_T)(b_u[0] >> 5U) * 6.7108864E+7 +
      (real_T)(b_u[1] >> 6U));
    if (r == 0.0) {
      if (!is_valid_state(e_state)) {
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(&st, 37, m, &c_u[0]);
        emlrtAssign(&y, m);
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&st, 37, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        b_st.site = &bm_emlrtRSI;
        b_error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &c_emlrtMCI),
                 &c_emlrtMCI), &c_emlrtMCI);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static void genrand_uint32_vector(uint32_T mt[625], uint32_T b_u[2])
{
  int32_T j;
  int32_T kk;
  uint32_T mti;
  uint32_T y;
  for (j = 0; j < 2; j++) {
    mti = mt[624] + 1U;
    if (mti >= 625U) {
      for (kk = 0; kk < 227; kk++) {
        y = (mt[kk] & 2147483648U) | (mt[kk + 1] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        mt[kk] = mt[kk + 397] ^ y;
      }

      for (kk = 0; kk < 396; kk++) {
        y = (mt[kk + 227] & 2147483648U) | (mt[kk + 228] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        mt[kk + 227] = mt[kk] ^ y;
      }

      y = (mt[623] & 2147483648U) | (mt[0] & 2147483647U);
      if ((y & 1U) == 0U) {
        y >>= 1U;
      } else {
        y = y >> 1U ^ 2567483615U;
      }

      mt[623] = mt[396] ^ y;
      mti = 1U;
    }

    y = mt[(int32_T)mti - 1];
    mt[624] = mti;
    y ^= y >> 11U;
    y ^= y << 7U & 2636928640U;
    y ^= y << 15U & 4022730752U;
    y ^= y >> 18U;
    b_u[j] = y;
  }
}

static void RigidBodyTree_validateConfigurationWithLimits(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree_1 *obj, real_T Q[3])
{
  static const int32_T iv[2] = { 1, 52 };

  static const int32_T iv1[2] = { 1, 46 };

  static const int32_T iv10[2] = { 1, 25 };

  static const int32_T iv2[2] = { 1, 52 };

  static const int32_T iv3[2] = { 1, 38 };

  static const int32_T iv4[2] = { 1, 25 };

  static const int32_T iv5[2] = { 1, 46 };

  static const int32_T iv6[2] = { 1, 51 };

  static const int32_T iv7[2] = { 1, 38 };

  static const int32_T iv8[2] = { 1, 25 };

  static const int32_T iv9[2] = { 1, 45 };

  static char_T c_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T f_u[52] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T m_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'D', 'y', 'n', 'a', 'm', 'i', 'c', 's', 'F', 'u',
    'n', 'c', 't', 'i', 'o', 'n', 'I', 'n', 'p', 'u', 't', 's', ':', 'i', 'n',
    'c', 'o', 'r', 'r', 'e', 'c', 't', 'S', 'i', 'z', 'e' };

  static char_T e_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T k_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T o_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'S', 'i', 'z', 'e' };

  static char_T i_u[38] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's',
    ':', 'b', 'a', 'd', 'S', 'i', 'z', 'e', 'A', 'r', 'r', 'a', 'y' };

  static char_T j_u[25] = { 'j', 'o', 'i', 'n', 't', ' ', 'p', 'o', 's', 'i',
    't', 'i', 'o', 'n', ' ', 'v', 'e', 'c', 't', 'o', 'r', ' ', '(', 'q', ')' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *b_limits;
  emxArray_real_T *c_limits;
  emxArray_real_T *limits;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *m;
  const mxArray *y;
  real_T sz[2];
  int32_T ii_data[3];
  int32_T indicesUpperBoundViolation_data[3];
  int32_T ii_size[1];
  int32_T d_limits;
  int32_T i;
  int32_T k;
  char_T b_u[52];
  char_T l_u[51];
  char_T d_u[46];
  char_T n_u[45];
  char_T g_u[38];
  char_T h_u[25];
  boolean_T b_ubOK[3];
  boolean_T lbOK[3];
  boolean_T ubOK[3];
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  sz[0] = obj->PositionNumber;
  sz[1] = 1.0;
  b_st.site = &tf_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if (!muDoubleScalarIsNaN(Q[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 52; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&c_st, 52, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 46; i++) {
      d_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &d_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 25; i++) {
      h_u[i] = j_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&c_st, 25, m, &h_u[0]);
    emlrtAssign(&e_y, m);
    d_st.site = &vl_emlrtRSI;
    b_error(&d_st, y, getString(&d_st, message(&d_st, b_y, e_y, &f_emlrtMCI),
             &f_emlrtMCI), &f_emlrtMCI);
  }

  c_st.site = &fc_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if ((!muDoubleScalarIsInf(Q[k])) && (!muDoubleScalarIsNaN(Q[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    for (i = 0; i < 52; i++) {
      b_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&c_st, 52, m, &b_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 46; i++) {
      d_u[i] = k_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&c_st, 46, m, &d_u[0]);
    emlrtAssign(&f_y, m);
    for (i = 0; i < 25; i++) {
      h_u[i] = j_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&c_st, 25, m, &h_u[0]);
    emlrtAssign(&i_y, m);
    d_st.site = &ul_emlrtRSI;
    b_error(&d_st, c_y, getString(&d_st, message(&d_st, f_y, i_y, &g_emlrtMCI),
             &g_emlrtMCI), &g_emlrtMCI);
  }

  c_st.site = &fc_emlrtRSI;
  p = true;
  for (k = 0; k < 2; k++) {
    if (p && ((sz[k] != sz[k]) || ((!muDoubleScalarIsInf(sz[k])) && (sz[k] >=
           0.0) && (sz[k] == muDoubleScalarFloor(sz[k]))))) {
      p = true;
    } else {
      p = false;
    }
  }

  if (!p) {
    for (i = 0; i < 38; i++) {
      g_u[i] = i_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&c_st, 38, m, &g_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 38; i++) {
      g_u[i] = i_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&c_st, 38, m, &g_u[0]);
    emlrtAssign(&h_y, m);
    d_st.site = &cm_emlrtRSI;
    b_error(&d_st, d_y, getString(&d_st, b_message(&d_st, h_y, &r_emlrtMCI),
             &r_emlrtMCI), &r_emlrtMCI);
  }

  p = true;
  for (k = 0; k < 2; k++) {
    if (p) {
      if (sz[k] != sz[k]) {
        p = true;
      } else {
        if (k + 1 <= 1) {
          i = 3;
        } else {
          i = 1;
        }

        if (sz[k] == (real_T)i) {
          p = true;
        } else {
          p = false;
        }
      }
    } else {
      p = false;
    }
  }

  if (!p) {
    for (i = 0; i < 51; i++) {
      l_u[i] = m_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&c_st, 51, m, &l_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 45; i++) {
      n_u[i] = o_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(&c_st, 45, m, &n_u[0]);
    emlrtAssign(&j_y, m);
    for (i = 0; i < 25; i++) {
      h_u[i] = j_u[i];
    }

    k_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(&c_st, 25, m, &h_u[0]);
    emlrtAssign(&k_y, m);
    d_st.site = &tl_emlrtRSI;
    b_error(&d_st, g_y, getString(&d_st, message(&d_st, j_y, k_y, &s_emlrtMCI),
             &s_emlrtMCI), &s_emlrtMCI);
  }

  emxInit_real_T(&limits, 2);
  emxInit_real_T1(&b_limits, 1);
  st.site = &qf_emlrtRSI;
  RigidBodyTree_get_JointPositionLimits(&st, obj, limits);
  i = limits->size[0];
  emlrtSizeEqCheck1DR2012b(3, i, &w_emlrtECI, sp);
  k = limits->size[0];
  i = b_limits->size[0];
  b_limits->size[0] = k;
  emxEnsureCapacity_real_T1(b_limits, i);
  for (i = 0; i < k; i++) {
    b_limits->data[i] = limits->data[i + limits->size[0]] +
      4.4408920985006262E-16;
  }

  for (i = 0; i < 3; i++) {
    ubOK[i] = (Q[i] <= b_limits->data[i]);
  }

  emxFree_real_T(&b_limits);
  emxInit_real_T1(&c_limits, 1);
  i = limits->size[0];
  emlrtSizeEqCheck1DR2012b(3, i, &x_emlrtECI, sp);
  k = limits->size[0];
  i = c_limits->size[0];
  c_limits->size[0] = k;
  emxEnsureCapacity_real_T1(c_limits, i);
  for (i = 0; i < k; i++) {
    c_limits->data[i] = limits->data[i] - 4.4408920985006262E-16;
  }

  for (i = 0; i < 3; i++) {
    lbOK[i] = (Q[i] >= c_limits->data[i]);
  }

  emxFree_real_T(&c_limits);
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if (!ubOK[k]) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  guard1 = false;
  if (p) {
    p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 3)) {
      if (!lbOK[k]) {
        p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }

    if (p) {
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    for (i = 0; i < 3; i++) {
      b_ubOK[i] = !ubOK[i];
    }

    st.site = &sf_emlrtRSI;
    eml_find(&st, b_ubOK, ii_data, ii_size);
    if (0 <= ii_size[0] - 1) {
      memcpy(&indicesUpperBoundViolation_data[0], &ii_data[0], (uint32_T)
             (ii_size[0] * (int32_T)sizeof(int32_T)));
    }

    if (0 <= ii_size[0] - 1) {
      memcpy(&ii_data[0], &indicesUpperBoundViolation_data[0], (uint32_T)
             (ii_size[0] * (int32_T)sizeof(int32_T)));
    }

    d_limits = limits->size[0];
    k = ii_size[0];
    for (i = 0; i < k; i++) {
      emlrtDynamicBoundsCheckR2012b(indicesUpperBoundViolation_data[i], 1,
        d_limits, &pd_emlrtBCI, sp);
    }

    emlrtSubAssignSizeCheck1dR2017a(ii_size[0], ii_size[0], &y_emlrtECI, sp);
    k = ii_size[0];
    for (i = 0; i < k; i++) {
      Q[ii_data[i] - 1] = limits->data[(indicesUpperBoundViolation_data[i] +
        limits->size[0]) - 1];
    }

    for (i = 0; i < 3; i++) {
      ubOK[i] = !lbOK[i];
    }

    st.site = &sf_emlrtRSI;
    eml_find(&st, ubOK, ii_data, ii_size);
    if (0 <= ii_size[0] - 1) {
      memcpy(&indicesUpperBoundViolation_data[0], &ii_data[0], (uint32_T)
             (ii_size[0] * (int32_T)sizeof(int32_T)));
    }

    if (0 <= ii_size[0] - 1) {
      memcpy(&ii_data[0], &indicesUpperBoundViolation_data[0], (uint32_T)
             (ii_size[0] * (int32_T)sizeof(int32_T)));
    }

    d_limits = limits->size[0];
    k = ii_size[0];
    for (i = 0; i < k; i++) {
      emlrtDynamicBoundsCheckR2012b(indicesUpperBoundViolation_data[i], 1,
        d_limits, &qd_emlrtBCI, sp);
    }

    emlrtSubAssignSizeCheck1dR2017a(ii_size[0], ii_size[0], &ab_emlrtECI, sp);
    k = ii_size[0];
    for (i = 0; i < k; i++) {
      Q[ii_data[i] - 1] = limits->data[indicesUpperBoundViolation_data[i] - 1];
    }

    st.site = &rf_emlrtRSI;
    b_st.site = &yd_emlrtRSI;
    e_warning(&b_st);
  }

  emxFree_real_T(&limits);
}

static void c_sqrt(creal_T *x)
{
  real_T absxi;
  real_T absxr;
  real_T xi;
  real_T xr;
  xr = x->re;
  xi = x->im;
  if (xi == 0.0) {
    if (xr < 0.0) {
      absxi = 0.0;
      xr = muDoubleScalarSqrt(-xr);
    } else {
      absxi = muDoubleScalarSqrt(xr);
      xr = 0.0;
    }
  } else if (xr == 0.0) {
    if (xi < 0.0) {
      absxi = muDoubleScalarSqrt(-xi / 2.0);
      xr = -absxi;
    } else {
      absxi = muDoubleScalarSqrt(xi / 2.0);
      xr = absxi;
    }
  } else if (muDoubleScalarIsNaN(xr)) {
    absxi = xr;
  } else if (muDoubleScalarIsNaN(xi)) {
    absxi = xi;
    xr = xi;
  } else if (muDoubleScalarIsInf(xi)) {
    absxi = muDoubleScalarAbs(xi);
    xr = xi;
  } else if (muDoubleScalarIsInf(xr)) {
    if (xr < 0.0) {
      absxi = 0.0;
      xr = xi * -xr;
    } else {
      absxi = xr;
      xr = 0.0;
    }
  } else {
    absxr = muDoubleScalarAbs(xr);
    absxi = muDoubleScalarAbs(xi);
    if ((absxr > 4.4942328371557893E+307) || (absxi > 4.4942328371557893E+307))
    {
      absxr *= 0.5;
      absxi *= 0.5;
      absxi = muDoubleScalarHypot(absxr, absxi);
      if (absxi > absxr) {
        absxi = muDoubleScalarSqrt(absxi) * muDoubleScalarSqrt(absxr / absxi +
          1.0);
      } else {
        absxi = muDoubleScalarSqrt(absxi) * 1.4142135623730951;
      }
    } else {
      absxi = muDoubleScalarSqrt((muDoubleScalarHypot(absxr, absxi) + absxr) *
        0.5);
    }

    if (xr > 0.0) {
      xr = 0.5 * (xi / absxi);
    } else {
      if (xi < 0.0) {
        xr = -absxi;
      } else {
        xr = absxi;
      }

      absxi = 0.5 * (xi / xr);
    }
  }

  x->re = absxi;
  x->im = xr;
}

static real_T rescale(real_T *re, real_T *im)
{
  real_T absim;
  real_T scale;
  scale = muDoubleScalarAbs(*re);
  absim = muDoubleScalarAbs(*im);
  if (scale > absim) {
    if (*re < 0.0) {
      *re = -1.0;
    } else {
      *re = 1.0;
    }

    *im /= scale;
  } else if (absim > scale) {
    *re /= absim;
    if (*im < 0.0) {
      *im = -1.0;
    } else {
      *im = 1.0;
    }

    scale = absim;
  } else {
    if (*re < 0.0) {
      *re = -1.0;
    } else {
      *re = 1.0;
    }

    if (*im < 0.0) {
      *im = -1.0;
    } else {
      *im = 1.0;
    }
  }

  return scale;
}

static void xscal(int32_T n, real_T a, real_T x[9], int32_T ix0)
{
  int32_T i;
  int32_T k;
  i = ix0 + n;
  for (k = ix0; k < i; k++) {
    x[k - 1] *= a;
  }
}

static void xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void b_xscal(real_T a, real_T x[3], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 1; k++) {
    x[k - 1] *= a;
  }
}

static void b_xaxpy(int32_T n, real_T a, real_T x[9], int32_T ix0, real_T y[3],
                    int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void c_xaxpy(int32_T n, real_T a, real_T x[3], int32_T ix0, real_T y[9],
                    int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!(a == 0.0)) {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void c_xscal(real_T a, real_T x[9], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 2; k++) {
    x[k - 1] *= a;
  }
}

static void xrotg(real_T *a, real_T *b_b, real_T *c, real_T *s)
{
  *c = 0.0;
  *s = 0.0;
  drotg(a, b_b, c, s);
}

static void xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s)
{
  real_T temp;
  int32_T ix;
  int32_T iy;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 3; k++) {
    temp = c * x[ix] + s * x[iy];
    x[iy] = c * x[iy] - s * x[ix];
    x[ix] = temp;
    iy++;
    ix++;
  }
}

static void xswap(real_T x[9], int32_T ix0, int32_T iy0)
{
  real_T temp;
  int32_T ix;
  int32_T iy;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 3; k++) {
    temp = x[ix];
    x[ix] = x[iy];
    x[iy] = temp;
    ix++;
    iy++;
  }
}

static void d_sqrt(const emlrtStack *sp, emxArray_real_T *x)
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T c_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T e_u[4] = { 's', 'q', 'r', 't' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T k;
  int32_T nx;
  char_T b_u[30];
  char_T d_u[4];
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  p = false;
  nx = x->size[0] - 1;
  for (k = 0; k <= nx; k++) {
    if (p || (x->data[k] < 0.0)) {
      p = true;
    } else {
      p = false;
    }
  }

  if (p) {
    for (nx = 0; nx < 30; nx++) {
      b_u[nx] = c_u[nx];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 30, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (nx = 0; nx < 30; nx++) {
      b_u[nx] = c_u[nx];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 30, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (nx = 0; nx < 4; nx++) {
      d_u[nx] = e_u[nx];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 4, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &sl_emlrtRSI;
    b_error(&st, y, getString(&st, message(&st, b_y, c_y, &b_emlrtMCI),
             &b_emlrtMCI), &b_emlrtMCI);
  }

  nx = x->size[0] - 1;
  for (k = 0; k <= nx; k++) {
    x->data[k] = muDoubleScalarSqrt(x->data[k]);
  }
}

static real_T b_eml_rand_mt19937ar(const emlrtStack *sp, uint32_T e_state[625])
{
  static real_T dv[257] = { 0.0, 0.215241895984875, 0.286174591792068,
    0.335737519214422, 0.375121332878378, 0.408389134611989, 0.43751840220787,
    0.46363433679088, 0.487443966139235, 0.50942332960209, 0.529909720661557,
    0.549151702327164, 0.567338257053817, 0.584616766106378, 0.601104617755991,
    0.61689699000775, 0.63207223638606, 0.646695714894993, 0.660822574244419,
    0.674499822837293, 0.687767892795788, 0.700661841106814, 0.713212285190975,
    0.725446140909999, 0.737387211434295, 0.749056662017815, 0.760473406430107,
    0.771654424224568, 0.782615023307232, 0.793369058840623, 0.80392911698997,
    0.814306670135215, 0.824512208752291, 0.834555354086381, 0.844444954909153,
    0.854189171008163, 0.863795545553308, 0.87327106808886, 0.882622229585165,
    0.891855070732941, 0.900975224461221, 0.909987953496718, 0.91889818364959,
    0.927710533401999, 0.936429340286575, 0.945058684468165, 0.953602409881086,
    0.96206414322304, 0.970447311064224, 0.978755155294224, 0.986990747099062,
    0.99515699963509, 1.00325667954467, 1.01129241744, 1.01926671746548,
    1.02718196603564, 1.03504043983344, 1.04284431314415, 1.05059566459093,
    1.05829648333067, 1.06594867476212, 1.07355406579244, 1.0811144097034,
    1.08863139065398, 1.09610662785202, 1.10354167942464, 1.11093804601357,
    1.11829717411934, 1.12562045921553, 1.13290924865253, 1.14016484436815,
    1.14738850542085, 1.15458145035993, 1.16174485944561, 1.16887987673083,
    1.17598761201545, 1.18306914268269, 1.19012551542669, 1.19715774787944,
    1.20416683014438, 1.2111537262437, 1.21811937548548, 1.22506469375653,
    1.23199057474614, 1.23889789110569, 1.24578749554863, 1.2526602218949,
    1.25951688606371, 1.26635828701823, 1.27318520766536, 1.27999841571382,
    1.28679866449324, 1.29358669373695, 1.30036323033084, 1.30712898903073,
    1.31388467315022, 1.32063097522106, 1.32736857762793, 1.33409815321936,
    1.3408203658964, 1.34753587118059, 1.35424531676263, 1.36094934303328,
    1.36764858359748, 1.37434366577317, 1.38103521107586, 1.38772383568998,
    1.39441015092814, 1.40109476367925, 1.4077782768464, 1.41446128977547,
    1.42114439867531, 1.42782819703026, 1.43451327600589, 1.44120022484872,
    1.44788963128058, 1.45458208188841, 1.46127816251028, 1.46797845861808,
    1.47468355569786, 1.48139403962819, 1.48811049705745, 1.49483351578049,
    1.50156368511546, 1.50830159628131, 1.51504784277671, 1.521803020761,
    1.52856772943771, 1.53534257144151, 1.542128153229, 1.54892508547417,
    1.55573398346918, 1.56255546753104, 1.56939016341512, 1.57623870273591,
    1.58310172339603, 1.58997987002419, 1.59687379442279, 1.60378415602609,
    1.61071162236983, 1.61765686957301, 1.62462058283303, 1.63160345693487,
    1.63860619677555, 1.64562951790478, 1.65267414708306, 1.65974082285818,
    1.66683029616166, 1.67394333092612, 1.68108070472517, 1.68824320943719,
    1.69543165193456, 1.70264685479992, 1.7098896570713, 1.71716091501782,
    1.72446150294804, 1.73179231405296, 1.73915426128591, 1.74654827828172,
    1.75397532031767, 1.76143636531891, 1.76893241491127, 1.77646449552452,
    1.78403365954944, 1.79164098655216, 1.79928758454972, 1.80697459135082,
    1.81470317596628, 1.82247454009388, 1.83028991968276, 1.83815058658281,
    1.84605785028518, 1.8540130597602, 1.86201760539967, 1.87007292107127,
    1.878180486293, 1.88634182853678, 1.8945585256707, 1.90283220855043,
    1.91116456377125, 1.91955733659319, 1.92801233405266, 1.93653142827569,
    1.94511656000868, 1.95376974238465, 1.96249306494436, 1.97128869793366,
    1.98015889690048, 1.98910600761744, 1.99813247135842, 2.00724083056053,
    2.0164337349062, 2.02571394786385, 2.03508435372962, 2.04454796521753,
    2.05410793165065, 2.06376754781173, 2.07353026351874, 2.0833996939983,
    2.09337963113879, 2.10347405571488, 2.11368715068665, 2.12402331568952,
    2.13448718284602, 2.14508363404789, 2.15581781987674, 2.16669518035431,
    2.17772146774029, 2.18890277162636, 2.20024554661128, 2.21175664288416,
    2.22344334009251, 2.23531338492992, 2.24737503294739, 2.25963709517379,
    2.27210899022838, 2.28480080272449, 2.29772334890286, 2.31088825060137,
    2.32430801887113, 2.33799614879653, 2.35196722737914, 2.36623705671729,
    2.38082279517208, 2.39574311978193, 2.41101841390112, 2.42667098493715,
    2.44272531820036, 2.4592083743347, 2.47614993967052, 2.49358304127105,
    2.51154444162669, 2.53007523215985, 2.54922155032478, 2.56903545268184,
    2.58957598670829, 2.61091051848882, 2.63311639363158, 2.65628303757674,
    2.68051464328574, 2.70593365612306, 2.73268535904401, 2.76094400527999,
    2.79092117400193, 2.82287739682644, 2.85713873087322, 2.89412105361341,
    2.93436686720889, 2.97860327988184, 3.02783779176959, 3.08352613200214,
    3.147889289518, 3.2245750520478, 3.32024473383983, 3.44927829856143,
    3.65415288536101, 3.91075795952492 };

  static real_T dv1[257] = { 1.0, 0.977101701267673, 0.959879091800108,
    0.9451989534423, 0.932060075959231, 0.919991505039348, 0.908726440052131,
    0.898095921898344, 0.887984660755834, 0.878309655808918, 0.869008688036857,
    0.860033621196332, 0.851346258458678, 0.842915653112205, 0.834716292986884,
    0.826726833946222, 0.818929191603703, 0.811307874312656, 0.803849483170964,
    0.796542330422959, 0.789376143566025, 0.782341832654803, 0.775431304981187,
    0.768637315798486, 0.761953346836795, 0.755373506507096, 0.748892447219157,
    0.742505296340151, 0.736207598126863, 0.729995264561476, 0.72386453346863,
    0.717811932630722, 0.711834248878248, 0.705928501332754, 0.700091918136512,
    0.694321916126117, 0.688616083004672, 0.682972161644995, 0.677388036218774,
    0.671861719897082, 0.66639134390875, 0.660975147776663, 0.655611470579697,
    0.650298743110817, 0.645035480820822, 0.639820277453057, 0.634651799287624,
    0.629528779924837, 0.624450015547027, 0.619414360605834, 0.614420723888914,
    0.609468064925773, 0.604555390697468, 0.599681752619125, 0.594846243767987,
    0.590047996332826, 0.585286179263371, 0.580559996100791, 0.575868682972354,
    0.571211506735253, 0.566587763256165, 0.561996775814525, 0.557437893618766,
    0.552910490425833, 0.548413963255266, 0.543947731190026, 0.539511234256952,
    0.535103932380458, 0.530725304403662, 0.526374847171684, 0.522052074672322,
    0.517756517229756, 0.513487720747327, 0.509245245995748, 0.505028667943468,
    0.500837575126149, 0.49667156905249, 0.492530263643869, 0.488413284705458,
    0.484320269426683, 0.480250865909047, 0.476204732719506, 0.47218153846773,
    0.468180961405694, 0.464202689048174, 0.460246417812843, 0.456311852678716,
    0.452398706861849, 0.448506701507203, 0.444635565395739, 0.440785034665804,
    0.436954852547985, 0.433144769112652, 0.429354541029442, 0.425583931338022,
    0.421832709229496, 0.418100649837848, 0.414387534040891, 0.410693148270188,
    0.407017284329473, 0.403359739221114, 0.399720314980197, 0.396098818515832,
    0.392495061459315, 0.388908860018789, 0.385340034840077, 0.381788410873393,
    0.378253817245619, 0.374736087137891, 0.371235057668239, 0.367750569779032,
    0.364282468129004, 0.360830600989648, 0.357394820145781, 0.353974980800077,
    0.350570941481406, 0.347182563956794, 0.343809713146851, 0.340452257044522,
    0.337110066637006, 0.333783015830718, 0.330470981379163, 0.327173842813601,
    0.323891482376391, 0.320623784956905, 0.317370638029914, 0.314131931596337,
    0.310907558126286, 0.307697412504292, 0.30450139197665, 0.301319396100803,
    0.298151326696685, 0.294997087799962, 0.291856585617095, 0.288729728482183,
    0.285616426815502, 0.282516593083708, 0.279430141761638, 0.276356989295668,
    0.273297054068577, 0.270250256365875, 0.267216518343561, 0.264195763997261,
    0.261187919132721, 0.258192911337619, 0.255210669954662, 0.252241126055942,
    0.249284212418529, 0.246339863501264, 0.24340801542275, 0.240488605940501,
    0.237581574431238, 0.23468686187233, 0.231804410824339, 0.228934165414681,
    0.226076071322381, 0.223230075763918, 0.220396127480152, 0.217574176724331,
    0.214764175251174, 0.211966076307031, 0.209179834621125, 0.206405406397881,
    0.203642749310335, 0.200891822494657, 0.198152586545776, 0.195425003514135,
    0.192709036903589, 0.190004651670465, 0.187311814223801, 0.1846304924268,
    0.181960655599523, 0.179302274522848, 0.176655321443735, 0.174019770081839,
    0.171395595637506, 0.168782774801212, 0.166181285764482, 0.163591108232366,
    0.161012223437511, 0.158444614155925, 0.15588826472448, 0.153343161060263,
    0.150809290681846, 0.148286642732575, 0.145775208005994, 0.143274978973514,
    0.140785949814445, 0.138308116448551, 0.135841476571254, 0.133386029691669,
    0.130941777173644, 0.12850872228, 0.126086870220186, 0.123676228201597,
    0.12127680548479, 0.11888861344291, 0.116511665625611, 0.114145977827839,
    0.111791568163838, 0.109448457146812, 0.107116667774684, 0.104796225622487,
    0.102487158941935, 0.10018949876881, 0.0979032790388625, 0.095628536713009,
    0.093365311912691, 0.0911136480663738, 0.0888735920682759,
    0.0866451944505581, 0.0844285095703535, 0.082223595813203,
    0.0800305158146631, 0.0778493367020961, 0.0756801303589272,
    0.0735229737139814, 0.0713779490588905, 0.0692451443970068,
    0.0671246538277886, 0.065016577971243, 0.0629210244377582, 0.06083810834954,
    0.0587679529209339, 0.0567106901062031, 0.0546664613248891,
    0.0526354182767924, 0.0506177238609479, 0.0486135532158687,
    0.0466230949019305, 0.0446465522512946, 0.0426841449164746,
    0.0407361106559411, 0.0388027074045262, 0.0368842156885674,
    0.0349809414617162, 0.0330932194585786, 0.0312214171919203,
    0.0293659397581334, 0.0275272356696031, 0.0257058040085489,
    0.0239022033057959, 0.0221170627073089, 0.0203510962300445,
    0.0186051212757247, 0.0168800831525432, 0.0151770883079353,
    0.0134974506017399, 0.0118427578579079, 0.0102149714397015,
    0.00861658276939875, 0.00705087547137324, 0.00552240329925101,
    0.00403797259336304, 0.00260907274610216, 0.0012602859304986,
    0.000477467764609386 };

  emlrtStack b_st;
  emlrtStack st;
  real_T b_u;
  real_T r;
  real_T x;
  int32_T exitg1;
  int32_T i;
  uint32_T u32[2];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fl_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  do {
    exitg1 = 0;
    genrand_uint32_vector(e_state, u32);
    i = (int32_T)((u32[1] >> 24U) + 1U);
    r = (((real_T)(u32[0] >> 3U) * 1.6777216E+7 + (real_T)((int32_T)u32[1] &
           16777215)) * 2.2204460492503131E-16 - 1.0) * dv[i];
    if (muDoubleScalarAbs(r) <= dv[i - 1]) {
      exitg1 = 1;
    } else if (i < 256) {
      b_st.site = &gl_emlrtRSI;
      b_u = genrandu(&b_st, e_state);
      if (dv1[i] + b_u * (dv1[i - 1] - dv1[i]) < muDoubleScalarExp(-0.5 * r * r))
      {
        exitg1 = 1;
      }
    } else {
      do {
        b_st.site = &hl_emlrtRSI;
        b_u = genrandu(&b_st, e_state);
        x = muDoubleScalarLog(b_u) * 0.273661237329758;
        b_st.site = &il_emlrtRSI;
        b_u = genrandu(&b_st, e_state);
      } while (!(-2.0 * muDoubleScalarLog(b_u) > x * x));

      if (r < 0.0) {
        r = x - 3.65415288536101;
      } else {
        r = 3.65415288536101 - x;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static real_T genrandu(const emlrtStack *sp, uint32_T mt[625])
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 37 };

  static char_T d_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T r;
  int32_T exitg1;
  int32_T i;
  uint32_T b_u[2];
  char_T c_u[37];
  st.prev = sp;
  st.tls = sp->tls;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    genrand_uint32_vector(mt, b_u);
    r = 1.1102230246251565E-16 * ((real_T)(b_u[0] >> 5U) * 6.7108864E+7 +
      (real_T)(b_u[1] >> 6U));
    if (r == 0.0) {
      if (!is_valid_state(mt)) {
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(sp, 37, m, &c_u[0]);
        emlrtAssign(&y, m);
        for (i = 0; i < 37; i++) {
          c_u[i] = d_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(sp, 37, m, &c_u[0]);
        emlrtAssign(&b_y, m);
        st.site = &bm_emlrtRSI;
        b_error(&st, y, getString(&st, b_message(&st, b_y, &c_emlrtMCI),
                 &c_emlrtMCI), &c_emlrtMCI);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct)
{
  emxInitStruct_robotics_manip_in(&pStruct->TreeInternal);
  emxInitStruct_inverseKinematics(&pStruct->IKInternal);
}

static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  b_emxInitStruct_robotics_manip_in(&pStruct->Base);
  emxInitMatrix_robotics_manip_in(pStruct->_pobj0);
}

static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct)
{
  emxInit_char_T(&pStruct->NameInternal, 2);
  emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
  c_emxInitStruct_robotics_manip_in(&pStruct->CollisionsInternal);
}

static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T b_numDimensions)
{
  emxArray_char_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T *)emlrtMallocMex(sizeof(emxArray_char_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxInit_char_T(&pStruct->Type, 2);
  emxInit_real_T(&pStruct->MotionSubspace, 2);
  emxInit_char_T(&pStruct->NameInternal, 2);
  emxInit_real_T(&pStruct->PositionLimitsInternal, 2);
  emxInit_real_T1(&pStruct->HomePositionInternal, 1);
}

static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T b_numDimensions)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_real_T1(emxArray_real_T **pEmxArray, int32_T b_numDimensions)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct)
{
  emxInit_unnamed_struct(&pStruct->CollisionGeometries, 2);
}

static void emxInit_unnamed_struct(emxArray_unnamed_struct **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_unnamed_struct *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_unnamed_struct *)emlrtMallocMex(sizeof
    (emxArray_unnamed_struct));
  emxArray = *pEmxArray;
  emxArray->data = (b_robotics_manip_internal_CollisionGeometry **)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[4])
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    b_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxInitStruct_inverseKinematics(inverseKinematics *pStruct)
{
  emxInit_real_T(&pStruct->Limits, 2);
  d_emxInitStruct_robotics_manip_in(&pStruct->_pobj0);
  e_emxInitStruct_robotics_manip_in(&pStruct->_pobj1);
  c_emxInitMatrix_robotics_manip_in(pStruct->_pobj2);
  emxInitMatrix_rigidBodyJoint(pStruct->_pobj3);
  b_emxInitMatrix_robotics_manip_in(pStruct->_pobj4);
  emxInitStruct_robotics_core_int(&pStruct->_pobj5);
}

static void d_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct)
{
  emxInit_char_T(&pStruct->BodyName, 2);
  emxInit_real_T1(&pStruct->ErrTemp, 1);
  emxInit_real_T1(&pStruct->GradTemp, 1);
}

static void e_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct)
{
  f_emxInitStruct_robotics_manip_in(&pStruct->Base);
  b_emxInitMatrix_robotics_manip_in(pStruct->_pobj0);
}

static void f_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 *pStruct)
{
  emxInit_char_T(&pStruct->NameInternal, 2);
  c_emxInitStruct_robotics_manip_in(&pStruct->_pobj0);
  emxInitStruct_rigidBodyJoint(&pStruct->_pobj1);
}

static void b_emxInitMatrix_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 pMatrix[4])
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    f_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void c_emxInitMatrix_robotics_manip_in
  (robotics_manip_internal_CollisionSet pMatrix[5])
{
  int32_T i;
  for (i = 0; i < 5; i++) {
    c_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxInitMatrix_rigidBodyJoint(rigidBodyJoint pMatrix[4])
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxInitStruct_rigidBodyJoint(&pMatrix[i]);
  }
}

static void emxInitStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct)
{
  emxInit_real_T(&pStruct->ConstraintMatrix, 2);
  emxInit_real_T1(&pStruct->ConstraintBound, 1);
}

static void emxFree_char_T(emxArray_char_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_char_T *)NULL;
  }
}

static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct)
{
  emxFree_char_T(&pStruct->NameInternal);
  emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
  b_emxFreeStruct_robotics_manip_in(&pStruct->CollisionsInternal);
}

static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxFree_char_T(&pStruct->Type);
  emxFree_real_T(&pStruct->MotionSubspace);
  emxFree_char_T(&pStruct->NameInternal);
  emxFree_real_T(&pStruct->PositionLimitsInternal);
  emxFree_real_T(&pStruct->HomePositionInternal);
}

static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

static void emxFree_unnamed_struct(emxArray_unnamed_struct **pEmxArray)
{
  if (*pEmxArray != (emxArray_unnamed_struct *)NULL) {
    if (((*pEmxArray)->data != (b_robotics_manip_internal_CollisionGeometry **)
         NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_unnamed_struct *)NULL;
  }
}

static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct)
{
  emxFree_unnamed_struct(&pStruct->CollisionGeometries);
}

static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  emxFreeStruct_robotics_manip_in(&pStruct->Base);
  emxFreeMatrix_robotics_manip_in(pStruct->_pobj0);
}

static void emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[4])
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_IKBlock *pStruct)
{
  c_emxFreeStruct_robotics_manip_in(&pStruct->TreeInternal);
  emxFreeStruct_inverseKinematics(&pStruct->IKInternal);
}

static void emxFreeStruct_inverseKinematics(inverseKinematics *pStruct)
{
  emxFree_real_T(&pStruct->Limits);
  d_emxFreeStruct_robotics_manip_in(&pStruct->_pobj0);
  f_emxFreeStruct_robotics_manip_in(&pStruct->_pobj1);
  c_emxFreeMatrix_robotics_manip_in(pStruct->_pobj2);
  emxFreeMatrix_rigidBodyJoint(pStruct->_pobj3);
  b_emxFreeMatrix_robotics_manip_in(pStruct->_pobj4);
  emxFreeStruct_robotics_core_int(&pStruct->_pobj5);
}

static void d_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_IKExtraArgs *pStruct)
{
  emxFree_char_T(&pStruct->BodyName);
  emxFree_real_T(&pStruct->ErrTemp);
  emxFree_real_T(&pStruct->GradTemp);
}

static void e_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 *pStruct)
{
  emxFree_char_T(&pStruct->NameInternal);
  b_emxFreeStruct_robotics_manip_in(&pStruct->_pobj0);
  emxFreeStruct_rigidBodyJoint(&pStruct->_pobj1);
}

static void f_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree_1 *pStruct)
{
  e_emxFreeStruct_robotics_manip_in(&pStruct->Base);
  b_emxFreeMatrix_robotics_manip_in(pStruct->_pobj0);
}

static void b_emxFreeMatrix_robotics_manip_in
  (robotics_manip_internal_RigidBody_1 pMatrix[4])
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    e_emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void c_emxFreeMatrix_robotics_manip_in
  (robotics_manip_internal_CollisionSet pMatrix[5])
{
  int32_T i;
  for (i = 0; i < 5; i++) {
    b_emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxFreeMatrix_rigidBodyJoint(rigidBodyJoint pMatrix[4])
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxFreeStruct_rigidBodyJoint(&pMatrix[i]);
  }
}

static void emxFreeStruct_robotics_core_int
  (robotics_core_internal_DampedBFGSwGradientProjection *pStruct)
{
  emxFree_real_T(&pStruct->ConstraintMatrix);
  emxFree_real_T(&pStruct->ConstraintBound);
}

static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_unnamed_struc(emxArray_unnamed_struct *emxArray,
  int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof
      (b_robotics_manip_internal_CollisionGeometry *));
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, sizeof
             (b_robotics_manip_internal_CollisionGeometry *) * (uint32_T)
             oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex((void *)emxArray->data);
      }
    }

    emxArray->data = (b_robotics_manip_internal_CollisionGeometry **)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(int32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (int32_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_int32_T1(emxArray_int32_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(int32_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int32_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (int32_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_int32_T(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_int32_T1(emxArray_int32_T **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

static void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(boolean_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(boolean_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (boolean_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

static void emxEnsureCapacity_ptrdiff_t(emxArray_ptrdiff_t *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(ptrdiff_t));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(ptrdiff_t) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (ptrdiff_t *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray, int32_T
  b_numDimensions)
{
  emxArray_ptrdiff_t *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_ptrdiff_t *)emlrtMallocMex(sizeof(emxArray_ptrdiff_t));
  emxArray = *pEmxArray;
  emxArray->data = (ptrdiff_t *)NULL;
  emxArray->numDimensions = b_numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    b_numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < b_numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray)
{
  if (*pEmxArray != (emxArray_ptrdiff_t *)NULL) {
    if (((*pEmxArray)->data != (ptrdiff_t *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_ptrdiff_t *)NULL;
  }
}

static int32_T div_nzp_s32(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absDenominator;
  uint32_T absNumerator;
  boolean_T quotientNeedsNegation;
  if (numerator < 0) {
    absNumerator = ~(uint32_T)numerator + 1U;
  } else {
    absNumerator = (uint32_T)numerator;
  }

  if (denominator < 0) {
    absDenominator = ~(uint32_T)denominator + 1U;
  } else {
    absDenominator = (uint32_T)denominator;
  }

  quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
  absNumerator /= absDenominator;
  if (quotientNeedsNegation) {
    quotient = -(int32_T)absNumerator;
  } else {
    quotient = (int32_T)absNumerator;
  }

  return quotient;
}

static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absDenominator;
  uint32_T absNumerator;
  uint32_T tempAbsQuotient;
  boolean_T quotientNeedsNegation;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroWarningOrError2018b(NULL, sp);
  } else {
    if (numerator < 0) {
      absNumerator = ~(uint32_T)numerator + 1U;
    } else {
      absNumerator = (uint32_T)numerator;
    }

    if (denominator < 0) {
      absDenominator = ~(uint32_T)denominator + 1U;
    } else {
      absDenominator = (uint32_T)denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
    }

    if (quotientNeedsNegation) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

static void init_simulink_io_address(InstanceStruct_mrkgoZAWWYFs627wbafmvD
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (real_T (*)[16])cgxertGetInputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->u1 = (real_T (*)[6])cgxertGetInputPortSignal(moduleInstance->S,
    1);
  moduleInstance->u2 = (real_T (*)[3])cgxertGetInputPortSignal(moduleInstance->S,
    2);
  moduleInstance->b_y0 = (real_T (*)[3])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (ikblock_info_bus *)cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
}

/* CGXE Glue Code */
static void mdlOutputs_mrkgoZAWWYFs627wbafmvD(SimStruct *S, int_T tid)
{
  InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance =
    (InstanceStruct_mrkgoZAWWYFs627wbafmvD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_mrkgoZAWWYFs627wbafmvD(SimStruct *S)
{
  InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance =
    (InstanceStruct_mrkgoZAWWYFs627wbafmvD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_mrkgoZAWWYFs627wbafmvD(SimStruct *S, int_T tid)
{
  InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance =
    (InstanceStruct_mrkgoZAWWYFs627wbafmvD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_mrkgoZAWWYFs627wbafmvD(SimStruct *S)
{
  InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance =
    (InstanceStruct_mrkgoZAWWYFs627wbafmvD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_mrkgoZAWWYFs627wbafmvD(SimStruct *S)
{
  InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance =
    (InstanceStruct_mrkgoZAWWYFs627wbafmvD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_mrkgoZAWWYFs627wbafmvD(SimStruct *S)
{
  InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance =
    (InstanceStruct_mrkgoZAWWYFs627wbafmvD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_mrkgoZAWWYFs627wbafmvD(SimStruct *S)
{
  InstanceStruct_mrkgoZAWWYFs627wbafmvD *moduleInstance =
    (InstanceStruct_mrkgoZAWWYFs627wbafmvD *)calloc(1, sizeof
    (InstanceStruct_mrkgoZAWWYFs627wbafmvD));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_mrkgoZAWWYFs627wbafmvD);
  ssSetmdlInitializeConditions(S, mdlInitialize_mrkgoZAWWYFs627wbafmvD);
  ssSetmdlUpdate(S, mdlUpdate_mrkgoZAWWYFs627wbafmvD);
  ssSetmdlTerminate(S, mdlTerminate_mrkgoZAWWYFs627wbafmvD);
  ssSetmdlEnable(S, mdlEnable_mrkgoZAWWYFs627wbafmvD);
  ssSetmdlDisable(S, mdlDisable_mrkgoZAWWYFs627wbafmvD);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_mrkgoZAWWYFs627wbafmvD(SimStruct *S)
{
}

void method_dispatcher_mrkgoZAWWYFs627wbafmvD(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_mrkgoZAWWYFs627wbafmvD(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_mrkgoZAWWYFs627wbafmvD(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: mrkgoZAWWYFs627wbafmvD.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_mrkgoZAWWYFs627wbafmvD_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxArray * elem_18;
  mxArray * elem_19;
  mxArray * elem_20;
  mxArray * elem_21;
  mxArray * elem_22;
  mxArray * elem_23;
  mxArray * elem_24;
  mxArray * elem_25;
  mxArray * elem_26;
  mxArray * elem_27;
  mxArray * elem_28;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,4);
  elem_6 = mxCreateString("<string.h>");
  mxSetCell(elem_5,0,elem_6);
  elem_7 = mxCreateString("blas.h");
  mxSetCell(elem_5,1,elem_7);
  elem_8 = mxCreateString("collisioncodegen_api.hpp");
  mxSetCell(elem_5,2,elem_8);
  elem_9 = mxCreateString("lapacke.h");
  mxSetCell(elem_5,3,elem_9);
  mxSetCell(elem_3,1,elem_5);
  elem_10 = mxCreateCellMatrix(1,4);
  elem_11 = mxCreateString("");
  mxSetCell(elem_10,0,elem_11);
  elem_12 = mxCreateString("");
  mxSetCell(elem_10,1,elem_12);
  elem_13 = mxCreateString("");
  mxSetCell(elem_10,2,elem_13);
  elem_14 = mxCreateString("");
  mxSetCell(elem_10,3,elem_14);
  mxSetCell(elem_3,2,elem_10);
  elem_15 = mxCreateCellMatrix(1,4);
  elem_16 = mxCreateString("");
  mxSetCell(elem_15,0,elem_16);
  elem_17 = mxCreateString("");
  mxSetCell(elem_15,1,elem_17);
  elem_18 = mxCreateString("");
  mxSetCell(elem_15,2,elem_18);
  elem_19 = mxCreateString("");
  mxSetCell(elem_15,3,elem_19);
  mxSetCell(elem_3,3,elem_15);
  mxSetCell(elem_1,1,elem_3);
  elem_20 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_20);
  elem_21 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_21);
  elem_22 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_22);
  elem_23 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_23);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_24 = mxCreateCellMatrix(1,3);
  elem_25 = mxCreateString("coder.internal.lapack.LAPACKApi");
  mxSetCell(elem_24,0,elem_25);
  elem_26 = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetCell(elem_24,1,elem_26);
  elem_27 = mxCreateString("coder.internal.blas.BLASApi");
  mxSetCell(elem_24,2,elem_27);
  mxSetCell(mxBIArgs,1,elem_24);
  elem_28 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_28);
  return mxBIArgs;
}

mxArray *cgxe_mrkgoZAWWYFs627wbafmvD_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
