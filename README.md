                        BÁO CÁO KẾT QUẢ BÀI TẬP LỚN : Game FlappyBird
       1.Hướng dẫn cài đặt:
       1.1. Cách lấy chương trình về:
        + download chương trình từ link github: git clone <link>
        + tất cả các câu lệnh, cài đặt để có thể chạy được chương trình:
          _ IDE sử dụng : Visual Studio 2022
          _ các file cần cài đặt: SDL2, SDL_ttf(SDL_ttf 2.0.14), SDL_image, SDL_mixer (SDL_mixer2.0.2),
          sau đó add path các đường link đến các file này trong Visual Studio 2022 (xem cách cài đặt chi tiết tại youtube: https://youtu.be/7nkKVyt0DsY )
         
![279399267_1800361700171175_8208493849920376883_n](https://user-images.githubusercontent.com/100345221/170530825-80ea6150-3890-4fcc-9990-9afa3ea787aa.png)
            
            ở mục này trong project properties ta cần add path tới mục include trong các thư viện SDL, SDL_image, SDL_mixer, SDL_ttf
![Screenshot 2022-05-27 001144](https://user-images.githubusercontent.com/100345221/170539674-31914fe4-bf6c-4d19-9a44-8f6d726a1539.png)

            tiếp theo ta copy tên các file lib của các file SDL cần thiết vào Linker/input
            
          _ do dùng IDE, để chạy chương trình, ta Build Solution or Start Debugging.
          
       2.Mô tả chung về trò chơi, các ý tưởng chính
        + Mô tả chung: Game Flappy Bird yêu cầu người chơi di chuyển con chim qua các chướng ngại vật (là các cột), ở đây con chim tự động rơi, người chơi dùng phím di chuyển (lên) để đưa con chim đi lên 1 khoảng cách nhất định, khi đó gia tốc rơi của con chim sẽ tăng 1 khoảng. Khi chạm chướng ngại vật hoặc để chim rơi xuống sàn, bạn sẽ thua: game over
        + Các ý tưởng chính:
        _ về đồ họa: ta đưa các hình ảnh như chim, cột, ảnh background, sàn để hiện lện màn hình
        _ gán tọa độ x,y cho chim và điều chỉnh cho chim đi xuống, khi có input từ bàn phím ta thay đổi tọa độ của chim để đưa chim đi lên, khi hình chữ nhật (rect) đụng vào chướng ngại vật ta sẽ kết thúc chương trình
        _ qua 1 cột ta sẽ cộng 1 điểm cho người chơi, hiện trò chơi chưa có người thắng cuộc mà chỉ có high score
        
       3.Mô tả các chức năng đã cài đặt, kèm video minh họa (chèn link video youtube)
        + Các chức năng đã cài đặt:
         _ tính điểm cho người chơi
         _ âm thanh khi qua cột
         _ màn hình chính, màn hình khi thua
         _ tùy chọn chơi lại hoặc thoát trò chơi
        + kèm video minh họa (chèn link video youtube)
        
        4.Các kỹ thuật lập trình được sử dụng trong chương trình (mảng, con trỏ, cấu trúc, lớp, đồ họa ...)
        + xử lý xâu, mảng, con trỏ, class/struct
        + sử dụng thư viện SDL, các hàm trong thư viện SDL...
        
        5.Kết luận, hướng phát triển và các điều tâm đắc rút ra được sau khi hoàn thiện chương trình
        + Kết luận: trò chơi đã cơ bản hoàn thiện, có các chức năng cơ bản đáp ứng người chơi ở mức độ dễ, tuy nhiên hình ảnh còn kém chất lượng ( do chưa tìm được nguồn ảnh chất lượng), chưa tạo được độ khó tăng dần cho game, chưa đập cánh được cho chim -> bản thân cần học/ tìm hiểu hơn nhiều
        + Hướng phát triển: tiếp tục hoàn thiện code, các chức năng cần thêm : lưu high score, người chơi có thể tùy chọn chim (chim màu đỏ, vàng , xanh...), sau khi vượt qua 30 cột có thể gặp boss game (đập chim & delay time), ở đó cung cấp cho chim khả năng nhả đạn tiêu diệt quái; sau đó mở rộng tùy chọn game ở mức độ dễ, vừa, khó,... ; mở rộng chế độ nhiều người chơi ( 2 chim cùng đua), tăng tốc độ bay của chim khi đã bay được 1 thơi gian ....
        + Điều tâm đắc rút ra được sau khi hoàn thiện chương trình: 
         _ làm quen, học tập với thư viện SDL
         _ rèn luyện được lối đi xây dựng 1 chương trình, xuất phát->chia hàm->thu gọn->comment code
         _ được trải nghiệm game tự xây dựng nên
         _ tuy game chưa được mới mẻ và mượt mà nhưng em khá vui khi thực hiện game này.
        
