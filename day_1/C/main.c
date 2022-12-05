#include <stdio.h>
#include <stdlib.h>

char* input = "62797\n\n1137\n6086\n6104\n1895\n7909\n1651\n4973\n6964\n5989\n6003\n6859\n\n2817\n3841\n5360\n2614\n1746\n3507\n1159\n3226\n4541\n1007\n3881\n4243\n1733\n4184\n2377\n\n2528\n2950\n5635\n3664\n5782\n4580\n4672\n5989\n3426\n5600\n2057\n2901\n6175\n\n48610\n\n8330\n9058\n2953\n10409\n10515\n6073\n6772\n2197\n\n1454\n1167\n5647\n5849\n2001\n1754\n3536\n1370\n1518\n1575\n5506\n3905\n\n2339\n2355\n5373\n5845\n5561\n2919\n6506\n1409\n5879\n4604\n4714\n2980\n4867\n1823\n\n4103\n20451\n23221\n\n3067\n1509\n7380\n6207\n1031\n8739\n1796\n7860\n8132\n\n2552\n4885\n14523\n4281\n8129\n\n8511\n1435\n4589\n2922\n9486\n8125\n9379\n3055\n3639\n\n38740\n\n16211\n4294\n7687\n1712\n\n10099\n9368\n7818\n11449\n3561\n2537\n11958\n\n7674\n6052\n3795\n3846\n4678\n3629\n7318\n6585\n2001\n7220\n5358\n\n9548\n4062\n7399\n7033\n11264\n\n46275\n\n2748\n20038\n7423\n\n6073\n3395\n3001\n1685\n3782\n4034\n7477\n2787\n5189\n4928\n7834\n\n6152\n2078\n3983\n5973\n3099\n2668\n5509\n6790\n5095\n5716\n3928\n3651\n4353\n\n2324\n4994\n7860\n6198\n5793\n8073\n6584\n3618\n\n5454\n4393\n2767\n3584\n3049\n1330\n6495\n2401\n2032\n6093\n4161\n2423\n2227\n1485\n\n47294\n\n3251\n4899\n4344\n7427\n5739\n3455\n7449\n6505\n5732\n5556\n4162\n\n7382\n6713\n2642\n3282\n6120\n6768\n2510\n1058\n5668\n3874\n6522\n2193\n\n68177\n\n1202\n16326\n5274\n\n5407\n4950\n1632\n7838\n7200\n2903\n7157\n7222\n2700\n1327\n3808\n\n9007\n18835\n\n8076\n2472\n8440\n2343\n3318\n1370\n7294\n7302\n1086\n7312\n\n3203\n1707\n2442\n4856\n2106\n4742\n5322\n1625\n3597\n1216\n1860\n2986\n4170\n2550\n2291\n\n1334\n5510\n6574\n7667\n3351\n5168\n1992\n1642\n7325\n3045\n3026\n\n11629\n30436\n\n4759\n4378\n2336\n2445\n1654\n3107\n3573\n5823\n3674\n5412\n4144\n6008\n5593\n2144\n\n4744\n3597\n7879\n9312\n2539\n6903\n5299\n2385\n1285\n\n2235\n1842\n2412\n3271\n7324\n4749\n4947\n6445\n3707\n5131\n6081\n2996\n\n6119\n1077\n1532\n3836\n3825\n1677\n2989\n2320\n2993\n4053\n3514\n4403\n2769\n1642\n\n3576\n1351\n2614\n1445\n5560\n1064\n1447\n3491\n4846\n1895\n4172\n5915\n4801\n6360\n\n5495\n3521\n1020\n7024\n2201\n1956\n5994\n7108\n4368\n6589\n2125\n\n9607\n7759\n8294\n9219\n13252\n9410\n\n1002\n2930\n2950\n1481\n4450\n6035\n4757\n3031\n1162\n4348\n3853\n4003\n3810\n5328\n3700\n\n7222\n7908\n10261\n8815\n5428\n5628\n\n5901\n5817\n2869\n4236\n3255\n6376\n3519\n3320\n1550\n5964\n3036\n6141\n3363\n3451\n\n8692\n5150\n6968\n2349\n9604\n1650\n5346\n4464\n\n14434\n\n1269\n2245\n3604\n4102\n3153\n4847\n5630\n1368\n4024\n3184\n3043\n4360\n5111\n2277\n4309\n\n1028\n5088\n4334\n2923\n4670\n5247\n2517\n2019\n2905\n2714\n4577\n6086\n3578\n3444\n\n3577\n1890\n2953\n6922\n2579\n8789\n5689\n3900\n5203\n2389\n\n9776\n2610\n4602\n5502\n10238\n4465\n7608\n4954\n\n8619\n4813\n7994\n2818\n3322\n4977\n4664\n8612\n1085\n1957\n\n8435\n2875\n8535\n2645\n5352\n5266\n8246\n\n6632\n4577\n2210\n6604\n6558\n7280\n6908\n2512\n6758\n2750\n\n1126\n9574\n9451\n16976\n\n5250\n6844\n3339\n7324\n6934\n5858\n6420\n1676\n8578\n\n5335\n10082\n9784\n4599\n7897\n7693\n8058\n\n18781\n3566\n20903\n\n6380\n1702\n3926\n\n3902\n6939\n8036\n5419\n1289\n5025\n5554\n3435\n3332\n1916\n\n7356\n12520\n7346\n11017\n11388\n4624\n\n5334\n5736\n5901\n1639\n1296\n2931\n4830\n4069\n4097\n5665\n5529\n5345\n4527\n2858\n\n5476\n1781\n6609\n4309\n7392\n1871\n5736\n7117\n6936\n3482\n4152\n\n4186\n6365\n5636\n4565\n4235\n6395\n2761\n3815\n7923\n6308\n7684\n\n9859\n4769\n8278\n12910\n1311\n2143\n\n2474\n3505\n2759\n3216\n3787\n3693\n2637\n3237\n5553\n5879\n5727\n2734\n3346\n2406\n\n2187\n4922\n1515\n2084\n3633\n6094\n1252\n6325\n3206\n5142\n6339\n1757\n5358\n\n11241\n7086\n6813\n14664\n1548\n\n7377\n5783\n11235\n9630\n4109\n8722\n\n16111\n3786\n13852\n14660\n14906\n\n3257\n9139\n2882\n5982\n10228\n3118\n\n13293\n5413\n11057\n\n12677\n17863\n9645\n\n3589\n13556\n15197\n7093\n\n7078\n9565\n15193\n7844\n\n5907\n1152\n2321\n3793\n1991\n7892\n10004\n3540\n\n5861\n11769\n10640\n9553\n1750\n3876\n\n4046\n2345\n5389\n5518\n6114\n5106\n5426\n3467\n1493\n1241\n5264\n5131\n3364\n5723\n\n1905\n2588\n4692\n3798\n1245\n6449\n3754\n1998\n6074\n3699\n2096\n1999\n5222\n5688\n\n10979\n5452\n2078\n11543\n\n1844\n7544\n10666\n5272\n6913\n8789\n7957\n8348\n\n4984\n7278\n2353\n2444\n7917\n5469\n8641\n1132\n4171\n4078\n\n20787\n18527\n\n5276\n6022\n1680\n4706\n2061\n5053\n3811\n2078\n2219\n3921\n4008\n3360\n1241\n3652\n5379\n\n3261\n1286\n12019\n15867\n\n9142\n6718\n6759\n1763\n5639\n8586\n2769\n8583\n5679\n\n7839\n7346\n6043\n2270\n8994\n2060\n12109\n\n47450\n\n4222\n3717\n2902\n1498\n3681\n1365\n5850\n4158\n3379\n2187\n1534\n3932\n4737\n6031\n\n4562\n4430\n3096\n2073\n6403\n4148\n3698\n2477\n3360\n2148\n2615\n2159\n6438\n1214\n\n6891\n6856\n7163\n2424\n7346\n4006\n3889\n5080\n4668\n5496\n6872\n\n8337\n13654\n\n3495\n8348\n5138\n3214\n5881\n2857\n6331\n7476\n1135\n4155\n\n4699\n7203\n6356\n8627\n2205\n5096\n2580\n7067\n1478\n4245\n\n3098\n8610\n9747\n3238\n10772\n4767\n8079\n5361\n\n7130\n5330\n9323\n4661\n3677\n2658\n9525\n9844\n\n1451\n1186\n1323\n3923\n4568\n1052\n4270\n4108\n3231\n4942\n5792\n6037\n5366\n5402\n\n9001\n15082\n9282\n11469\n7401\n\n2070\n2095\n3183\n6326\n1557\n4983\n6324\n1198\n5658\n5539\n4435\n5491\n1304\n\n7164\n2101\n8308\n3432\n6310\n9321\n6141\n6546\n7730\n\n6191\n4811\n1707\n3732\n7322\n3741\n5246\n2825\n5243\n4113\n4916\n\n5626\n7351\n3369\n2744\n2540\n3542\n5842\n3729\n1105\n\n1135\n13062\n2337\n14278\n\n8078\n8178\n4760\n8051\n1113\n4351\n5652\n5403\n4777\n\n4998\n1638\n3990\n5943\n2335\n4550\n4345\n3359\n1514\n4685\n4102\n4274\n6022\n5273\n\n7334\n7391\n6920\n5420\n6627\n3521\n6289\n6204\n6416\n4061\n4534\n\n4935\n3249\n3556\n3618\n4499\n4136\n1690\n5033\n2002\n2454\n1912\n2113\n4829\n4944\n2339\n\n4860\n1381\n5035\n4417\n3075\n2366\n3567\n1740\n3126\n1691\n1147\n1525\n\n13371\n14166\n9536\n10956\n2600\n\n3575\n2155\n4514\n2401\n3693\n6379\n6587\n1079\n4094\n3327\n7573\n\n3948\n5553\n3883\n1557\n4833\n4933\n4883\n1973\n2027\n4852\n5735\n5726\n1879\n1185\n3525\n\n2863\n1210\n2359\n6505\n3668\n2682\n5567\n6375\n6425\n6476\n6051\n1022\n5208\n3114\n\n8666\n11550\n4922\n3332\n7784\n6833\n3659\n\n3279\n3382\n8593\n9552\n2903\n\n2951\n2006\n1185\n5092\n5625\n1309\n4907\n3835\n2464\n2644\n5631\n2786\n4778\n2325\n4312\n\n9449\n9341\n8140\n8892\n5531\n1109\n7598\n8012\n\n5204\n5931\n4082\n3376\n3591\n2371\n4945\n2603\n6084\n2646\n5100\n3494\n5278\n3099\n\n11334\n6895\n3636\n6227\n5295\n12703\n\n8582\n6879\n\n10795\n11724\n13546\n14298\n\n12038\n3535\n11070\n8190\n1032\n1780\n8630\n\n10640\n13274\n10643\n11940\n10745\n9333\n\n5299\n6239\n1648\n6467\n6426\n2154\n7880\n5169\n3356\n6129\n5647\n\n6595\n2143\n1898\n12562\n13508\n2781\n\n59552\n\n16571\n4935\n17641\n12096\n\n6189\n3250\n5458\n5146\n5237\n2684\n\n18772\n5692\n9163\n9268\n\n5695\n3416\n2703\n3018\n4433\n1425\n1974\n4673\n2166\n3893\n3446\n1994\n2070\n2429\n\n3554\n5665\n3356\n4739\n1915\n6877\n5874\n2883\n2279\n4966\n7503\n\n1155\n2329\n5544\n2294\n3644\n6202\n7787\n6605\n7045\n\n3263\n1268\n2627\n1220\n5707\n1469\n4518\n5697\n3414\n2047\n2939\n3679\n2503\n5031\n3764\n\n5935\n3138\n2639\n4127\n5061\n2213\n5332\n5037\n4830\n3694\n3624\n3598\n4000\n2683\n\n5122\n6805\n10017\n1863\n11675\n2237\n10887\n\n1055\n1975\n2769\n6245\n3790\n1178\n2163\n5553\n5305\n6089\n1417\n1221\n6235\n\n54647\n\n8508\n5207\n1608\n3986\n8532\n7425\n4530\n8413\n2097\n\n33681\n\n2280\n7109\n2871\n6096\n6170\n1314\n4713\n1607\n4944\n3316\n2818\n\n7431\n1166\n6475\n1105\n1780\n5602\n5682\n6187\n4856\n7860\n3409\n\n4299\n3875\n3364\n4489\n3995\n1565\n4798\n2285\n1420\n5877\n3158\n3045\n2505\n1329\n\n9029\n1967\n7691\n3366\n7301\n2855\n4228\n3900\n2025\n\n3340\n6056\n5221\n5220\n1911\n2349\n3789\n3567\n2859\n3079\n5720\n1134\n3072\n1291\n\n22613\n20435\n13975\n\n14789\n\n5745\n5492\n1882\n3895\n6104\n8598\n3351\n1932\n4913\n2592\n\n1662\n3183\n3923\n5857\n6563\n3160\n3119\n5727\n6071\n3931\n\n6513\n1218\n10399\n3885\n3363\n2470\n9626\n3802\n\n6307\n2664\n9753\n10741\n1295\n\n3046\n1421\n4492\n2172\n6367\n5986\n1478\n1235\n1913\n1700\n2661\n3187\n3694\n1704\n\n2332\n2555\n1548\n1891\n3985\n2238\n3802\n4168\n5491\n1374\n5104\n6353\n\n64543\n\n2774\n7026\n2622\n1898\n7236\n1896\n4399\n3438\n2436\n2732\n7431\n2737\n\n5452\n3365\n8054\n2730\n4786\n11186\n\n2474\n22732\n\n2187\n2855\n7552\n9401\n6355\n10015\n4238\n9319\n\n7351\n5587\n3761\n6320\n4344\n7272\n1465\n1207\n5586\n6134\n2607\n6004\n\n6759\n4749\n4338\n1058\n5400\n3173\n3262\n7818\n6438\n5852\n6804\n\n11175\n14866\n6020\n1809\n1258\n\n4816\n3171\n6714\n2291\n4243\n4824\n10385\n4451\n\n3102\n5924\n6672\n1872\n1009\n1176\n5943\n2068\n3702\n\n14085\n14731\n\n5651\n6762\n1985\n5851\n7277\n1493\n7316\n1193\n3737\n3291\n\n1918\n9163\n3715\n5271\n8317\n3085\n2782\n7762\n5383\n\n1195\n2050\n4127\n1946\n5662\n1608\n6606\n6708\n2771\n5533\n2638\n6048\n\n8916\n2959\n16153\n3649\n\n17831\n11271\n4407\n11756\n\n1932\n5296\n4133\n3164\n2942\n5498\n4442\n4447\n3267\n4143\n2401\n5074\n1831\n4235\n\n1529\n1414\n4775\n3829\n3121\n3573\n3423\n3269\n1017\n4698\n5104\n2655\n2427\n5958\n\n1209\n7712\n3681\n6730\n6569\n1763\n5465\n2218\n4656\n1828\n\n2045\n10343\n3841\n7177\n8506\n12930\n\n3801\n4977\n5578\n2208\n4739\n4811\n2201\n3004\n5233\n4112\n5234\n5615\n2187\n\n7309\n7544\n1423\n2269\n5221\n4858\n4996\n1683\n9331\n\n1834\n6149\n6941\n1568\n1886\n6818\n7022\n5841\n5568\n8000\n3910\n\n8233\n5998\n2020\n6423\n7691\n1420\n5081\n8221\n5648\n7694\n\n14918\n18742\n10687\n19905\n\n3390\n8841\n2124\n10402\n4664\n10831\n\n9777\n7834\n10672\n9873\n6758\n1471\n11828\n\n1679\n6895\n6007\n2245\n8309\n3319\n1232\n10468\n\n51082\n\n2292\n6231\n3446\n3591\n1553\n1615\n1514\n6233\n6327\n3430\n1732\n5356\n4799\n\n2583\n4699\n5594\n3530\n3477\n3473\n4356\n3594\n5404\n2738\n5766\n5897\n2218\n1597\n3830\n\n4683\n4634\n6635\n5255\n2092\n6636\n3209\n7142\n1022\n\n6301\n9915\n4277\n11866\n10155\n\n24693\n24851\n\n4192\n10576\n9003\n7156\n11894\n\n8088\n14949\n19773\n13274\n\n4683\n22445\n14904\n\n10069\n9513\n7768\n11446\n6753\n12021\n\n2863\n6080\n3395\n2648\n6585\n1411\n3363\n5331\n2830\n1437\n3281\n5924\n6409\n\n6012\n4523\n1688\n5603\n3035\n3220\n7254\n4670\n6197\n4181\n6032\n4619\n\n2186\n5986\n5703\n3074\n7566\n4097\n7971\n4868\n7182\n5065\n1279\n\n10973\n9182\n13792\n9868\n1509\n9266\n\n2846\n4728\n5432\n1085\n4273\n1620\n3800\n1631\n1141\n4895\n1402\n5547\n1131\n2330\n\n8273\n3309\n8168\n12350\n11300\n4743\n\n11440\n5977\n1085\n13808\n2190\n9288\n\n2271\n11361\n\n4963\n1680\n7510\n5354\n2117\n7728\n6051\n5256\n3478\n1075\n1961\n\n3812\n4709\n2691\n4316\n3328\n2828\n2937\n2812\n1539\n5201\n1182\n2697\n2406\n2574\n4539\n\n4415\n8204\n1583\n10931\n7518\n3135\n11661\n\n3389\n5173\n5986\n3872\n3959\n8821\n7434\n2166\n8156\n\n2463\n4935\n7038\n6770\n5818\n6881\n2282\n7335\n4367\n1801\n2507\n4071\n\n9939\n14902\n7567\n15568\n10587\n\n2163\n2588\n2715\n4589\n6593\n6838\n4404\n3186\n4271\n3686\n3641\n5165\n5708\n\n6209\n13133\n25360\n\n3109\n5778\n4388\n1042\n4937\n8197\n1456\n8167\n\n9199\n7098\n14027\n\n6382\n1660\n2778\n8067\n3405\n2429\n6503\n7984\n5799\n7534\n5088\n\n9638\n14010\n5875\n6893\n\n2598\n2706\n3987\n4140\n3171\n5672\n5529\n3617\n5198\n2429\n2728\n4763\n2852\n5389\n\n3719\n1285\n4554\n3677\n5209\n3827\n5062\n4835\n8068\n4674\n5854\n\n6077\n6747\n6325\n4287\n7242\n6317\n3989\n6724\n1754\n5498\n1931\n\n10902\n11104\n10540\n4778\n7178\n4711\n\n1705\n3407\n6048\n3364\n3743\n3938\n4784\n6080\n3543\n1957\n2590\n2031\n\n28157\n6204\n\n7129\n7476\n1886\n10496\n4930\n2967\n1258\n3532\n\n4133\n2586\n1916\n4464\n1008\n3310\n5367\n4347\n5569\n3878\n3210\n2442\n2355\n5997\n3101\n\n4460\n18575\n6967\n17122\n\n1720\n2723\n5410\n8981\n3355\n4210\n2549\n3094\n\n14639\n17107\n14832\n\n3736\n24734\n\n3133\n3998\n5708\n6961\n1514\n3927\n4208\n5004\n2708\n1381\n5082\n4476\n\n4021\n1075\n1593\n3541\n2463\n4776\n4665\n6168\n1928\n6421\n3967\n5875\n2584\n1946\n\n3506\n1054\n1846\n4946\n3394\n7435\n7099\n3703\n6746\n2129\n1980\n4505\n\n7828\n8885\n8007\n4297\n1731\n3825\n1728\n4304\n\n3217\n12089\n2242\n10288\n9462\n11809\n\n10335\n3139\n10617\n6833\n1976\n3093\n8219\n\n7749\n5487\n7508\n6975\n5363\n4141\n3823\n7609\n5667\n4064\n7969\n\n6803\n1600\n8970\n8154\n3949\n9138\n6012\n4745\n6778\n\n5215\n8264\n3784\n14282\n\n5819\n13811\n5523\n3645\n\n12004\n8659\n1039\n1507\n3797\n2568\n12129\n\n3547\n7073\n5035\n2269\n7986\n6478\n5045\n6103\n1003\n7281\n7503\n\n2567\n6027\n6497\n5871\n2833\n2117\n4851\n4934\n6324\n4101\n2032\n4308\n4369\n\n4262\n15796\n13104\n9996\n\n4521\n4209\n4691\n11223\n1369\n11416\n8253\n\n8708\n11136\n15770\n\n1132\n1488\n4493\n5822\n3022\n4249\n1436\n5324\n4237\n3740\n3071\n1298\n5247\n5217\n\n6199\n9151\n9154\n8903\n9415\n6703\n7137\n7053\n4727\n\n15631\n16811\n14050\n\n5183\n4988\n3932\n6304\n6914\n4061\n5694\n5111\n3668\n5769\n6458\n6400\n3736";

void null_digits(char* digits, int len_digits) {
    for (int i = 0; i < len_digits; i++)
        digits[i] = '\0';
}

int main()
{
    int max = 0;
    int sum = 0;
    int curr_digit = 0;
    int number;
    char digits[5]; // 5 digits should be enough for a number
    null_digits(digits, 5);
    char prev_char = '\0';

    while (*input) {
        if (*input == '\n') {
            if (prev_char == '\n') {
                if (sum > max)
                    max = sum;
                sum = 0;
            }
            else {
                number = atoi(digits);
                sum += number;
                null_digits(digits, 5);
                curr_digit = 0;
            }
        }
        else {
            digits[curr_digit] = *input;
            curr_digit += 1;
        }

        prev_char = *input;
        input++;
    }

    number = atoi(digits);
    sum += number;
    if (sum > max)
        max = sum;

    printf("Maximum is: %d", max); // part 1 solution

    return 0;
}