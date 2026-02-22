# Kraky-lite

Kraky lite is a smaller version of kraky focused only on wifi, bluetooth and sub-GHz frequencies.
I've decided to do it so i can learn SMD sodering with a simpler project. 
This project can be used for learning the basics of wifi, bluetooth and sub-GHz frequencies attacks and protections.

---


## Main Components

| Function | Component |
|--------|----------|
| Logic board | **ESP32-S3 N16R8** |
| Sub-GHz | **CC1101** |
| Wifi/bluetooth | **NFR24L01** |
| Display | **Oled Display** |


---

## Future Features 

- microSD support

---

## WIRING DIAGRAM


<img width="803" height="826" alt="Screenshot 2026-02-16 154423" src="https://github.com/user-attachments/assets/284b548d-74a8-4908-bde3-faa1dc0de5ae" />




---

## PCB 


<img width="606" height="573" alt="Screenshot 2026-02-21 102325" src="https://github.com/user-attachments/assets/a37790d6-ac34-45c9-9c36-12789fcac23c" />





---


## PCB AND 3D RENDER COMBINED


<img width="738" height="799" alt="Screenshot 2026-02-21 000426" src="https://github.com/user-attachments/assets/4e28a3d7-f9b0-4ac7-847b-26eaa18a0350" />


---

## BOM LIST
| Component | Link |
|--------|----------|
| **ESP32-S3-N16R8** | [Aliexpress](https://it.aliexpress.com/item/1005006214506085.html?spm=a2g0o.productlist.main.34.42beDNGcDNGcGn&algo_pvid=c7ebd4d1-f37e-43e0-8528-b76b49bbafec&algo_exp_id=c7ebd4d1-f37e-43e0-8528-b76b49bbafec-33&pdp_ext_f=%7B%22order%22%3A%22237%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%214.39%214.39%21%21%215.04%215.04%21%40211b80c217716672677421292e2da6%2112000036313776249%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895&curPageLogUid=DdOQtJzkOMgO&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005006214506085%7C_p_origin_prod%3A) | 
| **buttons** | [Aliexpress](https://it.aliexpress.com/item/1005003751942617.html?spm=a2g0o.productlist.main.6.7b66UgMCUgMC2v&algo_pvid=90b119e5-116b-44ca-8d19-1b1e01badc9a&algo_exp_id=90b119e5-116b-44ca-8d19-1b1e01badc9a-5&pdp_ext_f=%7B%22order%22%3A%22457%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%212.68%212.32%21%21%2121.57%2118.69%21%40211b618e17694579682652136e0d37%2112000027951043689%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895%3BpisId%3A5000000198855826&curPageLogUid=h3YPZfgd06kE&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005003751942617%7C_p_origin_prod%3A) |
| **tft display** | [Aliexpress](https://it.aliexpress.com/item/1005006139989470.html?spm=a2g0o.productlist.main.9.78dfJA1zJA1zBO&algo_pvid=351c76ea-933f-4a2d-a8b3-514ad7c62ee9&algo_exp_id=351c76ea-933f-4a2d-a8b3-514ad7c62ee9-8&pdp_ext_f=%7B%22order%22%3A%223990%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%213.07%213.05%21%21%2124.33%2124.17%21%40211b813f17717548514921457ec96a%2112000047162642428%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895&curPageLogUid=vh1XjV2nCtp5&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005006139989470%7C_p_origin_prod%3A) |
| **10k ohm** | [Aliexpress](https://it.aliexpress.com/item/1005008049421850.html?spm=a2g0o.productlist.main.5.339e2072xf4Fp6&algo_pvid=60a0f9d2-cb3a-4061-b250-3a89b5594825&algo_exp_id=60a0f9d2-cb3a-4061-b250-3a89b5594825-4&pdp_ext_f=%7B%22order%22%3A%221081%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%212.03%211.29%21%21%2116.36%2110.40%21%40211b61bb17694589696196228e2a30%2112000043433742591%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895%3BpisId%3A5000000198855826&curPageLogUid=0AoDAOfCkDU4&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008049421850%7C_p_origin_prod%3A) |
| **5.1K ohm** | [Aliexpress](https://it.aliexpress.com/item/1005002705550504.html?spm=a2g0o.productlist.main.1.1aa2xZ7pxZ7p1I&algo_pvid=4709e6db-5db9-4b2b-922c-cc912aef84b5&algo_exp_id=4709e6db-5db9-4b2b-922c-cc912aef84b5-0&pdp_ext_f=%7B%22order%22%3A%222719%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%211.33%211.33%21%21%211.53%211.53%21%40211b80c217716675645392862e2ded%2112000021795176620%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895&curPageLogUid=qzURhFrHFgME&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005002705550504%7C_p_origin_prod%3A) |
| **am51117-3.3** | [Aliexpress](https://it.aliexpress.com/item/1005002487704059.html?spm=a2g0o.productlist.main.3.5e37L8QTL8QTQh&aem_p4p_detail=20260221015318585911214270720010847834&algo_pvid=ea4f2d53-853f-4e96-b1d1-080e2c659de5&algo_exp_id=ea4f2d53-853f-4e96-b1d1-080e2c659de5-3&pdp_ext_f=%7B%22order%22%3A%223661%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%211.93%211.93%21%21%212.22%212.22%21%40211b441e17716675983814641e9297%2112000020837902169%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895&curPageLogUid=6WlvmG2NNVx1&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005002487704059%7C_p_origin_prod%3A&search_p4p_id=20260221015318585911214270720010847834_1) |
| **2345986-1** | [Aliexpress](https://it.aliexpress.com/item/1005007419369264.html?spm=a2g0o.productlist.main.4.4508u2MKu2MK3q&aem_p4p_detail=2026022101542414472877640010640013303716&algo_pvid=f6b0fa28-2c20-49bd-9f15-d53680192fef&algo_exp_id=f6b0fa28-2c20-49bd-9f15-d53680192fef-3&pdp_ext_f=%7B%22order%22%3A%227494%22%2C%22spu_best_type%22%3A%22price%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%211.86%211.79%21%21%212.14%212.06%21%40211b61a417716676646955855e5d10%2112000040675429659%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895&curPageLogUid=mCOWM8LKrjb6&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005007419369264%7C_p_origin_prod%3A&search_p4p_id=2026022101542414472877640010640013303716_1) |
| **100nF** | [Aliexpress](https://it.aliexpress.com/item/1005005691676032.html?spm=a2g0o.cart.0.0.1eb718fcbElXUV&mp=1&pdp_npi=6%40dis%21EUR%21EUR%202.24%21EUR%201.31%21%21EUR%201.31%21%21%21%4021038e1e17694577658065675ead3b%2112000034022594969%21ct%21IT%214906144315%21%211%210%21&gatewayAdapt=glo2ita) |
| **10uF** | [Aliexpress](https://it.aliexpress.com/item/1005011610443745.html?spm=a2g0o.productlist.main.19.44c8f5fff5ffPq&algo_pvid=52247e1d-eb32-4d5c-b3f6-5517e39c67bf&algo_exp_id=52247e1d-eb32-4d5c-b3f6-5517e39c67bf-18&pdp_ext_f=%7B%22order%22%3A%2211%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%213.86%211.44%21%21%2130.54%2111.38%21%40211b61a417716728296248882e5d0b%2112000056051812861%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895%3BpisId%3A5000000200414378&curPageLogUid=OsI94ufdQ7ZQ&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005011610443745%7C_p_origin_prod%3A) |
| **2x4 pin holder** | [Aliexpress](https://it.aliexpress.com/item/1005007049075918.html?spm=a2g0o.productlist.main.14.579bKNQXKNQX6b&algo_pvid=294263cc-7d5a-49ec-819e-e1e74a3b1e3e&algo_exp_id=294263cc-7d5a-49ec-819e-e1e74a3b1e3e-13&pdp_ext_f=%7B%22order%22%3A%22107%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%211.92%211.92%21%21%2115.27%2115.27%21%40211b6c1917714046123557689e7773%2112000039229446462%21sea%21IT%214906144315%21X%211%210%21n_tag%3A-29919%3Bd%3Af5869dfc%3Bm03_new_user%3A-29895&curPageLogUid=65bfxIdz91Fv&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005007049075918%7C_p_origin_prod%3A) |

---

## Responsible Use

Kraky lite is built to make it easier for anyone to explore and understand how multifunction electronic devices work in everyday life.
It’s not intended for bypassing security systems or breaking any laws.

All features are implemented with an educational and experimental focus.

---

## Tools Used

- KiCad 9
- Fusion360
- PlatformIO

---

## Project Status

This project is **work in progress (WIP)**.  
Future updates will include:

- microSD implementation
- firmware development

---

## Contributing

Kraky lite is an **open and educational project**.  
Feedback, suggestions, and improvements are always welcome.

---
